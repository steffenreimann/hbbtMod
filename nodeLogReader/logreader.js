
var follow = require('text-file-follower');

var follower = follow('C:/Users/Steffen/AppData/Local/FactoryGame/Saved/Logs/FactoryGame.log');

follower.on('line', function (filename, line) {

    var time = getItem(line);
    var id = getItem(time.rest);
    if (getType(id.rest, 'SatisfactoryModLoader')) {
        console.log(id.rest)
    }


    //console.log(id.rest)
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

