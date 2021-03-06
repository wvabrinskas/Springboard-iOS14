/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MTMaterialLayer, NSDate;

@interface MTPrunePromise : NSObject {

	MTMaterialLayer* _materialLayer;
	NSDate* _timeStamp;
	BOOL _promiseFulfilled;

}

@property (assign,getter=isPromiseFulfilled,nonatomic) BOOL promiseFulfilled;              //@synthesize promiseFulfilled=_promiseFulfilled - In the implementation block
-(id)initWithMaterialLayer:(id)arg1 ;
-(void)fulfillPromise;
-(double)timeIntervalSincePromise;
-(BOOL)isPromiseFulfilled;
-(void)setPromiseFulfilled:(BOOL)arg1 ;
-(void)dealloc;
@end

