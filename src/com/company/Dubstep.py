def song_decoder(song):
    answer = song.split("WUB")
    while "" in answer:
        answer.remove("")
    return " ".join(answer)
