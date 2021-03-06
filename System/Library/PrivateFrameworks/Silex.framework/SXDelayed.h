/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SXDelayed : NSObject {

	BOOL _cancelled;
	/*^block*/id _block;
	SXDelayed* _strongReference;

}

@property (nonatomic,copy) id block;                                   //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                           //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) SXDelayed * strongReference;              //@synthesize strongReference=_strongReference - In the implementation block
+(id)execute:(/*^block*/id)arg1 delay:(double)arg2 ;
-(BOOL)cancelled;
-(void)invoke;
-(void)setBlock:(id)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(id)block;
-(void)cancel;
-(id)initWithBlock:(/*^block*/id)arg1 delay:(double)arg2 ;
-(SXDelayed *)strongReference;
-(void)setStrongReference:(SXDelayed *)arg1 ;
@end

