/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFDrawerDragTracking.h>

@class WFDrawerGestureCoordinator, NSString;

@interface WFDrawerDragTracker : NSObject <WFDrawerDragTracking> {

	BOOL _tracking;
	double _minTranslationY;
	double _maxTranslationY;
	WFDrawerGestureCoordinator* _gestureCoordinator;
	double _initialHeight;

}

@property (nonatomic,__weak,readonly) WFDrawerGestureCoordinator * gestureCoordinator;              //@synthesize gestureCoordinator=_gestureCoordinator - In the implementation block
@property (nonatomic,readonly) double initialHeight;                                                //@synthesize initialHeight=_initialHeight - In the implementation block
@property (assign,nonatomic) BOOL tracking;                                                         //@synthesize tracking=_tracking - In the implementation block
@property (readonly) double minTranslationY;                                                        //@synthesize minTranslationY=_minTranslationY - In the implementation block
@property (readonly) double maxTranslationY;                                                        //@synthesize maxTranslationY=_maxTranslationY - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tracking;
-(void)setTracking:(BOOL)arg1 ;
-(double)initialHeight;
-(double)currentHeight;
-(void)beginDragging;
-(void)endDraggingWithAnimation:(id)arg1 ;
-(void)endDragging;
-(void)updateDragForVerticalTranslation:(double)arg1 ;
-(double)minTranslationY;
-(double)maxTranslationY;
-(id)initWithGestureCoordinator:(id)arg1 ;
-(WFDrawerGestureCoordinator *)gestureCoordinator;
@end
