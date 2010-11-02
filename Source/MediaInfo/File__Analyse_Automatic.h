// Enums - Automaticly generated enums for MediaInfo
// Copyright (C) 2008-2008 Jerome Martinez, Zen@MediaArea.net
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Automaticly generated methods for MediaInfo
// Don't modify, this will be deleted at the next automatic update
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//---------------------------------------------------------------------------
#ifndef MediaInfo_File__Analyze_AutomaticH
#define MediaInfo_File__Analyze_AutomaticH
//---------------------------------------------------------------------------

namespace MediaInfoLib
{

//---------------------------------------------------------------------------
enum generic
{
    Generic_Format,
    Generic_Format_Info,
    Generic_Format_Url,
    Generic_Format_Commercial,
    Generic_Format_Commercial_IfAny,
    Generic_Format_Version,
    Generic_Format_Profile,
    Generic_Format_Settings,
    Generic_InternetMediaType,
    Generic_CodecID,
    Generic_CodecID_Info,
    Generic_CodecID_Hint,
    Generic_CodecID_Url,
    Generic_CodecID_Description,
    Generic_Codec,
    Generic_Codec_String,
    Generic_Codec_Info,
    Generic_Codec_Url,
    Generic_Codec_CC,
    Generic_Duration,
    Generic_Duration_String,
    Generic_Duration_String1,
    Generic_Duration_String2,
    Generic_Duration_String3,
    Generic_BitRate_Mode,
    Generic_BitRate_Mode_String,
    Generic_BitRate,
    Generic_BitRate_String,
    Generic_BitRate_Minimum,
    Generic_BitRate_Minimum_String,
    Generic_BitRate_Nominal,
    Generic_BitRate_Nominal_String,
    Generic_BitRate_Maximum,
    Generic_BitRate_Maximum_String,
    Generic_ColorSpace,
    Generic_ChromaSubsampling,
    Generic_Resolution,
    Generic_Resolution_String,
    Generic_BitDepth,
    Generic_BitDepth_String,
    Generic_Compression_Mode,
    Generic_Compression_Mode_String,
    Generic_Compression_Ratio,
    Generic_Delay,
    Generic_Delay_String,
    Generic_Delay_String1,
    Generic_Delay_String2,
    Generic_Delay_String3,
    Generic_Delay_String4,
    Generic_Delay_Settings,
    Generic_Delay_Source,
    Generic_Delay_Original,
    Generic_Delay_Original_String,
    Generic_Delay_Original_String1,
    Generic_Delay_Original_String2,
    Generic_Delay_Original_String3,
    Generic_Delay_Original_String4,
    Generic_Delay_Original_Settings,
    Generic_Delay_Original_Source,
    Generic_Video_Delay,
    Generic_Video_Delay_String,
    Generic_Video_Delay_String1,
    Generic_Video_Delay_String2,
    Generic_Video_Delay_String3,
    Generic_Video_Delay_String4,
    Generic_StreamSize,
    Generic_StreamSize_String,
    Generic_StreamSize_String1,
    Generic_StreamSize_String2,
    Generic_StreamSize_String3,
    Generic_StreamSize_String4,
    Generic_StreamSize_String5,
    Generic_StreamSize_Proportion,
};

//---------------------------------------------------------------------------
enum general
{
    General_Count,
    General_StreamCount,
    General_StreamKind,
    General_StreamKind_String,
    General_StreamKindID,
    General_StreamKindPos,
    General_Inform,
    General_ID,
    General_ID_String,
    General_UniqueID,
    General_UniqueID_String,
    General_MenuID,
    General_MenuID_String,
    General_GeneralCount,
    General_VideoCount,
    General_AudioCount,
    General_TextCount,
    General_ChaptersCount,
    General_ImageCount,
    General_MenuCount,
    General_Video_Format_List,
    General_Video_Format_WithHint_List,
    General_Video_Codec_List,
    General_Video_Language_List,
    General_Audio_Format_List,
    General_Audio_Format_WithHint_List,
    General_Audio_Codec_List,
    General_Audio_Language_List,
    General_Text_Format_List,
    General_Text_Format_WithHint_List,
    General_Text_Codec_List,
    General_Text_Language_List,
    General_Chapters_Format_List,
    General_Chapters_Format_WithHint_List,
    General_Chapters_Codec_List,
    General_Chapters_Language_List,
    General_Image_Format_List,
    General_Image_Format_WithHint_List,
    General_Image_Codec_List,
    General_Image_Language_List,
    General_Menu_Format_List,
    General_Menu_Format_WithHint_List,
    General_Menu_Codec_List,
    General_Menu_Language_List,
    General_CompleteName,
    General_FolderName,
    General_FileName,
    General_FileExtension,
    General_Format,
    General_Format_String,
    General_Format_Info,
    General_Format_Url,
    General_Format_Extensions,
    General_Format_Commercial,
    General_Format_Commercial_IfAny,
    General_Format_Version,
    General_Format_Profile,
    General_Format_Settings,
    General_InternetMediaType,
    General_CodecID,
    General_CodecID_Info,
    General_CodecID_Hint,
    General_CodecID_Url,
    General_CodecID_Description,
    General_Interleaved,
    General_Codec,
    General_Codec_String,
    General_Codec_Info,
    General_Codec_Url,
    General_Codec_Extensions,
    General_Codec_Settings,
    General_Codec_Settings_Automatic,
    General_FileSize,
    General_FileSize_String,
    General_FileSize_String1,
    General_FileSize_String2,
    General_FileSize_String3,
    General_FileSize_String4,
    General_Duration,
    General_Duration_String,
    General_Duration_String1,
    General_Duration_String2,
    General_Duration_String3,
    General_Duration_Start,
    General_Duration_End,
    General_OverallBitRate_Mode,
    General_OverallBitRate_Mode_String,
    General_OverallBitRate,
    General_OverallBitRate_String,
    General_OverallBitRate_Minimum,
    General_OverallBitRate_Minimum_String,
    General_OverallBitRate_Nominal,
    General_OverallBitRate_Nominal_String,
    General_OverallBitRate_Maximum,
    General_OverallBitRate_Maximum_String,
    General_Delay,
    General_Delay_String,
    General_Delay_String1,
    General_Delay_String2,
    General_Delay_String3,
    General_StreamSize,
    General_StreamSize_String,
    General_StreamSize_String1,
    General_StreamSize_String2,
    General_StreamSize_String3,
    General_StreamSize_String4,
    General_StreamSize_String5,
    General_StreamSize_Proportion,
    General_HeaderSize,
    General_DataSize,
    General_FooterSize,
    General_IsStreamable,
    General_Album_ReplayGain_Gain,
    General_Album_ReplayGain_Gain_String,
    General_Album_ReplayGain_Peak,
    General_Encryption,
    General_Title,
    General_Title_More,
    General_Title_Url,
    General_Domain,
    General_Collection,
    General_Season,
    General_Season_Position,
    General_Season_Position_Total,
    General_Movie,
    General_Movie_More,
    General_Movie_Country,
    General_Movie_Url,
    General_Album,
    General_Album_More,
    General_Album_Sort,
    General_Comic,
    General_Comic_More,
    General_Comic_Position_Total,
    General_Part,
    General_Part_Position,
    General_Part_Position_Total,
    General_Track,
    General_Track_More,
    General_Track_Url,
    General_Track_Sort,
    General_Track_Position,
    General_Track_Position_Total,
    General_Chapter,
    General_SubTrack,
    General_Original_Album,
    General_Original_Movie,
    General_Original_Part,
    General_Original_Track,
    General_Performer,
    General_Performer_Sort,
    General_Performer_Url,
    General_Original_Performer,
    General_Accompaniment,
    General_Composer,
    General_Composer_Nationality,
    General_Arranger,
    General_Lyricist,
    General_Original_Lyricist,
    General_Conductor,
    General_Director,
    General_AssistantDirector,
    General_DirectorOfPhotography,
    General_SoundEngineer,
    General_ArtDirector,
    General_ProductionDesigner,
    General_Choregrapher,
    General_CostumeDesigner,
    General_Actor,
    General_Actor_Character,
    General_WrittenBy,
    General_ScreenplayBy,
    General_EditedBy,
    General_CommissionedBy,
    General_Producer,
    General_CoProducer,
    General_ExecutiveProducer,
    General_MusicBy,
    General_DistributedBy,
    General_OriginalSourceForm_DistributedBy,
    General_MasteredBy,
    General_EncodedBy,
    General_RemixedBy,
    General_ProductionStudio,
    General_ThanksTo,
    General_Publisher,
    General_Publisher_URL,
    General_Label,
    General_Genre,
    General_Mood,
    General_ContentType,
    General_Subject,
    General_Description,
    General_Keywords,
    General_Summary,
    General_Synopsis,
    General_Period,
    General_LawRating,
    General_LawRating_Reason,
    General_ICRA,
    General_Released_Date,
    General_Original_Released_Date,
    General_Recorded_Date,
    General_Encoded_Date,
    General_Tagged_Date,
    General_Written_Date,
    General_Mastered_Date,
    General_File_Created_Date,
    General_File_Created_Date_Local,
    General_File_Modified_Date,
    General_File_Modified_Date_Local,
    General_Recorded_Location,
    General_Written_Location,
    General_Archival_Location,
    General_Encoded_Application,
    General_Encoded_Application_Url,
    General_Encoded_Library,
    General_Encoded_Library_String,
    General_Encoded_Library_Name,
    General_Encoded_Library_Version,
    General_Encoded_Library_Date,
    General_Encoded_Library_Settings,
    General_Cropped,
    General_Dimensions,
    General_DotsPerInch,
    General_Lightness,
    General_OriginalSourceMedium,
    General_OriginalSourceForm,
    General_OriginalSourceForm_NumColors,
    General_OriginalSourceForm_Name,
    General_OriginalSourceForm_Cropped,
    General_OriginalSourceForm_Sharpness,
    General_Tagged_Application,
    General_BPM,
    General_ISRC,
    General_ISBN,
    General_BarCode,
    General_LCCN,
    General_CatalogNumber,
    General_LabelCode,
    General_Owner,
    General_Copyright,
    General_Copyright_Url,
    General_Producer_Copyright,
    General_TermsOfUse,
    General_ServiceName,
    General_ServiceChannel,
    General_Service_Url,
    General_ServiceProvider,
    General_ServiceProviderr_Url,
    General_ServiceType,
    General_NetworkName,
    General_OriginalNetworkName,
    General_Country,
    General_TimeZone,
    General_Cover,
    General_Cover_Description,
    General_Cover_Type,
    General_Cover_Mime,
    General_Cover_Data,
    General_Lyrics,
    General_Comment,
    General_Rating,
    General_Added_Date,
    General_Played_First_Date,
    General_Played_Last_Date,
    General_Played_Count,
    General_EPG_Positions_Begin,
    General_EPG_Positions_End,
};

//---------------------------------------------------------------------------
enum video
{
    Video_Count,
    Video_StreamCount,
    Video_StreamKind,
    Video_StreamKind_String,
    Video_StreamKindID,
    Video_StreamKindPos,
    Video_Inform,
    Video_ID,
    Video_ID_String,
    Video_UniqueID,
    Video_UniqueID_String,
    Video_MenuID,
    Video_MenuID_String,
    Video_Format,
    Video_Format_Info,
    Video_Format_Url,
    Video_Format_Commercial,
    Video_Format_Commercial_IfAny,
    Video_Format_Version,
    Video_Format_Profile,
    Video_MultiView_BaseProfile,
    Video_MultiView_Count,
    Video_Format_Settings,
    Video_Format_Settings_BVOP,
    Video_Format_Settings_BVOP_String,
    Video_Format_Settings_QPel,
    Video_Format_Settings_QPel_String,
    Video_Format_Settings_GMC,
    Video_Format_Settings_GMC_String,
    Video_Format_Settings_Matrix,
    Video_Format_Settings_Matrix_String,
    Video_Format_Settings_Matrix_Data,
    Video_Format_Settings_CABAC,
    Video_Format_Settings_CABAC_String,
    Video_Format_Settings_RefFrames,
    Video_Format_Settings_RefFrames_String,
    Video_Format_Settings_Pulldown,
    Video_Format_Settings_FrameMode,
    Video_Format_Settings_GOP,
    Video_Format_Settings_FrameStructures,
    Video_Format_Settings_Wrapping,
    Video_InternetMediaType,
    Video_MuxingMode,
    Video_CodecID,
    Video_CodecID_Info,
    Video_CodecID_Hint,
    Video_CodecID_Url,
    Video_CodecID_Description,
    Video_Codec,
    Video_Codec_String,
    Video_Codec_Family,
    Video_Codec_Info,
    Video_Codec_Url,
    Video_Codec_CC,
    Video_Codec_Profile,
    Video_Codec_Description,
    Video_Codec_Settings,
    Video_Codec_Settings_PacketBitStream,
    Video_Codec_Settings_BVOP,
    Video_Codec_Settings_QPel,
    Video_Codec_Settings_GMC,
    Video_Codec_Settings_GMC_String,
    Video_Codec_Settings_Matrix,
    Video_Codec_Settings_Matrix_Data,
    Video_Codec_Settings_CABAC,
    Video_Codec_Settings_RefFrames,
    Video_Duration,
    Video_Duration_String,
    Video_Duration_String1,
    Video_Duration_String2,
    Video_Duration_String3,
    Video_Duration_String4,
    Video_Duration_LastFrame,
    Video_Duration_LastFrame_String,
    Video_Duration_LastFrame_String1,
    Video_Duration_LastFrame_String2,
    Video_Duration_LastFrame_String3,
    Video_BitRate_Mode,
    Video_BitRate_Mode_String,
    Video_BitRate,
    Video_BitRate_String,
    Video_BitRate_Minimum,
    Video_BitRate_Minimum_String,
    Video_BitRate_Nominal,
    Video_BitRate_Nominal_String,
    Video_BitRate_Maximum,
    Video_BitRate_Maximum_String,
    Video_Width,
    Video_Width_String,
    Video_Width_Original,
    Video_Width_Original_String,
    Video_Height,
    Video_Height_String,
    Video_Height_Original,
    Video_Height_Original_String,
    Video_PixelAspectRatio,
    Video_PixelAspectRatio_String,
    Video_PixelAspectRatio_Original,
    Video_PixelAspectRatio_Original_String,
    Video_DisplayAspectRatio,
    Video_DisplayAspectRatio_String,
    Video_DisplayAspectRatio_Original,
    Video_DisplayAspectRatio_Original_String,
    Video_ActiveFormatDescription,
    Video_ActiveFormatDescription_String,
    Video_Rotation,
    Video_Rotation_String,
    Video_FrameRate_Mode,
    Video_FrameRate_Mode_String,
    Video_FrameRate_Mode_Original,
    Video_FrameRate_Mode_Original_String,
    Video_FrameRate,
    Video_FrameRate_String,
    Video_FrameRate_Original,
    Video_FrameRate_Original_String,
    Video_FrameRate_Minimum,
    Video_FrameRate_Minimum_String,
    Video_FrameRate_Nominal,
    Video_FrameRate_Nominal_String,
    Video_FrameRate_Maximum,
    Video_FrameRate_Maximum_String,
    Video_FrameCount,
    Video_Standard,
    Video_Resolution,
    Video_Resolution_String,
    Video_Colorimetry,
    Video_ColorSpace,
    Video_ChromaSubsampling,
    Video_BitDepth,
    Video_BitDepth_String,
    Video_ScanType,
    Video_ScanType_String,
    Video_ScanOrder,
    Video_ScanOrder_String,
    Video_Interlacement,
    Video_Interlacement_String,
    Video_Compression_Mode,
    Video_Compression_Mode_String,
    Video_Compression_Ratio,
    Video_Bits__Pixel_Frame_,
    Video_Delay,
    Video_Delay_String,
    Video_Delay_String1,
    Video_Delay_String2,
    Video_Delay_String3,
    Video_Delay_String4,
    Video_Delay_Settings,
    Video_Delay_Source,
    Video_Delay_Original,
    Video_Delay_Original_String,
    Video_Delay_Original_String1,
    Video_Delay_Original_String2,
    Video_Delay_Original_String3,
    Video_Delay_Original_String4,
    Video_Delay_Original_Settings,
    Video_Delay_Original_Source,
    Video_StreamSize,
    Video_StreamSize_String,
    Video_StreamSize_String1,
    Video_StreamSize_String2,
    Video_StreamSize_String3,
    Video_StreamSize_String4,
    Video_StreamSize_String5,
    Video_StreamSize_Proportion,
    Video_Alignment,
    Video_Alignment_String,
    Video_Title,
    Video_Encoded_Application,
    Video_Encoded_Application_Url,
    Video_Encoded_Library,
    Video_Encoded_Library_String,
    Video_Encoded_Library_Name,
    Video_Encoded_Library_Version,
    Video_Encoded_Library_Date,
    Video_Encoded_Library_Settings,
    Video_Language,
    Video_Language_String,
    Video_Language_String1,
    Video_Language_String2,
    Video_Language_String3,
    Video_Language_String4,
    Video_Language_More,
    Video_Encoded_Date,
    Video_Tagged_Date,
    Video_Encryption,
    Video_BufferSize,
};

//---------------------------------------------------------------------------
enum audio
{
    Audio_Count,
    Audio_StreamCount,
    Audio_StreamKind,
    Audio_StreamKind_String,
    Audio_StreamKindID,
    Audio_StreamKindPos,
    Audio_Inform,
    Audio_ID,
    Audio_ID_String,
    Audio_UniqueID,
    Audio_UniqueID_String,
    Audio_MenuID,
    Audio_MenuID_String,
    Audio_Format,
    Audio_Format_Info,
    Audio_Format_Url,
    Audio_Format_Commercial,
    Audio_Format_Commercial_IfAny,
    Audio_Format_Version,
    Audio_Format_Profile,
    Audio_Format_Settings,
    Audio_Format_Settings_SBR,
    Audio_Format_Settings_SBR_String,
    Audio_Format_Settings_PS,
    Audio_Format_Settings_PS_String,
    Audio_Format_Settings_Mode,
    Audio_Format_Settings_ModeExtension,
    Audio_Format_Settings_Emphasis,
    Audio_Format_Settings_Floor,
    Audio_Format_Settings_Firm,
    Audio_Format_Settings_Endianness,
    Audio_Format_Settings_Sign,
    Audio_Format_Settings_Law,
    Audio_Format_Settings_ITU,
    Audio_Format_Settings_Wrapping,
    Audio_InternetMediaType,
    Audio_MuxingMode,
    Audio_MuxingMode_MoreInfo,
    Audio_CodecID,
    Audio_CodecID_Info,
    Audio_CodecID_Hint,
    Audio_CodecID_Url,
    Audio_CodecID_Description,
    Audio_Codec,
    Audio_Codec_String,
    Audio_Codec_Family,
    Audio_Codec_Info,
    Audio_Codec_Url,
    Audio_Codec_CC,
    Audio_Codec_Description,
    Audio_Codec_Profile,
    Audio_Codec_Settings,
    Audio_Codec_Settings_Automatic,
    Audio_Codec_Settings_Floor,
    Audio_Codec_Settings_Firm,
    Audio_Codec_Settings_Endianness,
    Audio_Codec_Settings_Sign,
    Audio_Codec_Settings_Law,
    Audio_Codec_Settings_ITU,
    Audio_Duration,
    Audio_Duration_String,
    Audio_Duration_String1,
    Audio_Duration_String2,
    Audio_Duration_String3,
    Audio_BitRate_Mode,
    Audio_BitRate_Mode_String,
    Audio_BitRate,
    Audio_BitRate_String,
    Audio_BitRate_Minimum,
    Audio_BitRate_Minimum_String,
    Audio_BitRate_Nominal,
    Audio_BitRate_Nominal_String,
    Audio_BitRate_Maximum,
    Audio_BitRate_Maximum_String,
    Audio_Channel_s_,
    Audio_Channel_s__String,
    Audio_ChannelPositions,
    Audio_ChannelPositions_String2,
    Audio_SamplingRate,
    Audio_SamplingRate_String,
    Audio_SamplingCount,
    Audio_FrameCount,
    Audio_Resolution,
    Audio_Resolution_String,
    Audio_BitDepth,
    Audio_BitDepth_String,
    Audio_Compression_Mode,
    Audio_Compression_Mode_String,
    Audio_Compression_Ratio,
    Audio_Delay,
    Audio_Delay_String,
    Audio_Delay_String1,
    Audio_Delay_String2,
    Audio_Delay_String3,
    Audio_Delay_String4,
    Audio_Delay_Settings,
    Audio_Delay_Source,
    Audio_Delay_Original,
    Audio_Delay_Original_String,
    Audio_Delay_Original_String1,
    Audio_Delay_Original_String2,
    Audio_Delay_Original_String3,
    Audio_Delay_Original_String4,
    Audio_Delay_Original_Settings,
    Audio_Delay_Original_Source,
    Audio_Video_Delay,
    Audio_Video_Delay_String,
    Audio_Video_Delay_String1,
    Audio_Video_Delay_String2,
    Audio_Video_Delay_String3,
    Audio_Video_Delay_String4,
    Audio_Video0_Delay,
    Audio_Video0_Delay_String,
    Audio_Video0_Delay_String1,
    Audio_Video0_Delay_String2,
    Audio_Video0_Delay_String3,
    Audio_Video0_Delay_String4,
    Audio_ReplayGain_Gain,
    Audio_ReplayGain_Gain_String,
    Audio_ReplayGain_Peak,
    Audio_StreamSize,
    Audio_StreamSize_String,
    Audio_StreamSize_String1,
    Audio_StreamSize_String2,
    Audio_StreamSize_String3,
    Audio_StreamSize_String4,
    Audio_StreamSize_String5,
    Audio_StreamSize_Proportion,
    Audio_Alignment,
    Audio_Alignment_String,
    Audio_Interleave_VideoFrames,
    Audio_Interleave_Duration,
    Audio_Interleave_Duration_String,
    Audio_Interleave_Preload,
    Audio_Interleave_Preload_String,
    Audio_Title,
    Audio_Encoded_Library,
    Audio_Encoded_Library_String,
    Audio_Encoded_Library_Name,
    Audio_Encoded_Library_Version,
    Audio_Encoded_Library_Date,
    Audio_Encoded_Library_Settings,
    Audio_Language,
    Audio_Language_String,
    Audio_Language_String1,
    Audio_Language_String2,
    Audio_Language_String3,
    Audio_Language_String4,
    Audio_Language_More,
    Audio_Encoded_Date,
    Audio_Tagged_Date,
    Audio_Encryption,
};

//---------------------------------------------------------------------------
enum text
{
    Text_Count,
    Text_StreamCount,
    Text_StreamKind,
    Text_StreamKind_String,
    Text_StreamKindID,
    Text_StreamKindPos,
    Text_Inform,
    Text_ID,
    Text_ID_String,
    Text_UniqueID,
    Text_UniqueID_String,
    Text_MenuID,
    Text_MenuID_String,
    Text_Format,
    Text_Format_Info,
    Text_Format_Url,
    Text_Format_Commercial,
    Text_Format_Commercial_IfAny,
    Text_Format_Version,
    Text_Format_Profile,
    Text_Format_Settings,
    Text_Format_Settings_Wrapping,
    Text_InternetMediaType,
    Text_MuxingMode,
    Text_MuxingMode_MoreInfo,
    Text_CodecID,
    Text_CodecID_Info,
    Text_CodecID_Hint,
    Text_CodecID_Url,
    Text_CodecID_Description,
    Text_Codec,
    Text_Codec_String,
    Text_Codec_Info,
    Text_Codec_Url,
    Text_Codec_CC,
    Text_Duration,
    Text_Duration_String,
    Text_Duration_String1,
    Text_Duration_String2,
    Text_Duration_String3,
    Text_Duration_String4,
    Text_BitRate_Mode,
    Text_BitRate_Mode_String,
    Text_BitRate,
    Text_BitRate_String,
    Text_BitRate_Minimum,
    Text_BitRate_Minimum_String,
    Text_BitRate_Nominal,
    Text_BitRate_Nominal_String,
    Text_BitRate_Maximum,
    Text_BitRate_Maximum_String,
    Text_Width,
    Text_Width_String,
    Text_Height,
    Text_Height_String,
    Text_FrameRate_Mode,
    Text_FrameRate_Mode_String,
    Text_FrameRate,
    Text_FrameRate_String,
    Text_FrameRate_Minimum,
    Text_FrameRate_Minimum_String,
    Text_FrameRate_Nominal,
    Text_FrameRate_Nominal_String,
    Text_FrameRate_Maximum,
    Text_FrameRate_Maximum_String,
    Text_FrameRate_Original,
    Text_FrameRate_Original_String,
    Text_FrameCount,
    Text_ColorSpace,
    Text_ChromaSubsampling,
    Text_Resolution,
    Text_Resolution_String,
    Text_BitDepth,
    Text_BitDepth_String,
    Text_Compression_Mode,
    Text_Compression_Mode_String,
    Text_Compression_Ratio,
    Text_Delay,
    Text_Delay_String,
    Text_Delay_String1,
    Text_Delay_String2,
    Text_Delay_String3,
    Text_Delay_String4,
    Text_Delay_Settings,
    Text_Delay_Source,
    Text_Delay_Original,
    Text_Delay_Original_String,
    Text_Delay_Original_String1,
    Text_Delay_Original_String2,
    Text_Delay_Original_String3,
    Text_Delay_Original_String4,
    Text_Delay_Original_Settings,
    Text_Delay_Original_Source,
    Text_Video_Delay,
    Text_Video_Delay_String,
    Text_Video_Delay_String1,
    Text_Video_Delay_String2,
    Text_Video_Delay_String3,
    Text_Video_Delay_String4,
    Text_Video0_Delay,
    Text_Video0_Delay_String,
    Text_Video0_Delay_String1,
    Text_Video0_Delay_String2,
    Text_Video0_Delay_String3,
    Text_Video0_Delay_String4,
    Text_StreamSize,
    Text_StreamSize_String,
    Text_StreamSize_String1,
    Text_StreamSize_String2,
    Text_StreamSize_String3,
    Text_StreamSize_String4,
    Text_StreamSize_String5,
    Text_StreamSize_Proportion,
    Text_Title,
    Text_Encoded_Library,
    Text_Encoded_Library_String,
    Text_Encoded_Library_Name,
    Text_Encoded_Library_Version,
    Text_Encoded_Library_Date,
    Text_Encoded_Library_Settings,
    Text_Language,
    Text_Language_String,
    Text_Language_String1,
    Text_Language_String2,
    Text_Language_String3,
    Text_Language_String4,
    Text_Language_More,
    Text_Summary,
    Text_Encoded_Date,
    Text_Tagged_Date,
    Text_Encryption,
};

//---------------------------------------------------------------------------
enum chapters
{
    Chapters_Count,
    Chapters_StreamCount,
    Chapters_StreamKind,
    Chapters_StreamKind_String,
    Chapters_StreamKindID,
    Chapters_StreamKindPos,
    Chapters_Inform,
    Chapters_ID,
    Chapters_ID_String,
    Chapters_UniqueID,
    Chapters_MenuID,
    Chapters_MenuID_String,
    Chapters_Format,
    Chapters_Format_Info,
    Chapters_Format_Url,
    Chapters_Codec,
    Chapters_Codec_String,
    Chapters_Codec_Info,
    Chapters_Codec_Url,
    Chapters_Total,
    Chapters_Title,
    Chapters_Language,
    Chapters_Language_String,
};

//---------------------------------------------------------------------------
enum image
{
    Image_Count,
    Image_StreamCount,
    Image_StreamKind,
    Image_StreamKind_String,
    Image_StreamKindID,
    Image_StreamKindPos,
    Image_Inform,
    Image_ID,
    Image_ID_String,
    Image_UniqueID,
    Image_UniqueID_String,
    Image_MenuID,
    Image_MenuID_String,
    Image_Title,
    Image_Format,
    Image_Format_Info,
    Image_Format_Url,
    Image_Format_Commercial,
    Image_Format_Commercial_IfAny,
    Image_Format_Version,
    Image_Format_Profile,
    Image_Format_Settings,
    Image_Format_Settings_Wrapping,
    Image_InternetMediaType,
    Image_CodecID,
    Image_CodecID_Info,
    Image_CodecID_Hint,
    Image_CodecID_Url,
    Image_CodecID_Description,
    Image_Codec,
    Image_Codec_String,
    Image_Codec_Family,
    Image_Codec_Info,
    Image_Codec_Url,
    Image_Width,
    Image_Width_String,
    Image_Height,
    Image_Height_String,
    Image_ColorSpace,
    Image_ChromaSubsampling,
    Image_Resolution,
    Image_Resolution_String,
    Image_BitDepth,
    Image_BitDepth_String,
    Image_Compression_Mode,
    Image_Compression_Mode_String,
    Image_Compression_Ratio,
    Image_StreamSize,
    Image_StreamSize_String,
    Image_StreamSize_String1,
    Image_StreamSize_String2,
    Image_StreamSize_String3,
    Image_StreamSize_String4,
    Image_StreamSize_String5,
    Image_StreamSize_Proportion,
    Image_Encoded_Library,
    Image_Encoded_Library_String,
    Image_Encoded_Library_Name,
    Image_Encoded_Library_Version,
    Image_Encoded_Library_Date,
    Image_Encoded_Library_Settings,
    Image_Language,
    Image_Language_String,
    Image_Language_String1,
    Image_Language_String2,
    Image_Language_String3,
    Image_Language_String4,
    Image_Summary,
    Image_Encoded_Date,
    Image_Tagged_Date,
    Image_Encryption,
};

//---------------------------------------------------------------------------
enum menu
{
    Menu_Count,
    Menu_StreamCount,
    Menu_StreamKind,
    Menu_StreamKind_String,
    Menu_StreamKindID,
    Menu_StreamKindPos,
    Menu_Inform,
    Menu_ID,
    Menu_ID_String,
    Menu_UniqueID,
    Menu_UniqueID_String,
    Menu_MenuID,
    Menu_MenuID_String,
    Menu_Format,
    Menu_Format_Info,
    Menu_Format_Url,
    Menu_Format_Commercial,
    Menu_Format_Commercial_IfAny,
    Menu_Format_Version,
    Menu_Format_Profile,
    Menu_Format_Settings,
    Menu_CodecID,
    Menu_CodecID_Info,
    Menu_CodecID_Hint,
    Menu_CodecID_Url,
    Menu_CodecID_Description,
    Menu_Codec,
    Menu_Codec_String,
    Menu_Codec_Info,
    Menu_Codec_Url,
    Menu_Duration,
    Menu_Duration_String,
    Menu_Duration_String1,
    Menu_Duration_String2,
    Menu_Duration_String3,
    Menu_Duration_Start,
    Menu_Duration_End,
    Menu_Delay,
    Menu_Delay_String,
    Menu_Delay_String1,
    Menu_Delay_String2,
    Menu_Delay_String3,
    Menu_Delay_String4,
    Menu_Delay_Settings,
    Menu_Delay_Source,
    Menu_List_StreamKind,
    Menu_List_StreamPos,
    Menu_List,
    Menu_List_String,
    Menu_Title,
    Menu_Language,
    Menu_Language_String,
    Menu_Language_String1,
    Menu_Language_String2,
    Menu_Language_String3,
    Menu_Language_String4,
    Menu_Language_More,
    Menu_ServiceName,
    Menu_ServiceChannel,
    Menu_Service_Url,
    Menu_ServiceProvider,
    Menu_ServiceProviderr_Url,
    Menu_ServiceType,
    Menu_NetworkName,
    Menu_Original_NetworkName,
    Menu_Countries,
    Menu_TimeZones,
    Menu_Chapters_Pos_Begin,
    Menu_Chapters_Pos_End,
};

} //NameSpace
#endif
