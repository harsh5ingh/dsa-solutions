var minimumCost = function (cost) {
    let sum = 0;
    cost = cost.sort((b, a) => a - b);
    for (let i = 0; i < cost.length; i++) {
        if (i % 3 !== 2) {
            sum += cost[i]
        }
    }
    return sum;
};