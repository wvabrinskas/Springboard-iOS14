/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <libobjc.A.dylib/NCNotificationListViewScrollDelegate.h>

@protocol NCNotificationListRevealCoordinatorDelegate;
@class NSArray, UIImpactFeedbackGenerator, NSString;

@interface NCNotificationListRevealCoordinator : NSObject <NCNotificationListViewScrollDelegate> {

	BOOL _forceRevealed;
	BOOL _sectionRevealed;
	BOOL _sectionRevealedStateLocked;
	BOOL _shouldLimitTargetContentOffsetForNotificationListReveal;
	BOOL _hapticPrepared;
	int _revealState;
	id<NCNotificationListRevealCoordinatorDelegate> _delegate;
	double _revealPercentage;
	NSArray* _subLists;
	UIImpactFeedbackGenerator* _feedbackGenerator;

}

@property (assign,nonatomic) int revealState;                                                                  //@synthesize revealState=_revealState - In the implementation block
@property (assign,nonatomic) double revealPercentage;                                                          //@synthesize revealPercentage=_revealPercentage - In the implementation block
@property (nonatomic,retain) NSArray * subLists;                                                               //@synthesize subLists=_subLists - In the implementation block
@property (assign,getter=isSectionRevealed,nonatomic) BOOL sectionRevealed;                                    //@synthesize sectionRevealed=_sectionRevealed - In the implementation block
@property (assign,getter=isSectionRevealedStateLocked,nonatomic) BOOL sectionRevealedStateLocked;              //@synthesize sectionRevealedStateLocked=_sectionRevealedStateLocked - In the implementation block
@property (assign,nonatomic) BOOL shouldLimitTargetContentOffsetForNotificationListReveal;                     //@synthesize shouldLimitTargetContentOffsetForNotificationListReveal=_shouldLimitTargetContentOffsetForNotificationListReveal - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * feedbackGenerator;                                    //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,getter=isHapticPrepared,nonatomic) BOOL hapticPrepared;                                      //@synthesize hapticPrepared=_hapticPrepared - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationListRevealCoordinatorDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isForceRevealed,nonatomic) BOOL forceRevealed;                                        //@synthesize forceRevealed=_forceRevealed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_revealSectionHasContent;
-(void)notificationListViewWillEndDragging:(id)arg1 withTargetContentOffset:(inout CGPoint*)arg2 ;
-(BOOL)isForceRevealed;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(BOOL)isSectionRevealed;
-(void)_performHaptic;
-(void)setFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(NSArray *)subLists;
-(id<NCNotificationListRevealCoordinatorDelegate>)delegate;
-(void)notificationListWillBeginDragging:(id)arg1 ;
-(BOOL)isHapticPrepared;
-(void)setSectionRevealedStateLocked:(BOOL)arg1 ;
-(int)revealState;
-(void)setRevealPercentage:(double)arg1 ;
-(void)setSectionRevealed:(BOOL)arg1 ;
-(double)_updateRevealPercentageForNotificationListView:(id)arg1 ;
-(id)_revealListView;
-(void)setDelegate:(id<NCNotificationListRevealCoordinatorDelegate>)arg1 ;
-(BOOL)_isRevealed;
-(void)setHapticPrepared:(BOOL)arg1 ;
-(BOOL)_isRevealSectionVisibleForListView:(id)arg1 ;
-(void)setSubLists:(NSArray *)arg1 ;
-(void)_prepareHaptic;
-(void)_performRevealForSubviewsIfNecessary;
-(double)_settlingYPositionForReveal;
-(void)setShouldLimitTargetContentOffsetForNotificationListReveal:(BOOL)arg1 ;
-(void)setForceRevealed:(BOOL)arg1 ;
-(void)notificationListDidScroll:(id)arg1 ;
-(BOOL)shouldLimitTargetContentOffsetForNotificationListReveal;
-(double)revealPercentage;
-(BOOL)isSectionRevealedStateLocked;
-(void)setRevealState:(int)arg1 ;
-(BOOL)_shouldAllowNotificationListReveal;
-(id)_stringForRevealState:(int)arg1 ;
-(id)_topView;
-(void)_releaseHaptic;
@end

