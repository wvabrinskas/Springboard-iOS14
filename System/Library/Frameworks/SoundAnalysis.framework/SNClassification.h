/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNConfidenceProvidingWritable.h>

@class NSString;

@interface SNClassification : NSObject <NSCopying, NSSecureCoding, SNConfidenceProvidingWritable> {

	NSString* _identifier;
	double _confidence;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double confidence;                     //@synthesize confidence=_confidence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)new;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(double)confidence;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(BOOL)isEqualToClassification:(id)arg1 ;
@end

