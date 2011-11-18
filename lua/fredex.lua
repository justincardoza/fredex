local minWeight, cost, weight, totalCost;
local bestCost = 200000000;
file = io.open(arg[1], 'r');

file:read(8);
minWeight = file:read('*n');

while true do
	cost = file:read('*n');
	weight = file:read('*n');
	if cost == nil or weight == nil then break; end
	totalCost = math.floor(minWeight / weight) * cost;
	if(minWeight % weight ~= 0) then totalCost = totalCost + cost; end
	if(totalCost < bestCost) then bestCost = totalCost; end
end

print(bestCost);
