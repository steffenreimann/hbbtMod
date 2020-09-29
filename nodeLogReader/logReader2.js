var follow = require('text-file-follower');

var allEventsCallback = function (event, filename, line) {
    switch (event) {
        case 'success':
            console.log("Got success -- file exists and we're following");
            break;
        case 'line':
            var time = getItem(line);
            var id = getItem(time.rest);
            if (getType(id.rest, 'SatisfactoryModLoader')) {
                console.log(id.rest)
            }
            break;
        case 'close':
            console.log("We must have called follower.close()");
            break;
        case 'error':
            console.log("Oh noes! Here's the error message: " + value);
            break;
    }
};

// Pass options and a callback
var follower = follow(
    'C:/Users/Steffen/AppData/Local/FactoryGame/Saved/Logs/FactoryGame.log',
    { persistent: true },
    allEventsCallback);

// Totally redundant with the listener callback, but...
follower.on('all', allEventsCallback);

// We can also listen for specific events, using a
// different callback signature:
follower.on('line', function (filename, line) {
    console.log('Got a new line from ' + filename + ': ' + line);
});


function getItem(str) {
    var pos1Item1 = str.indexOf("[");
    var pos2Item2 = str.indexOf("]");
    var val = str.substring(pos1Item1, pos2Item2 + 1);
    var rest = str.slice(pos2Item2 + 1);
    var ret = { val: val, rest: rest }
    return ret
}


function getType(str, type) {
    var n = str.search(type);
    if (n != -1) {
        return true
    } else {
        return false
    }
}



// ...
// When we're done, close the follower, or else it'll keep our
// process alive forever (if we opened it with persistent:true).
follower.close();