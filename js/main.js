const {performance} = require('perf_hooks');

var n = 10000;
var a = [];
for (var i = 0; i < n; i++)
    a.push(n - i);
//console.log(a);
var start = performance.now();
for (var i = 0; i < n - 1; i++) {
    for (var j = i + 1; j < n; j++) {
        if (a[i] > a[j]) {
            var tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
}
var end = performance.now();
//console.log(a);

console.log("" + ((end - start) / 1000) + " seconds");
