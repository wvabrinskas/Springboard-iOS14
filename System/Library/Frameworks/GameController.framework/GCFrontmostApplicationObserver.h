/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GCFrontmostApplicationObserverDelegate;
@interface GCFrontmostApplicationObserver : NSObject {

	int _frontmostPid;
	id<GCFrontmostApplicationObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GCFrontmostApplicationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<GCFrontmostApplicationObserverDelegate>)delegate;
-(void)setDelegate:(id<GCFrontmostApplicationObserverDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

