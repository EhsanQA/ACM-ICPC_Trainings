class Calculator(object):
    def evaluate(self, s):
        if s == "":
            return 0
        s = "".join(s.split())
        while ")" in s:
            index_c = s.find(")")
            for i in range(index_c, -1, -1):
                if s[i] == "(":
                    index_o = i
                    break
            f = s[index_o: index_c + 1]
            # print(index_o, index_c, f)
            s = self.para(s, f, index_o, index_c)
        answer = self.cal(s)
        print(answer + "THE ANSWER")
        return int(answer)

    def para(self, s, f, index_o, index_c):
        b = s[:index_o]
        a = s[index_c + 1:]
        # print(b, a)
        n = self.cal(f)
        # print(b + str(n) + a)
        return b + str(n) + a

    def cal(self, p):
        print(p)
        is_one_digit = True
        while "*" in p:
            is_one_digit = False
            t_i = p.find("*")
            f_i = 0
            s_i = 0
            for i in range(t_i - 1, -1, -1):
                if not p[i].isnumeric():
                    f_i = i + 1
                    break
                if i == 0:
                    f_i = 0
            for i in range(t_i + 1, len(p)):
                if not p[i].isnumeric():
                    s_i = i
                    break
                if i == len(p) - 1:
                    s_i = i + 1
            # print(p[f_i: s_i])
            nums = self.numfinder(p[f_i: s_i])
            temp = int(nums[0]) * int(nums[1])
            p = p[:f_i] + str(temp) + p[s_i:]
            # print(p)
        while "/" in p:
            is_one_digit = False
            t_i = p.find("/")
            f_i = 0
            s_i = 0
            for i in range(t_i - 1, -1, -1):
                if not p[i].isnumeric():
                    f_i = i + 1
                    break
                if i == 0:
                    f_i = 0
            for i in range(t_i + 1, len(p)):
                if not p[i].isnumeric():
                    s_i = i
                    break
                if i == len(p) - 1:
                    s_i = i + 1
            # print(p[f_i: s_i])
            nums = self.numfinder(p[f_i: s_i])
            temp = int(int(nums[0]) / int(nums[1]))
            p = p[:f_i] + str(temp) + p[s_i:]
            # print(p)

        while "+" in p:
            # print(p)
            is_one_digit = False
            t_i = p.find("+")
            f_i = 0
            s_i = 0
            for i in range(t_i - 1, -1, -1):
                if not p[i].isnumeric():
                    f_i = i + 1
                    break
                if i == 0:
                    f_i = 0
            for i in range(t_i + 1, len(p)):
                if not p[i].isnumeric():
                    s_i = i
                    break
                if i == len(p) - 1:
                    s_i = i + 1
            # print(p[f_i: s_i])
            nums = self.numfinder(p[f_i: s_i])
            temp = int(nums[0]) + int(nums[1])
            p = p[:f_i] + str(temp) + p[s_i:]
            # print(p)
        while "-" in p and len(p) != 2:
            is_one_digit = False
            t_i = p.find("-")
            f_i = 0
            s_i = 0
            for i in range(t_i - 1, -1, -1):
                if not p[i].isnumeric():
                    f_i = i + 1
                    break
                if i == 0:
                    f_i = 0
            for i in range(t_i + 1, len(p)):
                if not p[i].isnumeric():
                    s_i = i
                    break
                if i == len(p) - 1:
                    s_i = i + 1
            # print(p[f_i: s_i])
            nums = self.numfinder(p[f_i: s_i])
            # print(nums)
            temp = int(nums[0]) - int(nums[1])
            p = p[:f_i] + str(temp) + p[s_i:]
            # print(p)
        print("THE RETURNED: ", is_one_digit, p[1:len(p)-1], p)
        return p[1:len(p) - 1] if "(" in p else p

    def numfinder(self, p):
        # print(p)
        first = ""
        second = ""
        finished = False
        for i in p:
            if i.isnumeric() and not finished:
                first += i
            elif not i.isnumeric():
                finished = True
            if i.isnumeric() and finished:
                second += i
        # print(first, second)
        return [first, second]


r = Calculator()
r.evaluate("()(5)  ()   * 2")
# r.cal("102")
# r.numfinder("123+2123")


























# n = 0
# t = 0
# o_t = None
# for i in inparan:
#     if i.isnumeric() and o_t is None:
#     n += int(i)
#             t = int(i)
#         elif i == "*":
#             o_t = "*"
#         elif i == "/":
#             o_t = "/"
#         elif i == "+":
#             o_t = "+"
#         elif i == "-":
#             o_t = "-"
#         elif i.isnumeric() and o_t is not None:
#             if o_t == "+":
#                 n += t
#             elif o_t == "-":
#                 n -= t
#             elif o_t == "*":
#                 n *= t
#             elif o_t == "/":
#                 n /= t
#     return n
