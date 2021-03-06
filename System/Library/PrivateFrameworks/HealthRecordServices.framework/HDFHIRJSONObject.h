/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, HKFHIRVersion, NSURL, NSString, NSData;

@interface HDFHIRJSONObject : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _JSONObject;
	HKFHIRVersion* _FHIRVersion;
	NSURL* _sourceURL;

}

@property (nonatomic,copy,readonly) NSDictionary * JSONObject;                    //@synthesize JSONObject=_JSONObject - In the implementation block
@property (nonatomic,copy,readonly) HKFHIRVersion * FHIRVersion;                  //@synthesize FHIRVersion=_FHIRVersion - In the implementation block
@property (nonatomic,copy,readonly) NSURL * sourceURL;                            //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * detectedResourceType; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * sourceString; 
+(BOOL)supportsSecureCoding;
+(id)_dataFromJSONObject:(id)arg1 JSONOptions:(unsigned long long)arg2 ;
+(id)objectWithResourceData:(id)arg1 error:(id*)arg2 ;
+(id)resourceTypeOfJSONObject:(id)arg1 error:(id*)arg2 ;
-(NSURL *)sourceURL;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)JSONObject;
-(BOOL)isEqual:(id)arg1 ;
-(HKFHIRVersion *)FHIRVersion;
-(NSData *)data;
-(NSString *)sourceString;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_dataWithJSONOptions:(unsigned long long)arg1 ;
-(id)initWithJSONObject:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 ;
-(NSString *)detectedResourceType;
@end

