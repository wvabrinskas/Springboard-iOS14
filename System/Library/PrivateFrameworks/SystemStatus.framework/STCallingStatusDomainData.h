/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/STStatusDomainData.h>

@class STActivityAttributionCatalog, NSSet, NSString;

@interface STCallingStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData> {

	STActivityAttributionCatalog* _attributionCatalog;

}

@property (nonatomic,copy,readonly) STActivityAttributionCatalog * attributionCatalog;              //@synthesize attributionCatalog=_attributionCatalog - In the implementation block
@property (nonatomic,copy,readonly) NSSet * activeCallAttributions; 
@property (nonatomic,copy,readonly) NSSet * ringingCallAttributions; 
@property (nonatomic,copy,readonly) NSSet * activeVideoConferenceAttributions; 
@property (nonatomic,copy,readonly) NSSet * ringingVideoConferenceAttributions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(id)_initWithAttributionCatalog:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSSet *)ringingCallAttributions;
-(id)dataByApplyingDiff:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)ringingVideoConferenceAttributions;
-(id)diffFromData:(id)arg1 ;
-(NSSet *)activeVideoConferenceAttributions;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(STActivityAttributionCatalog *)attributionCatalog;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)activeCallAttributions;
-(id)initWithAttributionCatalog:(id)arg1 ;
@end

