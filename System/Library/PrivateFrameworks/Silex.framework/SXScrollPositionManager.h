/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXScrollPositionManager.h>

@protocol SXScrollPositionManager <SXScrollPositionRestoring>
@property (assign,nonatomic,__weak) id<SXScrollPositionRestoring> scrollPositionRestoring; 
@required
-(void)setScrollPositionRestoring:(id)arg1;
-(id<SXScrollPositionRestoring>)scrollPositionRestoring;

@end


@protocol SXScrollPositionRestoring;
@class NSString;

@interface SXScrollPositionManager : NSObject <SXScrollPositionManager> {

	id<SXScrollPositionRestoring> _scrollPositionRestoring;

}

@property (assign,nonatomic,__weak) id<SXScrollPositionRestoring> scrollPositionRestoring;              //@synthesize scrollPositionRestoring=_scrollPositionRestoring - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScrollPositionRestoring:(id<SXScrollPositionRestoring>)arg1 ;
-(void)updateScrollPosition:(id)arg1 animated:(BOOL)arg2 ;
-(id<SXScrollPositionRestoring>)scrollPositionRestoring;
@end
