const { exec } = require('child_process');

const ls = exec('node logreader.js', function (error, stdout, stderr) {
    if (error) {
        console.log(error.stack);
        console.log('Error code: ' + error.code);
        console.log('Signal received: ' + error.signal);
    }
    console.log('LR Child Process STDOUT: ' + stdout);
    console.log('LR Child Process STDERR: ' + stderr);
});

ls.on('exit', function (code) {
    console.log('Child process exited with exit code ' + code);
});




const fg = exec('E:/epicgames/SatisfactoryEarlyAccess/FactoryGame.exe -EpicPortal', function (error, stdout, stderr) {
    if (error) {
        console.log(error.stack);
        console.log('Error code: ' + error.code);
        console.log('Signal received: ' + error.signal);
    }
    console.log('FG Child Process STDOUT: ' + stdout);
    console.log('FG Child Process STDERR: ' + stderr);
});

fg.on('exit', function (code) {
    console.log('Child process exited with exit code ' + code);
});