/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIPlistMediaDatabaseEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VUIPlistMediaDatabaseShow, NSNumber, NSArray;

@interface VUIPlistMediaDatabaseSeason : VUIPlistMediaDatabaseEntity <NSCopying> {

	VUIPlistMediaDatabaseShow* _show;
	NSNumber* _seasonNumber;
	NSArray* _episodes;

}

@property (assign,nonatomic,__weak) VUIPlistMediaDatabaseShow * show;              //@synthesize show=_show - In the implementation block
@property (nonatomic,copy) NSNumber * seasonNumber;                                //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,copy) NSArray * episodes;                                     //@synthesize episodes=_episodes - In the implementation block
-(VUIPlistMediaDatabaseShow *)show;
-(NSNumber *)seasonNumber;
-(id)isLocal;
-(void)setSeasonNumber:(NSNumber *)arg1 ;
-(id)dictionaryRepresentation;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setShow:(VUIPlistMediaDatabaseShow *)arg1 ;
-(NSArray *)episodes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 show:(id)arg2 ;
-(id)episodeForIdentifier:(id)arg1 ;
-(void)setEpisodes:(NSArray *)arg1 ;
-(id)initWithIdentifier:(id)arg1 show:(id)arg2 ;
@end

