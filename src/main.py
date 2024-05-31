from collections import defaultdict

def main():
    word_dict = defaultdict(int)
    words_count = 0
    with open("input.txt", 'r') as f:
        for line in f:
            words = [x.lower() for x in line.split(' ') if x != '']
            for word in words:
                words_count += 1
                word_dict[word] += 1

        for k, v in word_dict.items():
            print(f'{k}: {v / words_count * 100}%')
        print(words_count)



if __name__ == '__main__':
    main()