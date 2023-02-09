/*

This file is only required if you want a custom music in the main menu
If you do not want custom music, delete this file

*/

const string MUSIC_SOUNDSET 	= "SZ_Custom_beta_Music_1_SoundSet";

const bool UseCustomMusic       = true;

modded class MissionMainMenu
{
	private ref AbstractWave m_MenuMusic;
	
	override void OnMissionStart()
    {
        super.OnMissionStart();
        PlayMusic();
    }
    
    override void OnMissionFinish()
    {
        super.OnMissionFinish();
        StopMusic();
    }

	override void PlayMusic()
	{
        if ( UseCustomMusic )
        {
            if ( !m_MenuMusic )
            {
                SoundParams soundParams			= new SoundParams( MUSIC_SOUNDSET );
                SoundObjectBuilder soundBuilder	= new SoundObjectBuilder( soundParams );
                SoundObject soundObject			= soundBuilder.BuildSoundObject();
                soundObject.SetKind( WaveKind.WAVEMUSIC );
                m_MenuMusic = GetGame().GetSoundScene().Play2D(soundObject, soundBuilder);
                m_MenuMusic.Loop( true );
                m_MenuMusic.Play();
            }
        } else {
		    super.PlayMusic();
        }
	}
};