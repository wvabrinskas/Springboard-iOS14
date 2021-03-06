/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXComponentScrollPosition.h>

@interface SXTextComponentScrollPosition : SXComponentScrollPosition {

	long long _characterIndex;
	double _relativeTextOffset;

}

@property (nonatomic,readonly) long long characterIndex;               //@synthesize characterIndex=_characterIndex - In the implementation block
@property (nonatomic,readonly) double relativeTextOffset;              //@synthesize relativeTextOffset=_relativeTextOffset - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(long long)characterIndex;
-(id)initWithComponentIdentifier:(id)arg1 canvasWidth:(double)arg2 relativePageOffset:(double)arg3 characterIndex:(long long)arg4 relativeTextOffset:(double)arg5 ;
-(double)relativeTextOffset;
-(id)initWithDictionaryRepresentation:(id)arg1 exactly:(BOOL)arg2 ;
-(BOOL)jsonDictionaryRepresentationIsValid:(id)arg1 exactly:(BOOL)arg2 ;
@end

