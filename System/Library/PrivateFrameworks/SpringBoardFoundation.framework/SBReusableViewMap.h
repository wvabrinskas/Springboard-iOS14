/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBReusableViewMapDelegate;
@class NSMapTable, NSString;

@interface SBReusableViewMap : NSObject <BSDescriptionProviding> {

	NSMapTable* _recycledViewsByClass;
	BOOL _invalidated;
	id<SBReusableViewMapDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBReusableViewMapDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long recycledViewCount; 
@property (nonatomic,readonly) unsigned long long viewRecyclingCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)purgeAllViews;
-(id)succinctDescription;
-(void)recycleView:(id)arg1 ;
-(id)dequeueReusableViewOfClass:(Class)arg1 ;
-(id)viewOfClass:(Class)arg1 ;
-(id)init;
-(id<SBReusableViewMapDelegate>)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)purgeViewsForClass:(Class)arg1 ;
-(unsigned long long)recycledViewCount;
-(void)setDelegate:(id<SBReusableViewMapDelegate>)arg1 ;
-(void)addRecycledViewsOfClass:(Class)arg1 upToCount:(unsigned long long)arg2 ;
-(NSString *)description;
-(void)enumerateRecycledViewsUsingBlock:(/*^block*/id)arg1 ;
-(id)newViewOfClass:(Class)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)viewRecyclingCount;
-(void)invalidate;
-(void)dealloc;
-(BOOL)isViewRecycled:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

