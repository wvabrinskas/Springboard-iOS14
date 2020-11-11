/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ASCMetricsData, NSSet;

@interface ASCViewMetricsInstruction : NSObject <NSCopying, NSSecureCoding> {

	ASCMetricsData* _data;
	NSSet* _invocationPoints;

}

@property (nonatomic,copy,readonly) ASCMetricsData * data;                 //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSSet * invocationPoints;              //@synthesize invocationPoints=_invocationPoints - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(ASCMetricsData *)data;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)invocationPoints;
-(id)initWithData:(id)arg1 invocationPoints:(id)arg2 ;
@end
