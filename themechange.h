#pragma once
#include <sstream>
#include <iostream>
#include <string>

namespace RSEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for themechange
	/// </summary>
	public ref class themechange : public System::Windows::Forms::Form
	{
	public:
		themechange(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~themechange()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	private: System::Windows::Forms::TextBox^ lvlpos;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::MaskedTextBox^ output;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::CheckBox^ useTreeschk;
	private: System::Windows::Forms::CheckBox^ useTowerschk;
	private: System::Windows::Forms::CheckBox^ useAltGroundchk;
	private: System::Windows::Forms::CheckBox^ usePyramidschk;
	private: System::Windows::Forms::CheckBox^ usePalmTreeschk;
	private: System::Windows::Forms::CheckBox^ useSlasherschk;
	private: System::Windows::Forms::CheckBox^ useBuildingschk;
	private: System::Windows::Forms::CheckBox^ useFloodLightschk;
	private: System::Windows::Forms::CheckBox^ useFilmGrainEffectchk;
	private: System::Windows::Forms::CheckBox^ useAltPalmTreeschk;
	private: System::Windows::Forms::CheckBox^ useTeslaschk;
	private: System::Windows::Forms::CheckBox^ useRetroEffectschk;
	private: System::Windows::Forms::CheckBox^ useGreenMonitorEffectschk;
	private: System::Windows::Forms::CheckBox^ useColorMonitorEffectchk;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;










	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lvlpos = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->output = (gcnew System::Windows::Forms::MaskedTextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->useTreeschk = (gcnew System::Windows::Forms::CheckBox());
			this->useTowerschk = (gcnew System::Windows::Forms::CheckBox());
			this->useAltGroundchk = (gcnew System::Windows::Forms::CheckBox());
			this->usePyramidschk = (gcnew System::Windows::Forms::CheckBox());
			this->usePalmTreeschk = (gcnew System::Windows::Forms::CheckBox());
			this->useSlasherschk = (gcnew System::Windows::Forms::CheckBox());
			this->useBuildingschk = (gcnew System::Windows::Forms::CheckBox());
			this->useFloodLightschk = (gcnew System::Windows::Forms::CheckBox());
			this->useFilmGrainEffectchk = (gcnew System::Windows::Forms::CheckBox());
			this->useAltPalmTreeschk = (gcnew System::Windows::Forms::CheckBox());
			this->useTeslaschk = (gcnew System::Windows::Forms::CheckBox());
			this->useRetroEffectschk = (gcnew System::Windows::Forms::CheckBox());
			this->useGreenMonitorEffectschk = (gcnew System::Windows::Forms::CheckBox());
			this->useColorMonitorEffectchk = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lvlpos
			// 
			this->lvlpos->Location = System::Drawing::Point(68, 29);
			this->lvlpos->Name = L"lvlpos";
			this->lvlpos->Size = System::Drawing::Size(100, 22);
			this->lvlpos->TabIndex = 1;
			this->lvlpos->TextChanged += gcnew System::EventHandler(this, &themechange::lvlpos_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"level position";
			this->label1->Click += gcnew System::EventHandler(this, &themechange::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(333, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"theme";
			// 
			// output
			// 
			this->output->Location = System::Drawing::Point(12, 222);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(827, 22);
			this->output->TabIndex = 8;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(72) {
				L"Cloud", L"Massif", L"Sky", L"Forest", L"Desert (Cyan)",
					L"Volcano", L"illusion", L"Desert (Orange)", L"City (Light)", L"City (Dark)", L"Sci-Tech", L"(Sci-Tech) illusion", L"Tetris (Blue)",
					L"Tetris (Cyan Trees+Tetris figures)", L"Tetris (Cyan Buildings)", L"E-labyrinth (Violet)", L"E-labyrinth (Blue+Blue Ball)",
					L"E-labyrinth (Blue+Yellow Ball)", L"Castle In The Sky (Orange Gem)", L"Castle In The Sky (Red Gem)", L"Volcano (Castle In The Sky)",
					L"Halloween (Blue)", L"Halloween (Grey)", L"Ghost Dance", L"Deep Space (Blue)", L"Deep Space (Green)", L"Christmas (Cyan)", L"Christmas (Orange)",
					L"Monody", L"Kung Fu (Green)", L"Kung Fu (Yellow)", L"Candy (Cyan)", L"Candy (Blue)", L"1UP (Violet)", L"8 Bits (Green)", L"1UP (Grey)",
					L"Matrix", L"Cube", L"Poker", L"JOKER", L"Reggae", L"Mental Rave", L"Relics", L"Fairy Tale", L"Street Basketball ", L"Hoop Dream",
					L"Midnight Carnival (Blue)", L"Halloween Escape (Green)", L"Midnight Carnival (Orange)", L"Ignite", L"Laser", L"The Winter (White)",
					L"Varying Christmas (Red)", L"Dazzle (Violet)", L"Neon (Red)", L"Neon (Green)", L"Egypt", L"Eye Of Horus", L"Circus", L"Clown Park",
					L"World Cup", L"Football Field", L"Alone (Blue)", L"Alone (Green)", L"Alone (Grey)", L"Alone Remix (Gold Green)", L"Faded (Gray)",
					L"Faded (Green)", L"Faded Remix (Gray)", L"Faded Remix (Violet)", L"Happy Birthday ", L"Anniversary"
			});
			this->comboBox1->Location = System::Drawing::Point(233, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(242, 24);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &themechange::comboBox1_TextChanged);
			// 
			// useTreeschk
			// 
			this->useTreeschk->AutoSize = true;
			this->useTreeschk->Location = System::Drawing::Point(524, 33);
			this->useTreeschk->Name = L"useTreeschk";
			this->useTreeschk->Size = System::Drawing::Size(90, 21);
			this->useTreeschk->TabIndex = 10;
			this->useTreeschk->Text = L"useTrees";
			this->useTreeschk->UseVisualStyleBackColor = true;
			this->useTreeschk->CheckedChanged += gcnew System::EventHandler(this, &themechange::useTreeschk_CheckedChanged);
			// 
			// useTowerschk
			// 
			this->useTowerschk->AutoSize = true;
			this->useTowerschk->Location = System::Drawing::Point(524, 60);
			this->useTowerschk->Name = L"useTowerschk";
			this->useTowerschk->Size = System::Drawing::Size(99, 21);
			this->useTowerschk->TabIndex = 11;
			this->useTowerschk->Text = L"useTowers";
			this->useTowerschk->UseVisualStyleBackColor = true;
			this->useTowerschk->CheckedChanged += gcnew System::EventHandler(this, &themechange::useTowerschk_CheckedChanged);
			// 
			// useAltGroundchk
			// 
			this->useAltGroundchk->AutoSize = true;
			this->useAltGroundchk->Location = System::Drawing::Point(524, 87);
			this->useAltGroundchk->Name = L"useAltGroundchk";
			this->useAltGroundchk->Size = System::Drawing::Size(117, 21);
			this->useAltGroundchk->TabIndex = 12;
			this->useAltGroundchk->Text = L"useAltGround";
			this->useAltGroundchk->UseVisualStyleBackColor = true;
			this->useAltGroundchk->CheckedChanged += gcnew System::EventHandler(this, &themechange::useAltGroundchk_CheckedChanged);
			// 
			// usePyramidschk
			// 
			this->usePyramidschk->AutoSize = true;
			this->usePyramidschk->Location = System::Drawing::Point(524, 114);
			this->usePyramidschk->Name = L"usePyramidschk";
			this->usePyramidschk->Size = System::Drawing::Size(111, 21);
			this->usePyramidschk->TabIndex = 13;
			this->usePyramidschk->Text = L"usePyramids";
			this->usePyramidschk->UseVisualStyleBackColor = true;
			this->usePyramidschk->CheckedChanged += gcnew System::EventHandler(this, &themechange::usePyramidschk_CheckedChanged);
			// 
			// usePalmTreeschk
			// 
			this->usePalmTreeschk->AutoSize = true;
			this->usePalmTreeschk->Location = System::Drawing::Point(524, 141);
			this->usePalmTreeschk->Name = L"usePalmTreeschk";
			this->usePalmTreeschk->Size = System::Drawing::Size(121, 21);
			this->usePalmTreeschk->TabIndex = 14;
			this->usePalmTreeschk->Text = L"usePalmTrees";
			this->usePalmTreeschk->UseVisualStyleBackColor = true;
			this->usePalmTreeschk->CheckedChanged += gcnew System::EventHandler(this, &themechange::usePalmTreeschk_CheckedChanged);
			// 
			// useSlasherschk
			// 
			this->useSlasherschk->AutoSize = true;
			this->useSlasherschk->Location = System::Drawing::Point(524, 168);
			this->useSlasherschk->Name = L"useSlasherschk";
			this->useSlasherschk->Size = System::Drawing::Size(108, 21);
			this->useSlasherschk->TabIndex = 15;
			this->useSlasherschk->Text = L"useSlashers";
			this->useSlasherschk->UseVisualStyleBackColor = true;
			this->useSlasherschk->CheckedChanged += gcnew System::EventHandler(this, &themechange::useSlasherschk_CheckedChanged);
			// 
			// useBuildingschk
			// 
			this->useBuildingschk->AutoSize = true;
			this->useBuildingschk->Location = System::Drawing::Point(524, 195);
			this->useBuildingschk->Name = L"useBuildingschk";
			this->useBuildingschk->Size = System::Drawing::Size(110, 21);
			this->useBuildingschk->TabIndex = 16;
			this->useBuildingschk->Text = L"useBuildings";
			this->useBuildingschk->UseVisualStyleBackColor = true;
			this->useBuildingschk->CheckedChanged += gcnew System::EventHandler(this, &themechange::useBuildingschk_CheckedChanged);
			// 
			// useFloodLightschk
			// 
			this->useFloodLightschk->AutoSize = true;
			this->useFloodLightschk->Location = System::Drawing::Point(651, 35);
			this->useFloodLightschk->Name = L"useFloodLightschk";
			this->useFloodLightschk->Size = System::Drawing::Size(126, 21);
			this->useFloodLightschk->TabIndex = 17;
			this->useFloodLightschk->Text = L"useFloodLights";
			this->useFloodLightschk->UseVisualStyleBackColor = true;
			this->useFloodLightschk->CheckedChanged += gcnew System::EventHandler(this, &themechange::useFloodLightschk_CheckedChanged);
			// 
			// useFilmGrainEffectchk
			// 
			this->useFilmGrainEffectchk->AutoSize = true;
			this->useFilmGrainEffectchk->Location = System::Drawing::Point(651, 62);
			this->useFilmGrainEffectchk->Name = L"useFilmGrainEffectchk";
			this->useFilmGrainEffectchk->Size = System::Drawing::Size(149, 21);
			this->useFilmGrainEffectchk->TabIndex = 18;
			this->useFilmGrainEffectchk->Text = L"useFilmGrainEffect";
			this->useFilmGrainEffectchk->UseVisualStyleBackColor = true;
			this->useFilmGrainEffectchk->CheckedChanged += gcnew System::EventHandler(this, &themechange::useFilmGrainEffectchk_CheckedChanged);
			// 
			// useAltPalmTreeschk
			// 
			this->useAltPalmTreeschk->AutoSize = true;
			this->useAltPalmTreeschk->Location = System::Drawing::Point(651, 89);
			this->useAltPalmTreeschk->Name = L"useAltPalmTreeschk";
			this->useAltPalmTreeschk->Size = System::Drawing::Size(137, 21);
			this->useAltPalmTreeschk->TabIndex = 19;
			this->useAltPalmTreeschk->Text = L"useAltPalmTrees";
			this->useAltPalmTreeschk->UseVisualStyleBackColor = true;
			this->useAltPalmTreeschk->CheckedChanged += gcnew System::EventHandler(this, &themechange::useAltPalmTreeschk_CheckedChanged);
			// 
			// useTeslaschk
			// 
			this->useTeslaschk->AutoSize = true;
			this->useTeslaschk->Location = System::Drawing::Point(651, 116);
			this->useTeslaschk->Name = L"useTeslaschk";
			this->useTeslaschk->Size = System::Drawing::Size(95, 21);
			this->useTeslaschk->TabIndex = 20;
			this->useTeslaschk->Text = L"useTeslas";
			this->useTeslaschk->UseVisualStyleBackColor = true;
			this->useTeslaschk->CheckedChanged += gcnew System::EventHandler(this, &themechange::useTeslaschk_CheckedChanged);
			// 
			// useRetroEffectschk
			// 
			this->useRetroEffectschk->AutoSize = true;
			this->useRetroEffectschk->Location = System::Drawing::Point(651, 141);
			this->useRetroEffectschk->Name = L"useRetroEffectschk";
			this->useRetroEffectschk->Size = System::Drawing::Size(131, 21);
			this->useRetroEffectschk->TabIndex = 21;
			this->useRetroEffectschk->Text = L"useRetroEffects";
			this->useRetroEffectschk->UseVisualStyleBackColor = true;
			this->useRetroEffectschk->CheckedChanged += gcnew System::EventHandler(this, &themechange::useRetroEffectschk_CheckedChanged);
			// 
			// useGreenMonitorEffectschk
			// 
			this->useGreenMonitorEffectschk->AutoSize = true;
			this->useGreenMonitorEffectschk->Location = System::Drawing::Point(651, 168);
			this->useGreenMonitorEffectschk->Name = L"useGreenMonitorEffectschk";
			this->useGreenMonitorEffectschk->Size = System::Drawing::Size(183, 21);
			this->useGreenMonitorEffectschk->TabIndex = 22;
			this->useGreenMonitorEffectschk->Text = L"useGreenMonitorEffects";
			this->useGreenMonitorEffectschk->UseVisualStyleBackColor = true;
			this->useGreenMonitorEffectschk->CheckedChanged += gcnew System::EventHandler(this, &themechange::useGreenMonitorEffectschk_CheckedChanged);
			// 
			// useColorMonitorEffectchk
			// 
			this->useColorMonitorEffectchk->AutoSize = true;
			this->useColorMonitorEffectchk->Location = System::Drawing::Point(651, 195);
			this->useColorMonitorEffectchk->Name = L"useColorMonitorEffectchk";
			this->useColorMonitorEffectchk->Size = System::Drawing::Size(169, 21);
			this->useColorMonitorEffectchk->TabIndex = 23;
			this->useColorMonitorEffectchk->Text = L"useColorMonitorEffect";
			this->useColorMonitorEffectchk->UseVisualStyleBackColor = true;
			this->useColorMonitorEffectchk->CheckedChanged += gcnew System::EventHandler(this, &themechange::useColorMonitorEffectchk_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(233, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(258, 17);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Themes don\'t work with the checkmarks";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(235, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(240, 17);
			this->label4->TabIndex = 25;
			this->label4->Text = L"so you have to generate themes and";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(267, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 17);
			this->label5->TabIndex = 26;
			this->label5->Text = L"true/false stuff seperately";
			// 
			// themechange
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 257);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->useColorMonitorEffectchk);
			this->Controls->Add(this->useGreenMonitorEffectschk);
			this->Controls->Add(this->useRetroEffectschk);
			this->Controls->Add(this->useTeslaschk);
			this->Controls->Add(this->useAltPalmTreeschk);
			this->Controls->Add(this->useFilmGrainEffectchk);
			this->Controls->Add(this->useFloodLightschk);
			this->Controls->Add(this->useBuildingschk);
			this->Controls->Add(this->useSlasherschk);
			this->Controls->Add(this->usePalmTreeschk);
			this->Controls->Add(this->usePyramidschk);
			this->Controls->Add(this->useAltGroundchk);
			this->Controls->Add(this->useTowerschk);
			this->Controls->Add(this->useTreeschk);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->output);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lvlpos);
			this->Name = L"themechange";
			this->Text = L"Theme Change Editor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void lvlpos_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		output->Clear();
		String^ pos = lvlpos->Text;
		if (pos == "") {
			pos = "N/A";
		}
		String^ useTrees;
		String^ useTowers;
		String^ useAltGround;
		String^ usePyramids;
		String^ usePalmTrees;
		String^ useSlashers;
		String^ useBuildings;
		String^ useFloodLights;
		String^ useFilmGrainEffect;
		String^ useAltPalmTrees;
		String^ useTeslas;
		String^ useRetroEffects;
		String^ useGreenMonitorEffects;
		String^ useColorMonitorEffect;
		String^ themeID = comboBox1->Text;
		if (themeID == "Massif") {
			themeID = "1";
		}
		else if (themeID == "Sky") {
			themeID = "2";
		}
		else if (themeID == "Forest") {
			themeID = "3";
		}
		else if (themeID == "Desert (Cyan)") {
			themeID = "4";
		}
		else if (themeID == "Volcano") {
			themeID = "5";
		}
		else if (themeID == "illusion") {
			themeID = "6";
		}
		else if (themeID == "Desert (Orange)") {
			themeID = "7";
		}
		else if (themeID == "City (Light)") {
			themeID = "8";
		}
		else if (themeID == "City (Dark)") {
			themeID = "9";
		}
		else if (themeID == "Sci-Tech") {
			themeID = "10";
		}
		else if (themeID == "(Sci-Tech) illusion") {
			themeID = "11";
		}
		else if (themeID == "Tetris (Blue)") {
			themeID = "12";
		}
		else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
			themeID = "13";
		}
		else if (themeID == "Tetris (Cyan Buildings)") {
			themeID = "14";
		}
		else if (themeID == "E-labyrinth (Violet)") {
			themeID = "15";
		}
		else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
			themeID = "16";
		}
		else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
			themeID = "17";
		}
		else if (themeID == "Castle In The Sky (Orange Gem)") {
			themeID = "18";
		}
		else if (themeID == "Castle In The Sky (Red Gem)") {
			themeID = "19";
		}
		else if (themeID == "Volcano (Castle In The Sky)") {
			themeID = "21";
		}
		else if (themeID == "Halloween (Blue)") {
			themeID = "22";
		}
		else if (themeID == "Halloween (Grey)") {
			themeID = "23";
		}
		else if (themeID == "Ghost Dance") {
			themeID = "24";
		}
		else if (themeID == "Deep Space (Blue)") {
			themeID = "25";
		}
		else if (themeID == "Deep Space (Green)") {
			themeID = "26";
		}
		else if (themeID == "Christmas (Cyan)") {
			themeID = "27";
		}
		else if (themeID == "Christmas (Orange)") {
			themeID = "28";
		}
		else if (themeID == "Monody") {
			themeID = "29";
		}
		else if (themeID == "Kung Fu (Green)") {
			themeID = "30";
		}
		else if (themeID == "Kung Fu (Yellow)") {
			themeID = "31";
		}
		else if (themeID == "Candy (Cyan)") {
			themeID = "32";
		}
		else if (themeID == "Candy (Blue)") {
			themeID = "33";
		}
		else if (themeID == "1UP (Violet)") {
			themeID = "34";
		}
		else if (themeID == "8 Bits (Green)") {
			themeID = "35";
		}
		else if (themeID == "1UP (Grey)") {
			themeID = "36";
		}
		else if (themeID == "Matrix") {
			themeID = "37";
		}
		else if (themeID == "Cube") {
			themeID = "38";
		}
		else if (themeID == "Poker") {
			themeID = "39";
		}
		else if (themeID == "JOKER") {
			themeID = "40";
		}
		else if (themeID == "Reggae") {
			themeID = "41";
		}
		else if (themeID == "Mental Rave") {
			themeID = "42";
		}
		else if (themeID == "Relics") {
			themeID = "43";
		}
		else if (themeID == "Fairy Tale") {
			themeID = "44";
		}
		else if (themeID == "Street Basketball") {
			themeID = "45";
		}
		else if (themeID == "Hoop Dream") {
			themeID = "46";
		}
		else if (themeID == "Midnight Carnival (Blue)") {
			themeID = "47";
		}
		else if (themeID == "Halloween Escape (Green)") {
			themeID = "48";
		}
		else if (themeID == "Midnight Carnival (Orange)") {
			themeID = "49";
		}
		else if (themeID == "Ignite") {
			themeID = "50";
		}
		else if (themeID == "Laser") {
			themeID = "51";
		}
		else if (themeID == "The Winter (White)") {
			themeID = "52";
		}
		else if (themeID == "Varying Christmas (Red)") {
			themeID = "53";
		}
		else if (themeID == "Cloud") {
			themeID = "54";
		}
		else if (themeID == "Dazzle (Violet)") {
			themeID = "55";
		}
		else if (themeID == "Neon (Red)") {
			themeID = "56";
		}
		else if (themeID == "Neon (Green)") {
			themeID = "57";
		}
		else if (themeID == "Egypt") {
			themeID = "58";
		}
		else if (themeID == "Eye Of Horus") {
			themeID = "59";
		}
		else if (themeID == "Cicrus") {
			themeID = "60";
		}
		else if (themeID == "Clown Park") {
			themeID = "61";
		}
		else if (themeID == "World Cup") {
			themeID = "62";
		}
		else if (themeID == "Football Field") {
			themeID = "63";
		}
		else if (themeID == "Alone (Blue)") {
			themeID = "64";
		}
		else if (themeID == "Alone (Green)") {
			themeID = "65";
		}
		else if (themeID == "Alone (Grey)") {
			themeID = "66";
		}
		else if (themeID == "Alone Remix (Gold Green)") {
			themeID = "67";
		}
		else if (themeID == "Faded (Gray)") {
			themeID = "68";
		}
		else if (themeID == "Faded (Green)") {
			themeID = "69";
		}
		else if (themeID == "Faded Remix (Gray)") {
			themeID = "70";
		}
		else if (themeID == "Faded Remix (Violet)") {
			themeID = "71";
		}
		else if (themeID == "Happy Birthday") {
			themeID = "72";
		}
		else if (themeID == "Anniversary") {
			themeID = "73";
		}
		else {
			themeID = "N/A";



			if (useTreeschk->Checked) {
				useTrees = "true";
			}
			else {
				useTrees = "false";
			}
			if (useTowerschk->Checked) {
				useTowers = "true";
			}
			else {
				useTowers = "false";
			}
			if (useAltGroundchk->Checked) {
				useAltGround = "true";
			}
			else {
				useAltGround = "false";
			}
			if (usePyramidschk->Checked) {
				usePyramids = "true";
			}
			else {
				usePyramids = "false";
			}
			if (usePalmTreeschk->Checked) {
				usePalmTrees = "true";
			}
			else {
				usePalmTrees = "false";
			}
			if (useSlasherschk->Checked) {
				useSlashers = "true";
			}
			else {
				useSlashers = "false";
			}
			if (useBuildingschk->Checked) {
				useBuildings = "true";
			}
			else {
				useBuildings = "false";
			}
			if (useFloodLightschk->Checked) {
				useFloodLights = "true";
			}
			else {
				useFloodLights = "false";
			}
			if (useFilmGrainEffectchk->Checked) {
				useFilmGrainEffect = "true";
			}
			else {
				useFilmGrainEffect = "false";
			}
			if (useAltPalmTreeschk->Checked) {
				useAltPalmTrees = "true";
			}
			else {
				useAltPalmTrees = "false";
			}
			if (useTeslaschk->Checked) {
				useTeslas = "true";
			}
			else {
				useTeslas = "false";
			}
			if (useRetroEffectschk->Checked) {
				useRetroEffects = "true";
			}
			else {
				useRetroEffects = "false";
			}
			if (useGreenMonitorEffectschk->Checked) {
				useGreenMonitorEffects = "true";
			}
			else {
				useGreenMonitorEffects = "false";
			}
			if (useColorMonitorEffectchk->Checked) {
				useColorMonitorEffect = "true";
			}
			else {
				useColorMonitorEffect = "false";
			}
		}
		output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
	}
