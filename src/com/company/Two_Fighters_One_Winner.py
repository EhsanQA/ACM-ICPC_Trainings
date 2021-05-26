def declare_winner(f1, f2, f):
    if f1.name == f:
        f2.health -= f1.damage_per_attack
        f = f2.name
        if f2.health <= 0:
            return f1.name
    elif f2.name == f:
        f1.health -= f2.damage_per_attack
        f = f1.name
        if f1.health <= 0:
            return f2.name
    return declare_winner(f1, f2, f)
