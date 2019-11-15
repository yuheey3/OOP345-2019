// Name: Yuki Waka
// Seneca Student ID: 141082180
// Seneca email: ywaka@myseneca.ca
// Date of completion: Nov.11.2019
//
// I confirm that the content of this file is created by me,
//   with the exception of the parts provided to me by my professor.
#ifndef __SONGCOLLECTION_H__
#define __SONGCOLLECTION_H__
#include<iostream>
#include<vector>
#include<list>
#include<string>

namespace sdds {

	struct Song {
		Song(std::istream& is);
		std::string artist;
		std::string title;
		std::string album;
		double m_price;
		int year;
		int length;
		Song();
	};
	class SongCollection {
		std::vector<Song> m_song;

	public:
		SongCollection(const char* filename);
		void display(std::ostream& out) const;
		void sort(const char*);
		void cleanAlbum();
		bool inCollection(std::string) const;
		std::list<Song> getSongsForArtist(std::string) const;

	};
	std::ostream& operator<<(std::ostream& out, const Song& theSong);

}

#endif
