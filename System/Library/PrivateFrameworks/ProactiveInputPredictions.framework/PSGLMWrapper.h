/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PSGLMWrapper : NSObject {

	void* _langModel;
	void* _lexicon;

}

@property (nonatomic,readonly) void* langModel;              //@synthesize langModel=_langModel - In the implementation block
@property (nonatomic,readonly) void* lexicon;                //@synthesize lexicon=_lexicon - In the implementation block
-(void*)langModel;
-(void*)lexicon;
-(id)initWithLangModel:(void*)arg1 lexicon:(void*)arg2 ;
-(void)dealloc;
@end

