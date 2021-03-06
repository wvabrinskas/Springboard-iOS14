/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXContentScaleManager.h>

@protocol SXContentScaleManager <NSObject>
@property (nonatomic,readonly) long long contentScale; 
@property (nonatomic,readonly) double contentScaleFactor; 
@property (assign,nonatomic,__weak) id<SXContentScaleManagerDelegate> delegate; 
@required
-(id<SXContentScaleManagerDelegate>)delegate;
-(long long)contentScale;
-(double)contentScaleFactor;
-(void)setDelegate:(id)arg1;
-(void)reset;
-(void)increase;
-(void)decrease;

@end


@protocol SXContentScaleManagerDelegate;
@class NSString;

@interface SXContentScaleManager : NSObject <SXContentScaleManager> {

	long long _contentScale;
	double _contentScaleFactor;
	id<SXContentScaleManagerDelegate> _delegate;

}

@property (assign,nonatomic) long long contentScale;                                         //@synthesize contentScale=_contentScale - In the implementation block
@property (nonatomic,readonly) double contentScaleFactor;                                    //@synthesize contentScaleFactor=_contentScaleFactor - In the implementation block
@property (assign,nonatomic,__weak) id<SXContentScaleManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXContentScaleManagerDelegate>)delegate;
-(long long)contentScale;
-(double)contentScaleFactor;
-(void)setDelegate:(id<SXContentScaleManagerDelegate>)arg1 ;
-(void)reset;
-(void)setContentScale:(long long)arg1 ;
-(void)increase;
-(void)decrease;
-(id)initWithContentScale:(long long)arg1 ;
@end

