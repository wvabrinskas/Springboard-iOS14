/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NSDocumentDifferenceSize : NSObject {

	long long _generationCount;
	long long _changeCount;

}

@property (assign,nonatomic) long long generationCount;              //@synthesize generationCount=_generationCount - In the implementation block
@property (assign,nonatomic) long long changeCount;                  //@synthesize changeCount=_changeCount - In the implementation block
-(long long)changeCount;
-(id)description;
-(void)setChangeCount:(long long)arg1 ;
-(void)setGenerationCount:(long long)arg1 ;
-(long long)generationCount;
@end
