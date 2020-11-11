/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _LTTranslationStatistics : NSObject <NSSecureCoding, NSCopying> {

	long long _inputTokenCount;
	long long _inputSubtokenCount;

}

@property (assign,nonatomic) long long inputTokenCount;                 //@synthesize inputTokenCount=_inputTokenCount - In the implementation block
@property (assign,nonatomic) long long inputSubtokenCount;              //@synthesize inputSubtokenCount=_inputSubtokenCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)_countWithTokenString:(id)arg1 countCharacters:(BOOL)arg2 ;
+(id)statisticsWithEngineMeta:(id)arg1 locale:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setInputTokenCount:(long long)arg1 ;
-(void)setInputSubtokenCount:(long long)arg1 ;
-(long long)inputTokenCount;
-(long long)inputSubtokenCount;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
