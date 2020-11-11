/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CLSAssetScoringContext : NSObject {

	BOOL _shouldEmphasizeShared;
	BOOL _shouldEmphasizeAdjusted;
	BOOL _shouldEmphasizePanorama;
	BOOL _shouldEmphasizeLive;
	BOOL _shouldEmphasizeBurst;
	BOOL _shouldEmphasizeSDOF;
	BOOL _shouldEmphasizeReframe;
	short _audioClassificationsToEmphasize;
	double _viewCountThreshold;
	double _playCountThreshold;
	double _aestheticScoreThresholdToBeAwesome;

}

@property (assign,nonatomic) double viewCountThreshold;                              //@synthesize viewCountThreshold=_viewCountThreshold - In the implementation block
@property (assign,nonatomic) double playCountThreshold;                              //@synthesize playCountThreshold=_playCountThreshold - In the implementation block
@property (assign,nonatomic) BOOL shouldEmphasizeShared;                             //@synthesize shouldEmphasizeShared=_shouldEmphasizeShared - In the implementation block
@property (assign,nonatomic) BOOL shouldEmphasizeAdjusted;                           //@synthesize shouldEmphasizeAdjusted=_shouldEmphasizeAdjusted - In the implementation block
@property (assign,nonatomic) BOOL shouldEmphasizePanorama;                           //@synthesize shouldEmphasizePanorama=_shouldEmphasizePanorama - In the implementation block
@property (assign,nonatomic) BOOL shouldEmphasizeLive;                               //@synthesize shouldEmphasizeLive=_shouldEmphasizeLive - In the implementation block
@property (assign,nonatomic) BOOL shouldEmphasizeBurst;                              //@synthesize shouldEmphasizeBurst=_shouldEmphasizeBurst - In the implementation block
@property (assign,nonatomic) BOOL shouldEmphasizeSDOF;                               //@synthesize shouldEmphasizeSDOF=_shouldEmphasizeSDOF - In the implementation block
@property (assign,nonatomic) BOOL shouldEmphasizeReframe;                            //@synthesize shouldEmphasizeReframe=_shouldEmphasizeReframe - In the implementation block
@property (assign,nonatomic) short audioClassificationsToEmphasize;                  //@synthesize audioClassificationsToEmphasize=_audioClassificationsToEmphasize - In the implementation block
@property (assign,nonatomic) double aestheticScoreThresholdToBeAwesome;              //@synthesize aestheticScoreThresholdToBeAwesome=_aestheticScoreThresholdToBeAwesome - In the implementation block
-(void)setShouldEmphasizeAdjusted:(BOOL)arg1 ;
-(void)setShouldEmphasizeSDOF:(BOOL)arg1 ;
-(BOOL)shouldEmphasizeBurst;
-(void)setShouldEmphasizeBurst:(BOOL)arg1 ;
-(BOOL)shouldEmphasizeReframe;
-(double)viewCountThreshold;
-(BOOL)shouldEmphasizeSDOF;
-(void)setShouldEmphasizeLive:(BOOL)arg1 ;
-(void)setPlayCountThreshold:(double)arg1 ;
-(void)setShouldEmphasizePanorama:(BOOL)arg1 ;
-(void)setViewCountThreshold:(double)arg1 ;
-(BOOL)shouldEmphasizeAdjusted;
-(short)audioClassificationsToEmphasize;
-(BOOL)shouldEmphasizePanorama;
-(BOOL)shouldEmphasizeLive;
-(BOOL)shouldEmphasizeShared;
-(double)aestheticScoreThresholdToBeAwesome;
-(void)setShouldEmphasizeShared:(BOOL)arg1 ;
-(double)playCountThreshold;
-(void)setAudioClassificationsToEmphasize:(short)arg1 ;
-(void)setShouldEmphasizeReframe:(BOOL)arg1 ;
-(void)setAestheticScoreThresholdToBeAwesome:(double)arg1 ;
@end
