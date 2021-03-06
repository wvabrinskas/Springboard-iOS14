/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaServices/MSVLyricsXMLElement.h>

@class NSString;

@interface MSVLyricsSongWriter : MSVLyricsXMLElement {

	NSString* _name;
	NSString* _artistID;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * artistID;              //@synthesize artistID=_artistID - In the implementation block
-(id)init;
-(void)setArtistID:(NSString *)arg1 ;
-(NSString *)name;
-(id)description;
-(NSString *)artistID;
-(void)setName:(NSString *)arg1 ;
@end

