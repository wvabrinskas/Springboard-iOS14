/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface USCategoryUsageReport : NSObject <NSSecureCoding> {

	NSString* _categoryIdentifier;
	double _totalUsageTime;
	NSArray* _applicationUsage;
	NSArray* _webUsage;

}

@property (copy) NSArray * applicationUsage;                          //@synthesize applicationUsage=_applicationUsage - In the implementation block
@property (copy,readonly) NSString * categoryIdentifier;              //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (readonly) double totalUsageTime;                           //@synthesize totalUsageTime=_totalUsageTime - In the implementation block
@property (copy,readonly) NSArray * webUsage;                         //@synthesize webUsage=_webUsage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)categoryIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)applicationUsage;
-(double)totalUsageTime;
-(id)initWithCategoryIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsage:(id)arg3 webUsage:(id)arg4 ;
-(void)setApplicationUsage:(NSArray *)arg1 ;
-(void)_usCategoryUsageReportCommonInitWithTotalUsageTime:(double)arg1 applicationUsage:(id)arg2 webUsage:(id)arg3 ;
-(NSArray *)webUsage;
@end

