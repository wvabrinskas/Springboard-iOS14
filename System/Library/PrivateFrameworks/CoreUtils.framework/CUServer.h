/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject, NSString;

@interface CUServer : NSObject {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	/*^block*/id _acceptHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSString* _serviceType;

}

@property (nonatomic,copy) id acceptHandler;                                          //@synthesize acceptHandler=_acceptHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
-(NSString *)label;
-(id)init;
-(id)acceptHandler;
-(void)activate;
-(id)invalidationHandler;
-(NSString *)serviceType;
-(id)description;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)invalidate;
-(void)setAcceptHandler:(id)arg1 ;
-(void)dealloc;
@end
