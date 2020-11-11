/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OADEmbeddedMediaFile.h>

@interface OADWavAudioFile : OADEmbeddedMediaFile {

	float mDuration;
	BOOL mHasDuration;

}

@property (assign,nonatomic) float duration; 
@property (assign,nonatomic) BOOL hasDuration; 
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(float)arg1 ;
-(BOOL)isAudioOnly;
-(float)duration;
-(void)setIsAudioOnly:(BOOL)arg1 ;
@end
