/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VEKExportPreset : NSObject {

	NSString* _avPreset;
	double _aspect;

}

@property (nonatomic,retain) NSString * avPreset;              //@synthesize avPreset=_avPreset - In the implementation block
@property (assign,nonatomic) double aspect;                    //@synthesize aspect=_aspect - In the implementation block
+(id)presetWithAVPreset:(id)arg1 ;
-(double)aspect;
-(void)setAspect:(double)arg1 ;
-(void)setAvPreset:(NSString *)arg1 ;
-(NSString *)avPreset;
@end