private: System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;

	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
	themeID = "37";
	}
	else if (themeID == "Cube") {
	themeID = "38";
	}
	else if (themeID == "Poker") {
	themeID = "39";
	}
	else if (themeID == "JOKER") {
	themeID = "40";
}
	else if (themeID == "Reggae") {
	themeID = "41";
}
	else if (themeID == "Mental Rave") {
	themeID = "42";
}
	else if (themeID == "Relics") {
	themeID = "43";
}
	else if (themeID == "Fairy Tale") {
	themeID = "44";
}
	else if (themeID == "Street Basketball") {
	themeID = "45";
}
	else if (themeID == "Hoop Dream") {
	themeID = "46";
}
	else if (themeID == "Midnight Carnival (Blue)") {
	themeID = "47";
}
	else if (themeID == "Halloween Escape (Green)") {
	themeID = "48";
}
	else if (themeID == "Midnight Carnival (Orange)") {
	themeID = "49";
}
	else if (themeID == "Ignite") {
	themeID = "50";
}
	else if (themeID == "Laser") {
	themeID = "51";
}
	else if (themeID == "The Winter (White)") {
	themeID = "52";
}
	else if (themeID == "Varying Christmas (Red)") {
	themeID = "53";
}
	else if (themeID == "Cloud") {
	themeID = "54";
}
	else if (themeID == "Dazzle (Violet)") {
	themeID = "55";
}
	else if (themeID == "Neon (Red)") {
	themeID = "56";
}
	else if (themeID == "Neon (Green)") {
	themeID = "57";
}
	else if (themeID == "Egypt") {
	themeID = "58";
}
	else if (themeID == "Eye Of Horus") {
	themeID = "59";
}
	else if (themeID == "Cicrus") {
	themeID = "60";
}
	else if (themeID == "Clown Park") {
	themeID = "61";
}
	else if (themeID == "World Cup") {
	themeID = "62";
}
	else if (themeID == "Football Field") {
	themeID = "63";
}
	else if (themeID == "Alone (Blue)") {
	themeID = "64";
}
	else if (themeID == "Alone (Green)") {
	themeID = "65";
}
	else if (themeID == "Alone (Grey)") {
	themeID = "66";
}
	else if (themeID == "Alone Remix (Gold Green)") {
	themeID = "67";
}
	else if (themeID == "Faded (Gray)") {
	themeID = "68";
}
	else if (themeID == "Faded (Green)") {
	themeID = "69";
}
	else if (themeID == "Faded Remix (Gray)") {
	themeID = "70";
}
	else if (themeID == "Faded Remix (Violet)") {
	themeID = "71";
}
	else if (themeID == "Happy Birthday") {
	themeID = "72";
}
	else if (themeID == "Anniversary") {
	themeID = "73";
}
	else {
	themeID = "N/A";

	

	if (useTreeschk->Checked) {
		useTrees = "true";
	}
	else {
		useTrees = "false";
	}
	if (useTowerschk->Checked) {
		useTowers = "true";
	}
	else {
		useTowers = "false";
	}
	if (useAltGroundchk->Checked) {
		useAltGround = "true";
	}
	else {
		useAltGround = "false";
	}
	if (usePyramidschk->Checked) {
		usePyramids = "true";
	}
	else {
		usePyramids = "false";
	}
	if (usePalmTreeschk->Checked) {
		usePalmTrees = "true";
	}
	else {
		usePalmTrees = "false";
	}
	if (useSlasherschk->Checked) {
		useSlashers = "true";
	}
	else {
		useSlashers = "false";
	}
	if (useBuildingschk->Checked) {
		useBuildings = "true";
	}
	else {
		useBuildings = "false";
	}
	if (useFloodLightschk->Checked) {
		useFloodLights = "true";
	}
	else {
		useFloodLights = "false";
	}
	if (useFilmGrainEffectchk->Checked) {
		useFilmGrainEffect = "true";
	}
	else {
		useFilmGrainEffect = "false";
	}
	if (useAltPalmTreeschk->Checked) {
		useAltPalmTrees = "true";
	}
	else {
		useAltPalmTrees = "false";
	}
	if (useTeslaschk->Checked) {
		useTeslas = "true";
	}
	else {
		useTeslas = "false";
	}
	if (useRetroEffectschk->Checked) {
		useRetroEffects = "true";
	}
	else {
		useRetroEffects = "false";
	}
	if (useGreenMonitorEffectschk->Checked) {
		useGreenMonitorEffects = "true";
	}
	else {
		useGreenMonitorEffects = "false";
	}
	if (useColorMonitorEffectchk->Checked) {
		useColorMonitorEffect = "true";
	}
	else {
		useColorMonitorEffect = "false";
	}
}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", "+useTowers+", "+useAltGround+", "+usePyramids+", "+usePalmTrees+", "+useSlashers+", "+useBuildings+", "+useFloodLights+", "+useFilmGrainEffect+", "+useAltPalmTrees+", "+useTeslas+", "+useRetroEffects+", "+useGreenMonitorEffects+", "+useColorMonitorEffect);
}
private: System::Void useTreeschk_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;
	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
		themeID = "37";
	}
	else if (themeID == "Cube") {
		themeID = "38";
	}
	else if (themeID == "Poker") {
		themeID = "39";
	}
	else if (themeID == "JOKER") {
		themeID = "40";
	}
	else if (themeID == "Reggae") {
		themeID = "41";
	}
	else if (themeID == "Mental Rave") {
		themeID = "42";
	}
	else if (themeID == "Relics") {
		themeID = "43";
	}
	else if (themeID == "Fairy Tale") {
		themeID = "44";
	}
	else if (themeID == "Street Basketball") {
		themeID = "45";
	}
	else if (themeID == "Hoop Dream") {
		themeID = "46";
	}
	else if (themeID == "Midnight Carnival (Blue)") {
		themeID = "47";
	}
	else if (themeID == "Halloween Escape (Green)") {
		themeID = "48";
	}
	else if (themeID == "Midnight Carnival (Orange)") {
		themeID = "49";
	}
	else if (themeID == "Ignite") {
		themeID = "50";
	}
	else if (themeID == "Laser") {
		themeID = "51";
	}
	else if (themeID == "The Winter (White)") {
		themeID = "52";
	}
	else if (themeID == "Varying Christmas (Red)") {
		themeID = "53";
	}
	else if (themeID == "Cloud") {
		themeID = "54";
	}
	else if (themeID == "Dazzle (Violet)") {
		themeID = "55";
	}
	else if (themeID == "Neon (Red)") {
		themeID = "56";
	}
	else if (themeID == "Neon (Green)") {
		themeID = "57";
	}
	else if (themeID == "Egypt") {
		themeID = "58";
	}
	else if (themeID == "Eye Of Horus") {
		themeID = "59";
	}
	else if (themeID == "Cicrus") {
		themeID = "60";
	}
	else if (themeID == "Clown Park") {
		themeID = "61";
	}
	else if (themeID == "World Cup") {
		themeID = "62";
	}
	else if (themeID == "Football Field") {
		themeID = "63";
	}
	else if (themeID == "Alone (Blue)") {
		themeID = "64";
	}
	else if (themeID == "Alone (Green)") {
		themeID = "65";
	}
	else if (themeID == "Alone (Grey)") {
		themeID = "66";
	}
	else if (themeID == "Alone Remix (Gold Green)") {
		themeID = "67";
	}
	else if (themeID == "Faded (Gray)") {
		themeID = "68";
	}
	else if (themeID == "Faded (Green)") {
		themeID = "69";
	}
	else if (themeID == "Faded Remix (Gray)") {
		themeID = "70";
	}
	else if (themeID == "Faded Remix (Violet)") {
		themeID = "71";
	}
	else if (themeID == "Happy Birthday") {
		themeID = "72";
	}
	else if (themeID == "Anniversary") {
		themeID = "73";
	}
	else {
		themeID = "N/A";



		if (useTreeschk->Checked) {
			useTrees = "true";
		}
		else {
			useTrees = "false";
		}
		if (useTowerschk->Checked) {
			useTowers = "true";
		}
		else {
			useTowers = "false";
		}
		if (useAltGroundchk->Checked) {
			useAltGround = "true";
		}
		else {
			useAltGround = "false";
		}
		if (usePyramidschk->Checked) {
			usePyramids = "true";
		}
		else {
			usePyramids = "false";
		}
		if (usePalmTreeschk->Checked) {
			usePalmTrees = "true";
		}
		else {
			usePalmTrees = "false";
		}
		if (useSlasherschk->Checked) {
			useSlashers = "true";
		}
		else {
			useSlashers = "false";
		}
		if (useBuildingschk->Checked) {
			useBuildings = "true";
		}
		else {
			useBuildings = "false";
		}
		if (useFloodLightschk->Checked) {
			useFloodLights = "true";
		}
		else {
			useFloodLights = "false";
		}
		if (useFilmGrainEffectchk->Checked) {
			useFilmGrainEffect = "true";
		}
		else {
			useFilmGrainEffect = "false";
		}
		if (useAltPalmTreeschk->Checked) {
			useAltPalmTrees = "true";
		}
		else {
			useAltPalmTrees = "false";
		}
		if (useTeslaschk->Checked) {
			useTeslas = "true";
		}
		else {
			useTeslas = "false";
		}
		if (useRetroEffectschk->Checked) {
			useRetroEffects = "true";
		}
		else {
			useRetroEffects = "false";
		}
		if (useGreenMonitorEffectschk->Checked) {
			useGreenMonitorEffects = "true";
		}
		else {
			useGreenMonitorEffects = "false";
		}
		if (useColorMonitorEffectchk->Checked) {
			useColorMonitorEffect = "true";
		}
		else {
			useColorMonitorEffect = "false";
		}
	}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
}
private: System::Void useTowerschk_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;

	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
		themeID = "37";
	}
	else if (themeID == "Cube") {
		themeID = "38";
	}
	else if (themeID == "Poker") {
		themeID = "39";
	}
	else if (themeID == "JOKER") {
		themeID = "40";
	}
	else if (themeID == "Reggae") {
		themeID = "41";
	}
	else if (themeID == "Mental Rave") {
		themeID = "42";
	}
	else if (themeID == "Relics") {
		themeID = "43";
	}
	else if (themeID == "Fairy Tale") {
		themeID = "44";
	}
	else if (themeID == "Street Basketball") {
		themeID = "45";
	}
	else if (themeID == "Hoop Dream") {
		themeID = "46";
	}
	else if (themeID == "Midnight Carnival (Blue)") {
		themeID = "47";
	}
	else if (themeID == "Halloween Escape (Green)") {
		themeID = "48";
	}
	else if (themeID == "Midnight Carnival (Orange)") {
		themeID = "49";
	}
	else if (themeID == "Ignite") {
		themeID = "50";
	}
	else if (themeID == "Laser") {
		themeID = "51";
	}
	else if (themeID == "The Winter (White)") {
		themeID = "52";
	}
	else if (themeID == "Varying Christmas (Red)") {
		themeID = "53";
	}
	else if (themeID == "Cloud") {
		themeID = "54";
	}
	else if (themeID == "Dazzle (Violet)") {
		themeID = "55";
	}
	else if (themeID == "Neon (Red)") {
		themeID = "56";
	}
	else if (themeID == "Neon (Green)") {
		themeID = "57";
	}
	else if (themeID == "Egypt") {
		themeID = "58";
	}
	else if (themeID == "Eye Of Horus") {
		themeID = "59";
	}
	else if (themeID == "Cicrus") {
		themeID = "60";
	}
	else if (themeID == "Clown Park") {
		themeID = "61";
	}
	else if (themeID == "World Cup") {
		themeID = "62";
	}
	else if (themeID == "Football Field") {
		themeID = "63";
	}
	else if (themeID == "Alone (Blue)") {
		themeID = "64";
	}
	else if (themeID == "Alone (Green)") {
		themeID = "65";
	}
	else if (themeID == "Alone (Grey)") {
		themeID = "66";
	}
	else if (themeID == "Alone Remix (Gold Green)") {
		themeID = "67";
	}
	else if (themeID == "Faded (Gray)") {
		themeID = "68";
	}
	else if (themeID == "Faded (Green)") {
		themeID = "69";
	}
	else if (themeID == "Faded Remix (Gray)") {
		themeID = "70";
	}
	else if (themeID == "Faded Remix (Violet)") {
		themeID = "71";
	}
	else if (themeID == "Happy Birthday") {
		themeID = "72";
	}
	else if (themeID == "Anniversary") {
		themeID = "73";
	}
	else {
		themeID = "N/A";



		if (useTreeschk->Checked) {
			useTrees = "true";
		}
		else {
			useTrees = "false";
		}
		if (useTowerschk->Checked) {
			useTowers = "true";
		}
		else {
			useTowers = "false";
		}
		if (useAltGroundchk->Checked) {
			useAltGround = "true";
		}
		else {
			useAltGround = "false";
		}
		if (usePyramidschk->Checked) {
			usePyramids = "true";
		}
		else {
			usePyramids = "false";
		}
		if (usePalmTreeschk->Checked) {
			usePalmTrees = "true";
		}
		else {
			usePalmTrees = "false";
		}
		if (useSlasherschk->Checked) {
			useSlashers = "true";
		}
		else {
			useSlashers = "false";
		}
		if (useBuildingschk->Checked) {
			useBuildings = "true";
		}
		else {
			useBuildings = "false";
		}
		if (useFloodLightschk->Checked) {
			useFloodLights = "true";
		}
		else {
			useFloodLights = "false";
		}
		if (useFilmGrainEffectchk->Checked) {
			useFilmGrainEffect = "true";
		}
		else {
			useFilmGrainEffect = "false";
		}
		if (useAltPalmTreeschk->Checked) {
			useAltPalmTrees = "true";
		}
		else {
			useAltPalmTrees = "false";
		}
		if (useTeslaschk->Checked) {
			useTeslas = "true";
		}
		else {
			useTeslas = "false";
		}
		if (useRetroEffectschk->Checked) {
			useRetroEffects = "true";
		}
		else {
			useRetroEffects = "false";
		}
		if (useGreenMonitorEffectschk->Checked) {
			useGreenMonitorEffects = "true";
		}
		else {
			useGreenMonitorEffects = "false";
		}
		if (useColorMonitorEffectchk->Checked) {
			useColorMonitorEffect = "true";
		}
		else {
			useColorMonitorEffect = "false";
		}
	}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
}
private: System::Void useAltGroundchk_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;
	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
		themeID = "37";
	}
	else if (themeID == "Cube") {
		themeID = "38";
	}
	else if (themeID == "Poker") {
		themeID = "39";
	}
	else if (themeID == "JOKER") {
		themeID = "40";
	}
	else if (themeID == "Reggae") {
		themeID = "41";
	}
	else if (themeID == "Mental Rave") {
		themeID = "42";
	}
	else if (themeID == "Relics") {
		themeID = "43";
	}
	else if (themeID == "Fairy Tale") {
		themeID = "44";
	}
	else if (themeID == "Street Basketball") {
		themeID = "45";
	}
	else if (themeID == "Hoop Dream") {
		themeID = "46";
	}
	else if (themeID == "Midnight Carnival (Blue)") {
		themeID = "47";
	}
	else if (themeID == "Halloween Escape (Green)") {
		themeID = "48";
	}
	else if (themeID == "Midnight Carnival (Orange)") {
		themeID = "49";
	}
	else if (themeID == "Ignite") {
		themeID = "50";
	}
	else if (themeID == "Laser") {
		themeID = "51";
	}
	else if (themeID == "The Winter (White)") {
		themeID = "52";
	}
	else if (themeID == "Varying Christmas (Red)") {
		themeID = "53";
	}
	else if (themeID == "Cloud") {
		themeID = "54";
	}
	else if (themeID == "Dazzle (Violet)") {
		themeID = "55";
	}
	else if (themeID == "Neon (Red)") {
		themeID = "56";
	}
	else if (themeID == "Neon (Green)") {
		themeID = "57";
	}
	else if (themeID == "Egypt") {
		themeID = "58";
	}
	else if (themeID == "Eye Of Horus") {
		themeID = "59";
	}
	else if (themeID == "Cicrus") {
		themeID = "60";
	}
	else if (themeID == "Clown Park") {
		themeID = "61";
	}
	else if (themeID == "World Cup") {
		themeID = "62";
	}
	else if (themeID == "Football Field") {
		themeID = "63";
	}
	else if (themeID == "Alone (Blue)") {
		themeID = "64";
	}
	else if (themeID == "Alone (Green)") {
		themeID = "65";
	}
	else if (themeID == "Alone (Grey)") {
		themeID = "66";
	}
	else if (themeID == "Alone Remix (Gold Green)") {
		themeID = "67";
	}
	else if (themeID == "Faded (Gray)") {
		themeID = "68";
	}
	else if (themeID == "Faded (Green)") {
		themeID = "69";
	}
	else if (themeID == "Faded Remix (Gray)") {
		themeID = "70";
	}
	else if (themeID == "Faded Remix (Violet)") {
		themeID = "71";
	}
	else if (themeID == "Happy Birthday") {
		themeID = "72";
	}
	else if (themeID == "Anniversary") {
		themeID = "73";
	}
	else {
		themeID = "N/A";



		if (useTreeschk->Checked) {
			useTrees = "true";
		}
		else {
			useTrees = "false";
		}
		if (useTowerschk->Checked) {
			useTowers = "true";
		}
		else {
			useTowers = "false";
		}
		if (useAltGroundchk->Checked) {
			useAltGround = "true";
		}
		else {
			useAltGround = "false";
		}
		if (usePyramidschk->Checked) {
			usePyramids = "true";
		}
		else {
			usePyramids = "false";
		}
		if (usePalmTreeschk->Checked) {
			usePalmTrees = "true";
		}
		else {
			usePalmTrees = "false";
		}
		if (useSlasherschk->Checked) {
			useSlashers = "true";
		}
		else {
			useSlashers = "false";
		}
		if (useBuildingschk->Checked) {
			useBuildings = "true";
		}
		else {
			useBuildings = "false";
		}
		if (useFloodLightschk->Checked) {
			useFloodLights = "true";
		}
		else {
			useFloodLights = "false";
		}
		if (useFilmGrainEffectchk->Checked) {
			useFilmGrainEffect = "true";
		}
		else {
			useFilmGrainEffect = "false";
		}
		if (useAltPalmTreeschk->Checked) {
			useAltPalmTrees = "true";
		}
		else {
			useAltPalmTrees = "false";
		}
		if (useTeslaschk->Checked) {
			useTeslas = "true";
		}
		else {
			useTeslas = "false";
		}
		if (useRetroEffectschk->Checked) {
			useRetroEffects = "true";
		}
		else {
			useRetroEffects = "false";
		}
		if (useGreenMonitorEffectschk->Checked) {
			useGreenMonitorEffects = "true";
		}
		else {
			useGreenMonitorEffects = "false";
		}
		if (useColorMonitorEffectchk->Checked) {
			useColorMonitorEffect = "true";
		}
		else {
			useColorMonitorEffect = "false";
		}
	}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
}
private: System::Void usePyramidschk_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;
	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
		themeID = "37";
	}
	else if (themeID == "Cube") {
		themeID = "38";
	}
	else if (themeID == "Poker") {
		themeID = "39";
	}
	else if (themeID == "JOKER") {
		themeID = "40";
	}
	else if (themeID == "Reggae") {
		themeID = "41";
	}
	else if (themeID == "Mental Rave") {
		themeID = "42";
	}
	else if (themeID == "Relics") {
		themeID = "43";
	}
	else if (themeID == "Fairy Tale") {
		themeID = "44";
	}
	else if (themeID == "Street Basketball") {
		themeID = "45";
	}
	else if (themeID == "Hoop Dream") {
		themeID = "46";
	}
	else if (themeID == "Midnight Carnival (Blue)") {
		themeID = "47";
	}
	else if (themeID == "Halloween Escape (Green)") {
		themeID = "48";
	}
	else if (themeID == "Midnight Carnival (Orange)") {
		themeID = "49";
	}
	else if (themeID == "Ignite") {
		themeID = "50";
	}
	else if (themeID == "Laser") {
		themeID = "51";
	}
	else if (themeID == "The Winter (White)") {
		themeID = "52";
	}
	else if (themeID == "Varying Christmas (Red)") {
		themeID = "53";
	}
	else if (themeID == "Cloud") {
		themeID = "54";
	}
	else if (themeID == "Dazzle (Violet)") {
		themeID = "55";
	}
	else if (themeID == "Neon (Red)") {
		themeID = "56";
	}
	else if (themeID == "Neon (Green)") {
		themeID = "57";
	}
	else if (themeID == "Egypt") {
		themeID = "58";
	}
	else if (themeID == "Eye Of Horus") {
		themeID = "59";
	}
	else if (themeID == "Cicrus") {
		themeID = "60";
	}
	else if (themeID == "Clown Park") {
		themeID = "61";
	}
	else if (themeID == "World Cup") {
		themeID = "62";
	}
	else if (themeID == "Football Field") {
		themeID = "63";
	}
	else if (themeID == "Alone (Blue)") {
		themeID = "64";
	}
	else if (themeID == "Alone (Green)") {
		themeID = "65";
	}
	else if (themeID == "Alone (Grey)") {
		themeID = "66";
	}
	else if (themeID == "Alone Remix (Gold Green)") {
		themeID = "67";
	}
	else if (themeID == "Faded (Gray)") {
		themeID = "68";
	}
	else if (themeID == "Faded (Green)") {
		themeID = "69";
	}
	else if (themeID == "Faded Remix (Gray)") {
		themeID = "70";
	}
	else if (themeID == "Faded Remix (Violet)") {
		themeID = "71";
	}
	else if (themeID == "Happy Birthday") {
		themeID = "72";
	}
	else if (themeID == "Anniversary") {
		themeID = "73";
	}
	else {
		themeID = "N/A";



		if (useTreeschk->Checked) {
			useTrees = "true";
		}
		else {
			useTrees = "false";
		}
		if (useTowerschk->Checked) {
			useTowers = "true";
		}
		else {
			useTowers = "false";
		}
		if (useAltGroundchk->Checked) {
			useAltGround = "true";
		}
		else {
			useAltGround = "false";
		}
		if (usePyramidschk->Checked) {
			usePyramids = "true";
		}
		else {
			usePyramids = "false";
		}
		if (usePalmTreeschk->Checked) {
			usePalmTrees = "true";
		}
		else {
			usePalmTrees = "false";
		}
		if (useSlasherschk->Checked) {
			useSlashers = "true";
		}
		else {
			useSlashers = "false";
		}
		if (useBuildingschk->Checked) {
			useBuildings = "true";
		}
		else {
			useBuildings = "false";
		}
		if (useFloodLightschk->Checked) {
			useFloodLights = "true";
		}
		else {
			useFloodLights = "false";
		}
		if (useFilmGrainEffectchk->Checked) {
			useFilmGrainEffect = "true";
		}
		else {
			useFilmGrainEffect = "false";
		}
		if (useAltPalmTreeschk->Checked) {
			useAltPalmTrees = "true";
		}
		else {
			useAltPalmTrees = "false";
		}
		if (useTeslaschk->Checked) {
			useTeslas = "true";
		}
		else {
			useTeslas = "false";
		}
		if (useRetroEffectschk->Checked) {
			useRetroEffects = "true";
		}
		else {
			useRetroEffects = "false";
		}
		if (useGreenMonitorEffectschk->Checked) {
			useGreenMonitorEffects = "true";
		}
		else {
			useGreenMonitorEffects = "false";
		}
		if (useColorMonitorEffectchk->Checked) {
			useColorMonitorEffect = "true";
		}
		else {
			useColorMonitorEffect = "false";
		}
	}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
}
private: System::Void usePalmTreeschk_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;
	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
		themeID = "37";
	}
	else if (themeID == "Cube") {
		themeID = "38";
	}
	else if (themeID == "Poker") {
		themeID = "39";
	}
	else if (themeID == "JOKER") {
		themeID = "40";
	}
	else if (themeID == "Reggae") {
		themeID = "41";
	}
	else if (themeID == "Mental Rave") {
		themeID = "42";
	}
	else if (themeID == "Relics") {
		themeID = "43";
	}
	else if (themeID == "Fairy Tale") {
		themeID = "44";
	}
	else if (themeID == "Street Basketball") {
		themeID = "45";
	}
	else if (themeID == "Hoop Dream") {
		themeID = "46";
	}
	else if (themeID == "Midnight Carnival (Blue)") {
		themeID = "47";
	}
	else if (themeID == "Halloween Escape (Green)") {
		themeID = "48";
	}
	else if (themeID == "Midnight Carnival (Orange)") {
		themeID = "49";
	}
	else if (themeID == "Ignite") {
		themeID = "50";
	}
	else if (themeID == "Laser") {
		themeID = "51";
	}
	else if (themeID == "The Winter (White)") {
		themeID = "52";
	}
	else if (themeID == "Varying Christmas (Red)") {
		themeID = "53";
	}
	else if (themeID == "Cloud") {
		themeID = "54";
	}
	else if (themeID == "Dazzle (Violet)") {
		themeID = "55";
	}
	else if (themeID == "Neon (Red)") {
		themeID = "56";
	}
	else if (themeID == "Neon (Green)") {
		themeID = "57";
	}
	else if (themeID == "Egypt") {
		themeID = "58";
	}
	else if (themeID == "Eye Of Horus") {
		themeID = "59";
	}
	else if (themeID == "Cicrus") {
		themeID = "60";
	}
	else if (themeID == "Clown Park") {
		themeID = "61";
	}
	else if (themeID == "World Cup") {
		themeID = "62";
	}
	else if (themeID == "Football Field") {
		themeID = "63";
	}
	else if (themeID == "Alone (Blue)") {
		themeID = "64";
	}
	else if (themeID == "Alone (Green)") {
		themeID = "65";
	}
	else if (themeID == "Alone (Grey)") {
		themeID = "66";
	}
	else if (themeID == "Alone Remix (Gold Green)") {
		themeID = "67";
	}
	else if (themeID == "Faded (Gray)") {
		themeID = "68";
	}
	else if (themeID == "Faded (Green)") {
		themeID = "69";
	}
	else if (themeID == "Faded Remix (Gray)") {
		themeID = "70";
	}
	else if (themeID == "Faded Remix (Violet)") {
		themeID = "71";
	}
	else if (themeID == "Happy Birthday") {
		themeID = "72";
	}
	else if (themeID == "Anniversary") {
		themeID = "73";
	}
	else {
		themeID = "N/A";



		if (useTreeschk->Checked) {
			useTrees = "true";
		}
		else {
			useTrees = "false";
		}
		if (useTowerschk->Checked) {
			useTowers = "true";
		}
		else {
			useTowers = "false";
		}
		if (useAltGroundchk->Checked) {
			useAltGround = "true";
		}
		else {
			useAltGround = "false";
		}
		if (usePyramidschk->Checked) {
			usePyramids = "true";
		}
		else {
			usePyramids = "false";
		}
		if (usePalmTreeschk->Checked) {
			usePalmTrees = "true";
		}
		else {
			usePalmTrees = "false";
		}
		if (useSlasherschk->Checked) {
			useSlashers = "true";
		}
		else {
			useSlashers = "false";
		}
		if (useBuildingschk->Checked) {
			useBuildings = "true";
		}
		else {
			useBuildings = "false";
		}
		if (useFloodLightschk->Checked) {
			useFloodLights = "true";
		}
		else {
			useFloodLights = "false";
		}
		if (useFilmGrainEffectchk->Checked) {
			useFilmGrainEffect = "true";
		}
		else {
			useFilmGrainEffect = "false";
		}
		if (useAltPalmTreeschk->Checked) {
			useAltPalmTrees = "true";
		}
		else {
			useAltPalmTrees = "false";
		}
		if (useTeslaschk->Checked) {
			useTeslas = "true";
		}
		else {
			useTeslas = "false";
		}
		if (useRetroEffectschk->Checked) {
			useRetroEffects = "true";
		}
		else {
			useRetroEffects = "false";
		}
		if (useGreenMonitorEffectschk->Checked) {
			useGreenMonitorEffects = "true";
		}
		else {
			useGreenMonitorEffects = "false";
		}
		if (useColorMonitorEffectchk->Checked) {
			useColorMonitorEffect = "true";
		}
		else {
			useColorMonitorEffect = "false";
		}
	}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
}
private: System::Void useSlasherschk_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;
	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
		themeID = "37";
	}
	else if (themeID == "Cube") {
		themeID = "38";
	}
	else if (themeID == "Poker") {
		themeID = "39";
	}
	else if (themeID == "JOKER") {
		themeID = "40";
	}
	else if (themeID == "Reggae") {
		themeID = "41";
	}
	else if (themeID == "Mental Rave") {
		themeID = "42";
	}
	else if (themeID == "Relics") {
		themeID = "43";
	}
	else if (themeID == "Fairy Tale") {
		themeID = "44";
	}
	else if (themeID == "Street Basketball") {
		themeID = "45";
	}
	else if (themeID == "Hoop Dream") {
		themeID = "46";
	}
	else if (themeID == "Midnight Carnival (Blue)") {
		themeID = "47";
	}
	else if (themeID == "Halloween Escape (Green)") {
		themeID = "48";
	}
	else if (themeID == "Midnight Carnival (Orange)") {
		themeID = "49";
	}
	else if (themeID == "Ignite") {
		themeID = "50";
	}
	else if (themeID == "Laser") {
		themeID = "51";
	}
	else if (themeID == "The Winter (White)") {
		themeID = "52";
	}
	else if (themeID == "Varying Christmas (Red)") {
		themeID = "53";
	}
	else if (themeID == "Cloud") {
		themeID = "54";
	}
	else if (themeID == "Dazzle (Violet)") {
		themeID = "55";
	}
	else if (themeID == "Neon (Red)") {
		themeID = "56";
	}
	else if (themeID == "Neon (Green)") {
		themeID = "57";
	}
	else if (themeID == "Egypt") {
		themeID = "58";
	}
	else if (themeID == "Eye Of Horus") {
		themeID = "59";
	}
	else if (themeID == "Cicrus") {
		themeID = "60";
	}
	else if (themeID == "Clown Park") {
		themeID = "61";
	}
	else if (themeID == "World Cup") {
		themeID = "62";
	}
	else if (themeID == "Football Field") {
		themeID = "63";
	}
	else if (themeID == "Alone (Blue)") {
		themeID = "64";
	}
	else if (themeID == "Alone (Green)") {
		themeID = "65";
	}
	else if (themeID == "Alone (Grey)") {
		themeID = "66";
	}
	else if (themeID == "Alone Remix (Gold Green)") {
		themeID = "67";
	}
	else if (themeID == "Faded (Gray)") {
		themeID = "68";
	}
	else if (themeID == "Faded (Green)") {
		themeID = "69";
	}
	else if (themeID == "Faded Remix (Gray)") {
		themeID = "70";
	}
	else if (themeID == "Faded Remix (Violet)") {
		themeID = "71";
	}
	else if (themeID == "Happy Birthday") {
		themeID = "72";
	}
	else if (themeID == "Anniversary") {
		themeID = "73";
	}
	else {
		themeID = "N/A";



		if (useTreeschk->Checked) {
			useTrees = "true";
		}
		else {
			useTrees = "false";
		}
		if (useTowerschk->Checked) {
			useTowers = "true";
		}
		else {
			useTowers = "false";
		}
		if (useAltGroundchk->Checked) {
			useAltGround = "true";
		}
		else {
			useAltGround = "false";
		}
		if (usePyramidschk->Checked) {
			usePyramids = "true";
		}
		else {
			usePyramids = "false";
		}
		if (usePalmTreeschk->Checked) {
			usePalmTrees = "true";
		}
		else {
			usePalmTrees = "false";
		}
		if (useSlasherschk->Checked) {
			useSlashers = "true";
		}
		else {
			useSlashers = "false";
		}
		if (useBuildingschk->Checked) {
			useBuildings = "true";
		}
		else {
			useBuildings = "false";
		}
		if (useFloodLightschk->Checked) {
			useFloodLights = "true";
		}
		else {
			useFloodLights = "false";
		}
		if (useFilmGrainEffectchk->Checked) {
			useFilmGrainEffect = "true";
		}
		else {
			useFilmGrainEffect = "false";
		}
		if (useAltPalmTreeschk->Checked) {
			useAltPalmTrees = "true";
		}
		else {
			useAltPalmTrees = "false";
		}
		if (useTeslaschk->Checked) {
			useTeslas = "true";
		}
		else {
			useTeslas = "false";
		}
		if (useRetroEffectschk->Checked) {
			useRetroEffects = "true";
		}
		else {
			useRetroEffects = "false";
		}
		if (useGreenMonitorEffectschk->Checked) {
			useGreenMonitorEffects = "true";
		}
		else {
			useGreenMonitorEffects = "false";
		}
		if (useColorMonitorEffectchk->Checked) {
			useColorMonitorEffect = "true";
		}
		else {
			useColorMonitorEffect = "false";
		}
	}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
}
private: System::Void useBuildingschk_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;
	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
		themeID = "37";
	}
	else if (themeID == "Cube") {
		themeID = "38";
	}
	else if (themeID == "Poker") {
		themeID = "39";
	}
	else if (themeID == "JOKER") {
		themeID = "40";
	}
	else if (themeID == "Reggae") {
		themeID = "41";
	}
	else if (themeID == "Mental Rave") {
		themeID = "42";
	}
	else if (themeID == "Relics") {
		themeID = "43";
	}
	else if (themeID == "Fairy Tale") {
		themeID = "44";
	}
	else if (themeID == "Street Basketball") {
		themeID = "45";
	}
	else if (themeID == "Hoop Dream") {
		themeID = "46";
	}
	else if (themeID == "Midnight Carnival (Blue)") {
		themeID = "47";
	}
	else if (themeID == "Halloween Escape (Green)") {
		themeID = "48";
	}
	else if (themeID == "Midnight Carnival (Orange)") {
		themeID = "49";
	}
	else if (themeID == "Ignite") {
		themeID = "50";
	}
	else if (themeID == "Laser") {
		themeID = "51";
	}
	else if (themeID == "The Winter (White)") {
		themeID = "52";
	}
	else if (themeID == "Varying Christmas (Red)") {
		themeID = "53";
	}
	else if (themeID == "Cloud") {
		themeID = "54";
	}
	else if (themeID == "Dazzle (Violet)") {
		themeID = "55";
	}
	else if (themeID == "Neon (Red)") {
		themeID = "56";
	}
	else if (themeID == "Neon (Green)") {
		themeID = "57";
	}
	else if (themeID == "Egypt") {
		themeID = "58";
	}
	else if (themeID == "Eye Of Horus") {
		themeID = "59";
	}
	else if (themeID == "Cicrus") {
		themeID = "60";
	}
	else if (themeID == "Clown Park") {
		themeID = "61";
	}
	else if (themeID == "World Cup") {
		themeID = "62";
	}
	else if (themeID == "Football Field") {
		themeID = "63";
	}
	else if (themeID == "Alone (Blue)") {
		themeID = "64";
	}
	else if (themeID == "Alone (Green)") {
		themeID = "65";
	}
	else if (themeID == "Alone (Grey)") {
		themeID = "66";
	}
	else if (themeID == "Alone Remix (Gold Green)") {
		themeID = "67";
	}
	else if (themeID == "Faded (Gray)") {
		themeID = "68";
	}
	else if (themeID == "Faded (Green)") {
		themeID = "69";
	}
	else if (themeID == "Faded Remix (Gray)") {
		themeID = "70";
	}
	else if (themeID == "Faded Remix (Violet)") {
		themeID = "71";
	}
	else if (themeID == "Happy Birthday") {
		themeID = "72";
	}
	else if (themeID == "Anniversary") {
		themeID = "73";
	}
	else {
		themeID = "N/A";



		if (useTreeschk->Checked) {
			useTrees = "true";
		}
		else {
			useTrees = "false";
		}
		if (useTowerschk->Checked) {
			useTowers = "true";
		}
		else {
			useTowers = "false";
		}
		if (useAltGroundchk->Checked) {
			useAltGround = "true";
		}
		else {
			useAltGround = "false";
		}
		if (usePyramidschk->Checked) {
			usePyramids = "true";
		}
		else {
			usePyramids = "false";
		}
		if (usePalmTreeschk->Checked) {
			usePalmTrees = "true";
		}
		else {
			usePalmTrees = "false";
		}
		if (useSlasherschk->Checked) {
			useSlashers = "true";
		}
		else {
			useSlashers = "false";
		}
		if (useBuildingschk->Checked) {
			useBuildings = "true";
		}
		else {
			useBuildings = "false";
		}
		if (useFloodLightschk->Checked) {
			useFloodLights = "true";
		}
		else {
			useFloodLights = "false";
		}
		if (useFilmGrainEffectchk->Checked) {
			useFilmGrainEffect = "true";
		}
		else {
			useFilmGrainEffect = "false";
		}
		if (useAltPalmTreeschk->Checked) {
			useAltPalmTrees = "true";
		}
		else {
			useAltPalmTrees = "false";
		}
		if (useTeslaschk->Checked) {
			useTeslas = "true";
		}
		else {
			useTeslas = "false";
		}
		if (useRetroEffectschk->Checked) {
			useRetroEffects = "true";
		}
		else {
			useRetroEffects = "false";
		}
		if (useGreenMonitorEffectschk->Checked) {
			useGreenMonitorEffects = "true";
		}
		else {
			useGreenMonitorEffects = "false";
		}
		if (useColorMonitorEffectchk->Checked) {
			useColorMonitorEffect = "true";
		}
		else {
			useColorMonitorEffect = "false";
		}
	}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
}
private: System::Void useFloodLightschk_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;
	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
		themeID = "37";
	}
	else if (themeID == "Cube") {
		themeID = "38";
	}
	else if (themeID == "Poker") {
		themeID = "39";
	}
	else if (themeID == "JOKER") {
		themeID = "40";
	}
	else if (themeID == "Reggae") {
		themeID = "41";
	}
	else if (themeID == "Mental Rave") {
		themeID = "42";
	}
	else if (themeID == "Relics") {
		themeID = "43";
	}
	else if (themeID == "Fairy Tale") {
		themeID = "44";
	}
	else if (themeID == "Street Basketball") {
		themeID = "45";
	}
	else if (themeID == "Hoop Dream") {
		themeID = "46";
	}
	else if (themeID == "Midnight Carnival (Blue)") {
		themeID = "47";
	}
	else if (themeID == "Halloween Escape (Green)") {
		themeID = "48";
	}
	else if (themeID == "Midnight Carnival (Orange)") {
		themeID = "49";
	}
	else if (themeID == "Ignite") {
		themeID = "50";
	}
	else if (themeID == "Laser") {
		themeID = "51";
	}
	else if (themeID == "The Winter (White)") {
		themeID = "52";
	}
	else if (themeID == "Varying Christmas (Red)") {
		themeID = "53";
	}
	else if (themeID == "Cloud") {
		themeID = "54";
	}
	else if (themeID == "Dazzle (Violet)") {
		themeID = "55";
	}
	else if (themeID == "Neon (Red)") {
		themeID = "56";
	}
	else if (themeID == "Neon (Green)") {
		themeID = "57";
	}
	else if (themeID == "Egypt") {
		themeID = "58";
	}
	else if (themeID == "Eye Of Horus") {
		themeID = "59";
	}
	else if (themeID == "Cicrus") {
		themeID = "60";
	}
	else if (themeID == "Clown Park") {
		themeID = "61";
	}
	else if (themeID == "World Cup") {
		themeID = "62";
	}
	else if (themeID == "Football Field") {
		themeID = "63";
	}
	else if (themeID == "Alone (Blue)") {
		themeID = "64";
	}
	else if (themeID == "Alone (Green)") {
		themeID = "65";
	}
	else if (themeID == "Alone (Grey)") {
		themeID = "66";
	}
	else if (themeID == "Alone Remix (Gold Green)") {
		themeID = "67";
	}
	else if (themeID == "Faded (Gray)") {
		themeID = "68";
	}
	else if (themeID == "Faded (Green)") {
		themeID = "69";
	}
	else if (themeID == "Faded Remix (Gray)") {
		themeID = "70";
	}
	else if (themeID == "Faded Remix (Violet)") {
		themeID = "71";
	}
	else if (themeID == "Happy Birthday") {
		themeID = "72";
	}
	else if (themeID == "Anniversary") {
		themeID = "73";
	}
	else {
		themeID = "N/A";



		if (useTreeschk->Checked) {
			useTrees = "true";
		}
		else {
			useTrees = "false";
		}
		if (useTowerschk->Checked) {
			useTowers = "true";
		}
		else {
			useTowers = "false";
		}
		if (useAltGroundchk->Checked) {
			useAltGround = "true";
		}
		else {
			useAltGround = "false";
		}
		if (usePyramidschk->Checked) {
			usePyramids = "true";
		}
		else {
			usePyramids = "false";
		}
		if (usePalmTreeschk->Checked) {
			usePalmTrees = "true";
		}
		else {
			usePalmTrees = "false";
		}
		if (useSlasherschk->Checked) {
			useSlashers = "true";
		}
		else {
			useSlashers = "false";
		}
		if (useBuildingschk->Checked) {
			useBuildings = "true";
		}
		else {
			useBuildings = "false";
		}
		if (useFloodLightschk->Checked) {
			useFloodLights = "true";
		}
		else {
			useFloodLights = "false";
		}
		if (useFilmGrainEffectchk->Checked) {
			useFilmGrainEffect = "true";
		}
		else {
			useFilmGrainEffect = "false";
		}
		if (useAltPalmTreeschk->Checked) {
			useAltPalmTrees = "true";
		}
		else {
			useAltPalmTrees = "false";
		}
		if (useTeslaschk->Checked) {
			useTeslas = "true";
		}
		else {
			useTeslas = "false";
		}
		if (useRetroEffectschk->Checked) {
			useRetroEffects = "true";
		}
		else {
			useRetroEffects = "false";
		}
		if (useGreenMonitorEffectschk->Checked) {
			useGreenMonitorEffects = "true";
		}
		else {
			useGreenMonitorEffects = "false";
		}
		if (useColorMonitorEffectchk->Checked) {
			useColorMonitorEffect = "true";
		}
		else {
			useColorMonitorEffect = "false";
		}
	}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
}
private: System::Void useFilmGrainEffectchk_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;
	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
		themeID = "37";
	}
	else if (themeID == "Cube") {
		themeID = "38";
	}
	else if (themeID == "Poker") {
		themeID = "39";
	}
	else if (themeID == "JOKER") {
		themeID = "40";
	}
	else if (themeID == "Reggae") {
		themeID = "41";
	}
	else if (themeID == "Mental Rave") {
		themeID = "42";
	}
	else if (themeID == "Relics") {
		themeID = "43";
	}
	else if (themeID == "Fairy Tale") {
		themeID = "44";
	}
	else if (themeID == "Street Basketball") {
		themeID = "45";
	}
	else if (themeID == "Hoop Dream") {
		themeID = "46";
	}
	else if (themeID == "Midnight Carnival (Blue)") {
		themeID = "47";
	}
	else if (themeID == "Halloween Escape (Green)") {
		themeID = "48";
	}
	else if (themeID == "Midnight Carnival (Orange)") {
		themeID = "49";
	}
	else if (themeID == "Ignite") {
		themeID = "50";
	}
	else if (themeID == "Laser") {
		themeID = "51";
	}
	else if (themeID == "The Winter (White)") {
		themeID = "52";
	}
	else if (themeID == "Varying Christmas (Red)") {
		themeID = "53";
	}
	else if (themeID == "Cloud") {
		themeID = "54";
	}
	else if (themeID == "Dazzle (Violet)") {
		themeID = "55";
	}
	else if (themeID == "Neon (Red)") {
		themeID = "56";
	}
	else if (themeID == "Neon (Green)") {
		themeID = "57";
	}
	else if (themeID == "Egypt") {
		themeID = "58";
	}
	else if (themeID == "Eye Of Horus") {
		themeID = "59";
	}
	else if (themeID == "Cicrus") {
		themeID = "60";
	}
	else if (themeID == "Clown Park") {
		themeID = "61";
	}
	else if (themeID == "World Cup") {
		themeID = "62";
	}
	else if (themeID == "Football Field") {
		themeID = "63";
	}
	else if (themeID == "Alone (Blue)") {
		themeID = "64";
	}
	else if (themeID == "Alone (Green)") {
		themeID = "65";
	}
	else if (themeID == "Alone (Grey)") {
		themeID = "66";
	}
	else if (themeID == "Alone Remix (Gold Green)") {
		themeID = "67";
	}
	else if (themeID == "Faded (Gray)") {
		themeID = "68";
	}
	else if (themeID == "Faded (Green)") {
		themeID = "69";
	}
	else if (themeID == "Faded Remix (Gray)") {
		themeID = "70";
	}
	else if (themeID == "Faded Remix (Violet)") {
		themeID = "71";
	}
	else if (themeID == "Happy Birthday") {
		themeID = "72";
	}
	else if (themeID == "Anniversary") {
		themeID = "73";
	}
	else {
		themeID = "N/A";



		if (useTreeschk->Checked) {
			useTrees = "true";
		}
		else {
			useTrees = "false";
		}
		if (useTowerschk->Checked) {
			useTowers = "true";
		}
		else {
			useTowers = "false";
		}
		if (useAltGroundchk->Checked) {
			useAltGround = "true";
		}
		else {
			useAltGround = "false";
		}
		if (usePyramidschk->Checked) {
			usePyramids = "true";
		}
		else {
			usePyramids = "false";
		}
		if (usePalmTreeschk->Checked) {
			usePalmTrees = "true";
		}
		else {
			usePalmTrees = "false";
		}
		if (useSlasherschk->Checked) {
			useSlashers = "true";
		}
		else {
			useSlashers = "false";
		}
		if (useBuildingschk->Checked) {
			useBuildings = "true";
		}
		else {
			useBuildings = "false";
		}
		if (useFloodLightschk->Checked) {
			useFloodLights = "true";
		}
		else {
			useFloodLights = "false";
		}
		if (useFilmGrainEffectchk->Checked) {
			useFilmGrainEffect = "true";
		}
		else {
			useFilmGrainEffect = "false";
		}
		if (useAltPalmTreeschk->Checked) {
			useAltPalmTrees = "true";
		}
		else {
			useAltPalmTrees = "false";
		}
		if (useTeslaschk->Checked) {
			useTeslas = "true";
		}
		else {
			useTeslas = "false";
		}
		if (useRetroEffectschk->Checked) {
			useRetroEffects = "true";
		}
		else {
			useRetroEffects = "false";
		}
		if (useGreenMonitorEffectschk->Checked) {
			useGreenMonitorEffects = "true";
		}
		else {
			useGreenMonitorEffects = "false";
		}
		if (useColorMonitorEffectchk->Checked) {
			useColorMonitorEffect = "true";
		}
		else {
			useColorMonitorEffect = "false";
		}
	}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
}
private: System::Void useAltPalmTreeschk_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;
	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
		themeID = "37";
	}
	else if (themeID == "Cube") {
		themeID = "38";
	}
	else if (themeID == "Poker") {
		themeID = "39";
	}
	else if (themeID == "JOKER") {
		themeID = "40";
	}
	else if (themeID == "Reggae") {
		themeID = "41";
	}
	else if (themeID == "Mental Rave") {
		themeID = "42";
	}
	else if (themeID == "Relics") {
		themeID = "43";
	}
	else if (themeID == "Fairy Tale") {
		themeID = "44";
	}
	else if (themeID == "Street Basketball") {
		themeID = "45";
	}
	else if (themeID == "Hoop Dream") {
		themeID = "46";
	}
	else if (themeID == "Midnight Carnival (Blue)") {
		themeID = "47";
	}
	else if (themeID == "Halloween Escape (Green)") {
		themeID = "48";
	}
	else if (themeID == "Midnight Carnival (Orange)") {
		themeID = "49";
	}
	else if (themeID == "Ignite") {
		themeID = "50";
	}
	else if (themeID == "Laser") {
		themeID = "51";
	}
	else if (themeID == "The Winter (White)") {
		themeID = "52";
	}
	else if (themeID == "Varying Christmas (Red)") {
		themeID = "53";
	}
	else if (themeID == "Cloud") {
		themeID = "54";
	}
	else if (themeID == "Dazzle (Violet)") {
		themeID = "55";
	}
	else if (themeID == "Neon (Red)") {
		themeID = "56";
	}
	else if (themeID == "Neon (Green)") {
		themeID = "57";
	}
	else if (themeID == "Egypt") {
		themeID = "58";
	}
	else if (themeID == "Eye Of Horus") {
		themeID = "59";
	}
	else if (themeID == "Cicrus") {
		themeID = "60";
	}
	else if (themeID == "Clown Park") {
		themeID = "61";
	}
	else if (themeID == "World Cup") {
		themeID = "62";
	}
	else if (themeID == "Football Field") {
		themeID = "63";
	}
	else if (themeID == "Alone (Blue)") {
		themeID = "64";
	}
	else if (themeID == "Alone (Green)") {
		themeID = "65";
	}
	else if (themeID == "Alone (Grey)") {
		themeID = "66";
	}
	else if (themeID == "Alone Remix (Gold Green)") {
		themeID = "67";
	}
	else if (themeID == "Faded (Gray)") {
		themeID = "68";
	}
	else if (themeID == "Faded (Green)") {
		themeID = "69";
	}
	else if (themeID == "Faded Remix (Gray)") {
		themeID = "70";
	}
	else if (themeID == "Faded Remix (Violet)") {
		themeID = "71";
	}
	else if (themeID == "Happy Birthday") {
		themeID = "72";
	}
	else if (themeID == "Anniversary") {
		themeID = "73";
	}
	else {
		themeID = "N/A";



		if (useTreeschk->Checked) {
			useTrees = "true";
		}
		else {
			useTrees = "false";
		}
		if (useTowerschk->Checked) {
			useTowers = "true";
		}
		else {
			useTowers = "false";
		}
		if (useAltGroundchk->Checked) {
			useAltGround = "true";
		}
		else {
			useAltGround = "false";
		}
		if (usePyramidschk->Checked) {
			usePyramids = "true";
		}
		else {
			usePyramids = "false";
		}
		if (usePalmTreeschk->Checked) {
			usePalmTrees = "true";
		}
		else {
			usePalmTrees = "false";
		}
		if (useSlasherschk->Checked) {
			useSlashers = "true";
		}
		else {
			useSlashers = "false";
		}
		if (useBuildingschk->Checked) {
			useBuildings = "true";
		}
		else {
			useBuildings = "false";
		}
		if (useFloodLightschk->Checked) {
			useFloodLights = "true";
		}
		else {
			useFloodLights = "false";
		}
		if (useFilmGrainEffectchk->Checked) {
			useFilmGrainEffect = "true";
		}
		else {
			useFilmGrainEffect = "false";
		}
		if (useAltPalmTreeschk->Checked) {
			useAltPalmTrees = "true";
		}
		else {
			useAltPalmTrees = "false";
		}
		if (useTeslaschk->Checked) {
			useTeslas = "true";
		}
		else {
			useTeslas = "false";
		}
		if (useRetroEffectschk->Checked) {
			useRetroEffects = "true";
		}
		else {
			useRetroEffects = "false";
		}
		if (useGreenMonitorEffectschk->Checked) {
			useGreenMonitorEffects = "true";
		}
		else {
			useGreenMonitorEffects = "false";
		}
		if (useColorMonitorEffectchk->Checked) {
			useColorMonitorEffect = "true";
		}
		else {
			useColorMonitorEffect = "false";
		}
	}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
}
private: System::Void useTeslaschk_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;
	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
		themeID = "37";
	}
	else if (themeID == "Cube") {
		themeID = "38";
	}
	else if (themeID == "Poker") {
		themeID = "39";
	}
	else if (themeID == "JOKER") {
		themeID = "40";
	}
	else if (themeID == "Reggae") {
		themeID = "41";
	}
	else if (themeID == "Mental Rave") {
		themeID = "42";
	}
	else if (themeID == "Relics") {
		themeID = "43";
	}
	else if (themeID == "Fairy Tale") {
		themeID = "44";
	}
	else if (themeID == "Street Basketball") {
		themeID = "45";
	}
	else if (themeID == "Hoop Dream") {
		themeID = "46";
	}
	else if (themeID == "Midnight Carnival (Blue)") {
		themeID = "47";
	}
	else if (themeID == "Halloween Escape (Green)") {
		themeID = "48";
	}
	else if (themeID == "Midnight Carnival (Orange)") {
		themeID = "49";
	}
	else if (themeID == "Ignite") {
		themeID = "50";
	}
	else if (themeID == "Laser") {
		themeID = "51";
	}
	else if (themeID == "The Winter (White)") {
		themeID = "52";
	}
	else if (themeID == "Varying Christmas (Red)") {
		themeID = "53";
	}
	else if (themeID == "Cloud") {
		themeID = "54";
	}
	else if (themeID == "Dazzle (Violet)") {
		themeID = "55";
	}
	else if (themeID == "Neon (Red)") {
		themeID = "56";
	}
	else if (themeID == "Neon (Green)") {
		themeID = "57";
	}
	else if (themeID == "Egypt") {
		themeID = "58";
	}
	else if (themeID == "Eye Of Horus") {
		themeID = "59";
	}
	else if (themeID == "Cicrus") {
		themeID = "60";
	}
	else if (themeID == "Clown Park") {
		themeID = "61";
	}
	else if (themeID == "World Cup") {
		themeID = "62";
	}
	else if (themeID == "Football Field") {
		themeID = "63";
	}
	else if (themeID == "Alone (Blue)") {
		themeID = "64";
	}
	else if (themeID == "Alone (Green)") {
		themeID = "65";
	}
	else if (themeID == "Alone (Grey)") {
		themeID = "66";
	}
	else if (themeID == "Alone Remix (Gold Green)") {
		themeID = "67";
	}
	else if (themeID == "Faded (Gray)") {
		themeID = "68";
	}
	else if (themeID == "Faded (Green)") {
		themeID = "69";
	}
	else if (themeID == "Faded Remix (Gray)") {
		themeID = "70";
	}
	else if (themeID == "Faded Remix (Violet)") {
		themeID = "71";
	}
	else if (themeID == "Happy Birthday") {
		themeID = "72";
	}
	else if (themeID == "Anniversary") {
		themeID = "73";
	}
	else {
		themeID = "N/A";



		if (useTreeschk->Checked) {
			useTrees = "true";
		}
		else {
			useTrees = "false";
		}
		if (useTowerschk->Checked) {
			useTowers = "true";
		}
		else {
			useTowers = "false";
		}
		if (useAltGroundchk->Checked) {
			useAltGround = "true";
		}
		else {
			useAltGround = "false";
		}
		if (usePyramidschk->Checked) {
			usePyramids = "true";
		}
		else {
			usePyramids = "false";
		}
		if (usePalmTreeschk->Checked) {
			usePalmTrees = "true";
		}
		else {
			usePalmTrees = "false";
		}
		if (useSlasherschk->Checked) {
			useSlashers = "true";
		}
		else {
			useSlashers = "false";
		}
		if (useBuildingschk->Checked) {
			useBuildings = "true";
		}
		else {
			useBuildings = "false";
		}
		if (useFloodLightschk->Checked) {
			useFloodLights = "true";
		}
		else {
			useFloodLights = "false";
		}
		if (useFilmGrainEffectchk->Checked) {
			useFilmGrainEffect = "true";
		}
		else {
			useFilmGrainEffect = "false";
		}
		if (useAltPalmTreeschk->Checked) {
			useAltPalmTrees = "true";
		}
		else {
			useAltPalmTrees = "false";
		}
		if (useTeslaschk->Checked) {
			useTeslas = "true";
		}
		else {
			useTeslas = "false";
		}
		if (useRetroEffectschk->Checked) {
			useRetroEffects = "true";
		}
		else {
			useRetroEffects = "false";
		}
		if (useGreenMonitorEffectschk->Checked) {
			useGreenMonitorEffects = "true";
		}
		else {
			useGreenMonitorEffects = "false";
		}
		if (useColorMonitorEffectchk->Checked) {
			useColorMonitorEffect = "true";
		}
		else {
			useColorMonitorEffect = "false";
		}
	}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
}
private: System::Void useRetroEffectschk_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;
	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
		themeID = "37";
	}
	else if (themeID == "Cube") {
		themeID = "38";
	}
	else if (themeID == "Poker") {
		themeID = "39";
	}
	else if (themeID == "JOKER") {
		themeID = "40";
	}
	else if (themeID == "Reggae") {
		themeID = "41";
	}
	else if (themeID == "Mental Rave") {
		themeID = "42";
	}
	else if (themeID == "Relics") {
		themeID = "43";
	}
	else if (themeID == "Fairy Tale") {
		themeID = "44";
	}
	else if (themeID == "Street Basketball") {
		themeID = "45";
	}
	else if (themeID == "Hoop Dream") {
		themeID = "46";
	}
	else if (themeID == "Midnight Carnival (Blue)") {
		themeID = "47";
	}
	else if (themeID == "Halloween Escape (Green)") {
		themeID = "48";
	}
	else if (themeID == "Midnight Carnival (Orange)") {
		themeID = "49";
	}
	else if (themeID == "Ignite") {
		themeID = "50";
	}
	else if (themeID == "Laser") {
		themeID = "51";
	}
	else if (themeID == "The Winter (White)") {
		themeID = "52";
	}
	else if (themeID == "Varying Christmas (Red)") {
		themeID = "53";
	}
	else if (themeID == "Cloud") {
		themeID = "54";
	}
	else if (themeID == "Dazzle (Violet)") {
		themeID = "55";
	}
	else if (themeID == "Neon (Red)") {
		themeID = "56";
	}
	else if (themeID == "Neon (Green)") {
		themeID = "57";
	}
	else if (themeID == "Egypt") {
		themeID = "58";
	}
	else if (themeID == "Eye Of Horus") {
		themeID = "59";
	}
	else if (themeID == "Cicrus") {
		themeID = "60";
	}
	else if (themeID == "Clown Park") {
		themeID = "61";
	}
	else if (themeID == "World Cup") {
		themeID = "62";
	}
	else if (themeID == "Football Field") {
		themeID = "63";
	}
	else if (themeID == "Alone (Blue)") {
		themeID = "64";
	}
	else if (themeID == "Alone (Green)") {
		themeID = "65";
	}
	else if (themeID == "Alone (Grey)") {
		themeID = "66";
	}
	else if (themeID == "Alone Remix (Gold Green)") {
		themeID = "67";
	}
	else if (themeID == "Faded (Gray)") {
		themeID = "68";
	}
	else if (themeID == "Faded (Green)") {
		themeID = "69";
	}
	else if (themeID == "Faded Remix (Gray)") {
		themeID = "70";
	}
	else if (themeID == "Faded Remix (Violet)") {
		themeID = "71";
	}
	else if (themeID == "Happy Birthday") {
		themeID = "72";
	}
	else if (themeID == "Anniversary") {
		themeID = "73";
	}
	else {
		themeID = "N/A";



		if (useTreeschk->Checked) {
			useTrees = "true";
		}
		else {
			useTrees = "false";
		}
		if (useTowerschk->Checked) {
			useTowers = "true";
		}
		else {
			useTowers = "false";
		}
		if (useAltGroundchk->Checked) {
			useAltGround = "true";
		}
		else {
			useAltGround = "false";
		}
		if (usePyramidschk->Checked) {
			usePyramids = "true";
		}
		else {
			usePyramids = "false";
		}
		if (usePalmTreeschk->Checked) {
			usePalmTrees = "true";
		}
		else {
			usePalmTrees = "false";
		}
		if (useSlasherschk->Checked) {
			useSlashers = "true";
		}
		else {
			useSlashers = "false";
		}
		if (useBuildingschk->Checked) {
			useBuildings = "true";
		}
		else {
			useBuildings = "false";
		}
		if (useFloodLightschk->Checked) {
			useFloodLights = "true";
		}
		else {
			useFloodLights = "false";
		}
		if (useFilmGrainEffectchk->Checked) {
			useFilmGrainEffect = "true";
		}
		else {
			useFilmGrainEffect = "false";
		}
		if (useAltPalmTreeschk->Checked) {
			useAltPalmTrees = "true";
		}
		else {
			useAltPalmTrees = "false";
		}
		if (useTeslaschk->Checked) {
			useTeslas = "true";
		}
		else {
			useTeslas = "false";
		}
		if (useRetroEffectschk->Checked) {
			useRetroEffects = "true";
		}
		else {
			useRetroEffects = "false";
		}
		if (useGreenMonitorEffectschk->Checked) {
			useGreenMonitorEffects = "true";
		}
		else {
			useGreenMonitorEffects = "false";
		}
		if (useColorMonitorEffectchk->Checked) {
			useColorMonitorEffect = "true";
		}
		else {
			useColorMonitorEffect = "false";
		}
	}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
}
private: System::Void useGreenMonitorEffectschk_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;
	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
		themeID = "37";
	}
	else if (themeID == "Cube") {
		themeID = "38";
	}
	else if (themeID == "Poker") {
		themeID = "39";
	}
	else if (themeID == "JOKER") {
		themeID = "40";
	}
	else if (themeID == "Reggae") {
		themeID = "41";
	}
	else if (themeID == "Mental Rave") {
		themeID = "42";
	}
	else if (themeID == "Relics") {
		themeID = "43";
	}
	else if (themeID == "Fairy Tale") {
		themeID = "44";
	}
	else if (themeID == "Street Basketball") {
		themeID = "45";
	}
	else if (themeID == "Hoop Dream") {
		themeID = "46";
	}
	else if (themeID == "Midnight Carnival (Blue)") {
		themeID = "47";
	}
	else if (themeID == "Halloween Escape (Green)") {
		themeID = "48";
	}
	else if (themeID == "Midnight Carnival (Orange)") {
		themeID = "49";
	}
	else if (themeID == "Ignite") {
		themeID = "50";
	}
	else if (themeID == "Laser") {
		themeID = "51";
	}
	else if (themeID == "The Winter (White)") {
		themeID = "52";
	}
	else if (themeID == "Varying Christmas (Red)") {
		themeID = "53";
	}
	else if (themeID == "Cloud") {
		themeID = "54";
	}
	else if (themeID == "Dazzle (Violet)") {
		themeID = "55";
	}
	else if (themeID == "Neon (Red)") {
		themeID = "56";
	}
	else if (themeID == "Neon (Green)") {
		themeID = "57";
	}
	else if (themeID == "Egypt") {
		themeID = "58";
	}
	else if (themeID == "Eye Of Horus") {
		themeID = "59";
	}
	else if (themeID == "Cicrus") {
		themeID = "60";
	}
	else if (themeID == "Clown Park") {
		themeID = "61";
	}
	else if (themeID == "World Cup") {
		themeID = "62";
	}
	else if (themeID == "Football Field") {
		themeID = "63";
	}
	else if (themeID == "Alone (Blue)") {
		themeID = "64";
	}
	else if (themeID == "Alone (Green)") {
		themeID = "65";
	}
	else if (themeID == "Alone (Grey)") {
		themeID = "66";
	}
	else if (themeID == "Alone Remix (Gold Green)") {
		themeID = "67";
	}
	else if (themeID == "Faded (Gray)") {
		themeID = "68";
	}
	else if (themeID == "Faded (Green)") {
		themeID = "69";
	}
	else if (themeID == "Faded Remix (Gray)") {
		themeID = "70";
	}
	else if (themeID == "Faded Remix (Violet)") {
		themeID = "71";
	}
	else if (themeID == "Happy Birthday") {
		themeID = "72";
	}
	else if (themeID == "Anniversary") {
		themeID = "73";
	}
	else {
		themeID = "N/A";



		if (useTreeschk->Checked) {
			useTrees = "true";
		}
		else {
			useTrees = "false";
		}
		if (useTowerschk->Checked) {
			useTowers = "true";
		}
		else {
			useTowers = "false";
		}
		if (useAltGroundchk->Checked) {
			useAltGround = "true";
		}
		else {
			useAltGround = "false";
		}
		if (usePyramidschk->Checked) {
			usePyramids = "true";
		}
		else {
			usePyramids = "false";
		}
		if (usePalmTreeschk->Checked) {
			usePalmTrees = "true";
		}
		else {
			usePalmTrees = "false";
		}
		if (useSlasherschk->Checked) {
			useSlashers = "true";
		}
		else {
			useSlashers = "false";
		}
		if (useBuildingschk->Checked) {
			useBuildings = "true";
		}
		else {
			useBuildings = "false";
		}
		if (useFloodLightschk->Checked) {
			useFloodLights = "true";
		}
		else {
			useFloodLights = "false";
		}
		if (useFilmGrainEffectchk->Checked) {
			useFilmGrainEffect = "true";
		}
		else {
			useFilmGrainEffect = "false";
		}
		if (useAltPalmTreeschk->Checked) {
			useAltPalmTrees = "true";
		}
		else {
			useAltPalmTrees = "false";
		}
		if (useTeslaschk->Checked) {
			useTeslas = "true";
		}
		else {
			useTeslas = "false";
		}
		if (useRetroEffectschk->Checked) {
			useRetroEffects = "true";
		}
		else {
			useRetroEffects = "false";
		}
		if (useGreenMonitorEffectschk->Checked) {
			useGreenMonitorEffects = "true";
		}
		else {
			useGreenMonitorEffects = "false";
		}
		if (useColorMonitorEffectchk->Checked) {
			useColorMonitorEffect = "true";
		}
		else {
			useColorMonitorEffect = "false";
		}
	}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
}
private: System::Void useColorMonitorEffectchk_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	output->Clear();
	String^ pos = lvlpos->Text;
	if (pos == "") {
		pos = "N/A";
	}
	String^ useTrees;
	String^ useTowers;
	String^ useAltGround;
	String^ usePyramids;
	String^ usePalmTrees;
	String^ useSlashers;
	String^ useBuildings;
	String^ useFloodLights;
	String^ useFilmGrainEffect;
	String^ useAltPalmTrees;
	String^ useTeslas;
	String^ useRetroEffects;
	String^ useGreenMonitorEffects;
	String^ useColorMonitorEffect;
	String^ themeID = comboBox1->Text;
	if (themeID == "Massif") {
		themeID = "1";
	}
	else if (themeID == "Sky") {
		themeID = "2";
	}
	else if (themeID == "Forest") {
		themeID = "3";
	}
	else if (themeID == "Desert (Cyan)") {
		themeID = "4";
	}
	else if (themeID == "Volcano") {
		themeID = "5";
	}
	else if (themeID == "illusion") {
		themeID = "6";
	}
	else if (themeID == "Desert (Orange)") {
		themeID = "7";
	}
	else if (themeID == "City (Light)") {
		themeID = "8";
	}
	else if (themeID == "City (Dark)") {
		themeID = "9";
	}
	else if (themeID == "Sci-Tech") {
		themeID = "10";
	}
	else if (themeID == "(Sci-Tech) illusion") {
		themeID = "11";
	}
	else if (themeID == "Tetris (Blue)") {
		themeID = "12";
	}
	else if (themeID == "Tetris (Cyan Trees+Tetris figures") {
		themeID = "13";
	}
	else if (themeID == "Tetris (Cyan Buildings)") {
		themeID = "14";
	}
	else if (themeID == "E-labyrinth (Violet)") {
		themeID = "15";
	}
	else if (themeID == "E-labyrinth (Blue+Blue Ball)") {
		themeID = "16";
	}
	else if (themeID == "E-labyrinth (Blue+Yellow Ball)") {
		themeID = "17";
	}
	else if (themeID == "Castle In The Sky (Orange Gem)") {
		themeID = "18";
	}
	else if (themeID == "Castle In The Sky (Red Gem)") {
		themeID = "19";
	}
	else if (themeID == "Volcano (Castle In The Sky)") {
		themeID = "21";
	}
	else if (themeID == "Halloween (Blue)") {
		themeID = "22";
	}
	else if (themeID == "Halloween (Grey)") {
		themeID = "23";
	}
	else if (themeID == "Ghost Dance") {
		themeID = "24";
	}
	else if (themeID == "Deep Space (Blue)") {
		themeID = "25";
	}
	else if (themeID == "Deep Space (Green)") {
		themeID = "26";
	}
	else if (themeID == "Christmas (Cyan)") {
		themeID = "27";
	}
	else if (themeID == "Christmas (Orange)") {
		themeID = "28";
	}
	else if (themeID == "Monody") {
		themeID = "29";
	}
	else if (themeID == "Kung Fu (Green)") {
		themeID = "30";
	}
	else if (themeID == "Kung Fu (Yellow)") {
		themeID = "31";
	}
	else if (themeID == "Candy (Cyan)") {
		themeID = "32";
	}
	else if (themeID == "Candy (Blue)") {
		themeID = "33";
	}
	else if (themeID == "1UP (Violet)") {
		themeID = "34";
	}
	else if (themeID == "8 Bits (Green)") {
		themeID = "35";
	}
	else if (themeID == "1UP (Grey)") {
		themeID = "36";
	}
	else if (themeID == "Matrix") {
		themeID = "37";
	}
	else if (themeID == "Cube") {
		themeID = "38";
	}
	else if (themeID == "Poker") {
		themeID = "39";
	}
	else if (themeID == "JOKER") {
		themeID = "40";
	}
	else if (themeID == "Reggae") {
		themeID = "41";
	}
	else if (themeID == "Mental Rave") {
		themeID = "42";
	}
	else if (themeID == "Relics") {
		themeID = "43";
	}
	else if (themeID == "Fairy Tale") {
		themeID = "44";
	}
	else if (themeID == "Street Basketball") {
		themeID = "45";
	}
	else if (themeID == "Hoop Dream") {
		themeID = "46";
	}
	else if (themeID == "Midnight Carnival (Blue)") {
		themeID = "47";
	}
	else if (themeID == "Halloween Escape (Green)") {
		themeID = "48";
	}
	else if (themeID == "Midnight Carnival (Orange)") {
		themeID = "49";
	}
	else if (themeID == "Ignite") {
		themeID = "50";
	}
	else if (themeID == "Laser") {
		themeID = "51";
	}
	else if (themeID == "The Winter (White)") {
		themeID = "52";
	}
	else if (themeID == "Varying Christmas (Red)") {
		themeID = "53";
	}
	else if (themeID == "Cloud") {
		themeID = "54";
	}
	else if (themeID == "Dazzle (Violet)") {
		themeID = "55";
	}
	else if (themeID == "Neon (Red)") {
		themeID = "56";
	}
	else if (themeID == "Neon (Green)") {
		themeID = "57";
	}
	else if (themeID == "Egypt") {
		themeID = "58";
	}
	else if (themeID == "Eye Of Horus") {
		themeID = "59";
	}
	else if (themeID == "Cicrus") {
		themeID = "60";
	}
	else if (themeID == "Clown Park") {
		themeID = "61";
	}
	else if (themeID == "World Cup") {
		themeID = "62";
	}
	else if (themeID == "Football Field") {
		themeID = "63";
	}
	else if (themeID == "Alone (Blue)") {
		themeID = "64";
	}
	else if (themeID == "Alone (Green)") {
		themeID = "65";
	}
	else if (themeID == "Alone (Grey)") {
		themeID = "66";
	}
	else if (themeID == "Alone Remix (Gold Green)") {
		themeID = "67";
	}
	else if (themeID == "Faded (Gray)") {
		themeID = "68";
	}
	else if (themeID == "Faded (Green)") {
		themeID = "69";
	}
	else if (themeID == "Faded Remix (Gray)") {
		themeID = "70";
	}
	else if (themeID == "Faded Remix (Violet)") {
		themeID = "71";
	}
	else if (themeID == "Happy Birthday") {
		themeID = "72";
	}
	else if (themeID == "Anniversary") {
		themeID = "73";
	}
	else {
		themeID = "N/A";



		if (useTreeschk->Checked) {
			useTrees = "true";
		}
		else {
			useTrees = "false";
		}
		if (useTowerschk->Checked) {
			useTowers = "true";
		}
		else {
			useTowers = "false";
		}
		if (useAltGroundchk->Checked) {
			useAltGround = "true";
		}
		else {
			useAltGround = "false";
		}
		if (usePyramidschk->Checked) {
			usePyramids = "true";
		}
		else {
			usePyramids = "false";
		}
		if (usePalmTreeschk->Checked) {
			usePalmTrees = "true";
		}
		else {
			usePalmTrees = "false";
		}
		if (useSlasherschk->Checked) {
			useSlashers = "true";
		}
		else {
			useSlashers = "false";
		}
		if (useBuildingschk->Checked) {
			useBuildings = "true";
		}
		else {
			useBuildings = "false";
		}
		if (useFloodLightschk->Checked) {
			useFloodLights = "true";
		}
		else {
			useFloodLights = "false";
		}
		if (useFilmGrainEffectchk->Checked) {
			useFilmGrainEffect = "true";
		}
		else {
			useFilmGrainEffect = "false";
		}
		if (useAltPalmTreeschk->Checked) {
			useAltPalmTrees = "true";
		}
		else {
			useAltPalmTrees = "false";
		}
		if (useTeslaschk->Checked) {
			useTeslas = "true";
		}
		else {
			useTeslas = "false";
		}
		if (useRetroEffectschk->Checked) {
			useRetroEffects = "true";
		}
		else {
			useRetroEffects = "false";
		}
		if (useGreenMonitorEffectschk->Checked) {
			useGreenMonitorEffects = "true";
		}
		else {
			useGreenMonitorEffects = "false";
		}
		if (useColorMonitorEffectchk->Checked) {
			useColorMonitorEffect = "true";
		}
		else {
			useColorMonitorEffect = "false";
		}
	}
	output->AppendText("new LevelDesigner.Theme(" + pos + ", " + themeID + ", 1f, " + useTrees + ", " + useTowers + ", " + useAltGround + ", " + usePyramids + ", " + usePalmTrees + ", " + useSlashers + ", " + useBuildings + ", " + useFloodLights + ", " + useFilmGrainEffect + ", " + useAltPalmTrees + ", " + useTeslas + ", " + useRetroEffects + ", " + useGreenMonitorEffects + ", " + useColorMonitorEffect + ")");
}
};
}
