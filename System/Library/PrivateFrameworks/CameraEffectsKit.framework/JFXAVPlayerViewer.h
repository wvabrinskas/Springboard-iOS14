/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class AVPlayer, NSString;


@protocol JFXAVPlayerViewer <NSObject>
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) CGSize displaySize; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@required
-(void)setVideoGravity:(id)arg1;
-(BOOL)isReadyForDisplay;
-(void)setPlayer:(id)arg1;
-(AVPlayer *)player;
-(NSString *)videoGravity;
-(CGRect)videoBounds;
-(CGSize)displaySize;
-(void)configureDisplayAttributesForColorSpace:(id)arg1;

@end
