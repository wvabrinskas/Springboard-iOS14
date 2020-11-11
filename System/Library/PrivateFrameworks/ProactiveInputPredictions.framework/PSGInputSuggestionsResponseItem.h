/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveInputPredictions/ProactiveInputPredictions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PSGTextualResponseSuggestion, PSGStructuredInfoSuggestion;

@interface PSGInputSuggestionsResponseItem : NSObject <NSSecureCoding, NSCopying> {

	PSGTextualResponseSuggestion* _textualResponseSuggestion;
	PSGStructuredInfoSuggestion* _structuredInfoSuggestion;

}

@property (nonatomic,readonly) PSGTextualResponseSuggestion * textualResponseSuggestion;              //@synthesize textualResponseSuggestion=_textualResponseSuggestion - In the implementation block
@property (nonatomic,readonly) PSGStructuredInfoSuggestion * structuredInfoSuggestion;                //@synthesize structuredInfoSuggestion=_structuredInfoSuggestion - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)predictedValue;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToItem:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTextualResponseSuggestion:(id)arg1 structuredInfoSuggestion:(id)arg2 ;
-(PSGStructuredInfoSuggestion *)structuredInfoSuggestion;
-(PSGTextualResponseSuggestion *)textualResponseSuggestion;
@end
