s, n = map(int, input().split())
cur = 0
players = [(3, i) for i in range(n)]

while len(players) > 1:
    cur += s-1
    cur %= len(players)
    res, p = players[cur]
    if res == 3:
        players = players[:cur] + [(2, p), (2,p)] + players[cur+1:]
    elif res == 2:
        players[cur] = (1, p)
        cur += 1
        cur %= len(players)
    elif res == 1:
        players.pop(cur)

print(players[0][1] + 1)