/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AMSPromise;

@interface AMSBinaryPromise : NSObject {

	AMSPromise* _backingPromise;

}

@property (nonatomic,retain) AMSPromise * backingPromise;              //@synthesize backingPromise=_backingPromise - In the implementation block
+(id)_globalPromiseStorageAccessQueue;
+(id)promiseWithAny:(id)arg1 ;
+(id)promiseWithError:(id)arg1 ;
+(id)promiseWithSuccess;
+(id)promiseWithPromise:(id)arg1 ;
+(id)_globalPromiseStorage;
+(id)promiseWithFlattenedPromises:(id)arg1 ;
+(id)promiseWithAll:(id)arg1 ;
-(id)continueWithBlock:(/*^block*/id)arg1 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithPromise:(id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)catchWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(id)thenWithBlock:(/*^block*/id)arg1 ;
-(BOOL)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(BOOL)finishWithError:(id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(void)waitUntilFinishedWithTimeout:(double)arg1 ;
-(void)waitUntilFinished;
-(id)promiseAdapter;
-(void)setBackingPromise:(AMSPromise *)arg1 ;
-(AMSPromise *)backingPromise;
-(BOOL)cancel;
-(void)_removeFromGlobalPromiseStorage;
-(BOOL)resultWithError:(id*)arg1 ;
-(BOOL)finishWithSuccess;
-(BOOL)finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
@end

