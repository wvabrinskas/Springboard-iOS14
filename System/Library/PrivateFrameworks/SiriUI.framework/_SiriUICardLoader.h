/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SFResourceLoader.h>

@protocol _SiriUICardLoaderDelegate;
@class NSString;

@interface _SiriUICardLoader : NSObject <SFResourceLoader> {

	BOOL _active;
	id<_SiriUICardLoaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SiriUICardLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL active;                                                //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(id<_SiriUICardLoaderDelegate>)delegate;
-(void)setDelegate:(id<_SiriUICardLoaderDelegate>)arg1 ;
-(BOOL)loadCard:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_registerWithSearchFoundation;
-(void)_unregisterWithSearchFoundation;
@end
