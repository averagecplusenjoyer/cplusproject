import csv
from requests import get

with open('matches_last_pars.csv', 'w', newline='') as csvformatmatches:
    writer = csv.writer(csvformatmatches, delimiter=',', quoting=csv.QUOTE_MINIMAL)
    writer.writerow(['players', 'radiant_win', 'duration', 'pre_game_duration', 'start_time', 'match_id',
                     'match_seq_num', 'tower_status_radiant', 'tower_status_dire', 'barracks_status_radiant',
                     'barracks_status_dire', 'cluster', 'first_blood_time', 'lobby_type', 'human_players',
                     'leagueid', 'game_mode', 'flags', 'engine', 'radiant_score', 'dire_score', 'picks_bans',
                     'od_data', 'metadata', 'patch', 'region'])
    for match_number_addition in range(20):
        url = 'https://api.opendota.com/api/matches/{}'.format(7772312000 + match_number_addition)
        current = get(url)
        writer.writerow(current.json().values())

