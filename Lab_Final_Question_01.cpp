#include <bits/stdc++.h>
using namespace std;

struct Playlist
{
	string title;
	string artist;
	int duration;
	Playlist * next;
};

Playlist* CreateNode(string title, string artist, int duration)
{
	Playlist *newNode = new Playlist;
	newNode->title = title;
	newNode->artist = artist;
	newNode->duration = duration;
	newNode->next = nullptr;
	return newNode;
}

void insertion(Playlist* &head, string title, string artist, int duration)
{
	Playlist *newNode = CreateNode(title, artist, duration);
	if (newNode == nullptr)
	{
		printf("Memory allocation failed!\n");
		return;
	}

	if (head == nullptr)
	{
		head = newNode;
		return;
	}

	Playlist *current = head;
	while (current->next)
	{
		current = current->next;
	}

	current->next = newNode;
}

bool remove(Playlist* &head, string title)
{
	if (head->title == title)
	{
		Playlist *temp = head;
		head = temp->next;
		delete temp;
		return true;
	}

	Playlist *current = head;
	while (current)
	{
		if (current->next->title == title)
		{
			Playlist *temp = current->next;
			current->next = current->next->next;
			delete temp;
			return true;
		}

		current = current->next;
	}

	return false;
}

void display(Playlist *head)
{
	Playlist *current = head;
	cout << "Title Artist Duration" << endl;
	while (current)
	{
		cout << current->title << setw(20 - (current->title.length() - 5) + current->artist.length()) << current->artist << setw(6 - ((current->artist.length() - 6)) + 3) << current->duration << endl;
		current = current->next;
	}
}

int totalDuration(Playlist *head)
{
	int d = 0;
	Playlist *current = head;
	while (current)
	{
		d += current->duration;
		current = current->next;
	}

	return d;
}

int main()
{
	Playlist *head = nullptr;
	int a, n, dur, x = 1;
	string title, artist;
	while (x)
	{
		cout << "1. Insert song to playlist." << endl;
		cout << "2. Delete a song from playlist." << endl;
		cout << "3. Add more song to the palylist." << endl;
		cout << "4. Display the playlist." << endl;
		cout << "5. Display the total duration of the playlist." << endl;
		cout << "6. Exit." << endl;
		cin >> a;
		switch (a)
		{
			case 1:
				cout << "How much song you want to add to your playlist?:-";
				cin >> n;
				cin.ignore();
				for (int i = 1; i <= n; i++)
				{
					cout << "Song-" << i << ": ";
					getline(cin, title);
					cout << "Artist-" << i << ": ";
					cin >> artist;
					cout << "Duration: ";
					cin >> dur;
					insertion(head, title, artist, dur);
					cin.ignore();
				}

				break;
			case 2:
				cout << "Name the song which you want to be deleted:- ";
				cin >> title;
				if (remove(head, title))
					cout << "Your song has been deleted successfully." << endl;
				else
					cout << "This song is not in your playlist." << endl;
				break;
			case 3:
				cout << "Song: ";
				getline(cin, title);
				cout << "Artist: ";
				cin >> artist;
				cout << "Duration: ";
				cin >> dur;
				insertion(head, title, artist, dur);
				cout << "Added successfully" << endl;
				break;
			case 4:
				display(head);
				break;
			case 5:
				cout << "Total duration of your playlist: " << totalDuration(head) << "Seconds" << endl;
				break;
			case 6:
				x = 0;
				break;
			default:
				cout << "Invalid input. Please Try again." << endl;
				break;
		}
	}

	return 0;
}