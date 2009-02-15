
from midiutil import Enumeration

channelVoiceMessages = Enumeration([("NOTE_OFF", 0x80),
                                    ("NOTE_ON", 0x90),
                                    ("POLYPHONIC_KEY_PRESSURE", 0xA0),
                                    ("CONTROLLER_CHANGE", 0xB0),
                                    ("PROGRAM_CHANGE", 0xC0),
                                    ("CHANNEL_KEY_PRESSURE", 0xD0),
                                    ("PITCH_BEND", 0xE0)])

channelModeMessages = Enumeration([("ALL_SOUND_OFF", 0x78),
                                   ("RESET_ALL_CONTROLLERS", 0x79),
                                   ("LOCAL_CONTROL", 0x7A),
                                   ("ALL_NOTES_OFF", 0x7B),
                                   ("OMNI_MODE_OFF", 0x7C),
                                   ("OMNI_MODE_ON", 0x7D),
                                   ("MONO_MODE_ON", 0x7E),
                                   ("POLY_MODE_ON", 0x7F)])

metaEvents = Enumeration([("SEQUENCE_NUMBER", 0x00),
                          ("TEXT_EVENT", 0x01),
                          ("COPYRIGHT_NOTICE", 0x02),
                          ("SEQUENCE_TRACK_NAME", 0x03),
                          ("INSTRUMENT_NAME", 0x04),
                          ("LYRIC", 0x05),
                          ("MARKER", 0x06),
                          ("CUE_POINT", 0x07),
                          ("MIDI_CHANNEL_PREFIX", 0x20),
                          ("MIDI_PORT", 0x21),
                          ("END_OF_TRACK", 0x2F),
                          ("SET_TEMPO", 0x51),
                          ("SMTPE_OFFSET", 0x54),
                          ("TIME_SIGNATURE", 0x58),
                          ("KEY_SIGNATURE", 0x59),
                          ("SEQUENCER_SPECIFIC_META_EVENT", 0x7F)])

GM_instruments = ['Acoustic Grand Piano',
'Bright Piano',
'Electric Grand Piano',
'Honky-Tonk Piano',
'Electric piano 1',
'Electric Piano 2',
'Harpsichord',
'Clavinet',
'Celesta',
'Glockenspiel',
'Music Box',
'Vibraphone',
'Marimba',
'Xylophone',
'Tubular bells',
'Dulcimer',
'Drawbar Organ',
'Percussive Organ',
'Rock Organ',
'Church Organ',
'Reed Organ',
'Accordion',
'Harmonica',
'Tango Accordion',
'Nylon String Guitar',
'Steel String Guitar',
'Jazz Guitar',
'Clean Electric Guitar',
'Muted Electric Guitar',
'Overdrive Guitar',
'Distortion Guitar',
'Guitar Harmonics',
'Accoustic Bass',
'Fingered Bass',
'Picked Bass',
'Fretless Bass',
'Slap Bass 1',
'Slap Bass 2',
'Synth Bass 1',
'Synth Bass 2',
'Violin',
'Viola',
'Cello',
'Contrabass',
'Tremolo Strings',
'Pizzicato Strings',
'Orchestral Harp',
'Timpani',
'String Ensemble 1',
'String Ensemble 2',
'Synth Strings 1',
'Synth Strings 2',
'Choir Ahh',
'Choir Oohh',
'Synth Voice',
'Orchestral Hit',
'Trumpet',
'Trombone',
'Tuba',
'Muted Trumpet',
'French Horn',
'Brass Section',
'Synth Brass 1',
'Synth Brass 2',
'Soprano Sax',
'Alto Sax',
'Tenor Sax',
'Baritone Sax',
'Oboe',
'English Horn',
'Bassoon',
'Clarinet',
'Piccolo',
'Flute',
'Recorder',
'Pan flute',
'Blown Bottle',
'Shakuhachi',
'Whistle',
'Ocarina',
'Square Wave',
'Sawtooth Wave',
'Caliope',
'Chiff',
'Charang',
'Voice',
'Fifths',
'Bass & Lead',
'New Age',
'Warm',
'PolySynth',
'Choir',
'Bowed',
'Metallic',
'Halo',
'Sweep',
'FX: Rain',
'FX: Soundtrack',
'FX: Crystal',
'FX: Atmosphere',
'FX: Brightness',
'FX: Goblins',
'FX: Echo Drops',
'FX: Star Theme',
'Sitar',
'Banjo',
'Shamisen',
'Koto',
'Kalimba',
'Bagpipe',
'Fiddle',
'Shanai',
'Tinkle bell',
'Agogo',
'Steel Drums',
'Woodblock',
'Taiko Drum',
'Melodic Tom',
'Synth Drum',
'Reverse Cymbal',
'Guitar Fret Noise',
'Breath Noise',
'Seashore',
'Bird Tweet',
'Telephone Ring',
'Helicopter',
'Applause',
'Gunshot']

GM_drums = ['Acoustic Bass Drum',
'Bass Drum 1',
'Side Stick',
'Acoustic Snare',
'Hand Clap',
'Electric Snare',
'Low Floor Tom',
'Closed Hi-Hat',
'High Floor Tom',
'Pedal Hi-Hat',
'Low Tom',
'Open Hi-Hat',
'Low-Mid Tom',
'Hi-Mid Tom',
'Crash Cymbal 1',
'High Tom',
'Ride Cymbal 1',
'Chinese Cymbal',
'Ride Bell',
'Tambourine',
'Splash Cymbal',
'Cowbell',
'Crash Cymbal 2',
'Vibraslap',
'Ride Cymbal 2',
'Hi Bongo',
'Low Bongo',
'Mute Hi Conga',
'Open Hi Conga',
'Low Conga',
'High Timbale',
'Low Timbale',
'High Agogo',
'Low Agogo',
'Cabasa',
'Maracas',
'Short Whistle',
'Long Whistle',
'Short Guiro',
'Long Guiro',
'Claves',
'Hi Wood Block',
'Low Wood Block',
'Mute Cuica',
'Open Cuica',
'Mute Triangle',
'Open Triangle']
