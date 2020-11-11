/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MKWhenSizedBlock : NSObject {

	BOOL _shouldRun;
	long long _type;
	/*^block*/id _block;
	/*^block*/id _completion;

}

@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id block;                      //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) id completion;                 //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) BOOL shouldRun;              //@synthesize shouldRun=_shouldRun - In the implementation block
-(BOOL)shouldRun;
-(void)perform;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setType:(long long)arg1 ;
-(void)setShouldRun:(BOOL)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)initWithType:(long long)arg1 block:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithType:(long long)arg1 block:(/*^block*/id)arg2 ;
-(id)block;
-(long long)type;
@end
