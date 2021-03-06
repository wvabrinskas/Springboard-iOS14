/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSCoverSheetViewTransitionSource <CSCoverSheetParticipating>
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) SCD_Struct_CS4 transitionContext; 
@required
-(void)cancelTransition;
-(BOOL)isTransitioning;
-(SCD_Struct_CS4)transitionContext;

@end

