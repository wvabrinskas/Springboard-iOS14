/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSString, NSArray;

@interface ASCLockupBatchRequest : NSObject <NSSecureCoding, NSCopying> {

	NSSet* _ids;
	NSString* _kind;
	NSString* _context;

}

@property (nonatomic,copy,readonly) NSSet * ids;                     //@synthesize ids=_ids - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                 //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requests; 
+(BOOL)supportsSecureCoding;
+(id)lockupBatchRequestsFromRequests:(id)arg1 ;
-(NSSet *)ids;
-(NSString *)kind;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)requests;
-(NSString *)context;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)lockupBatchRequestWithIDs:(id)arg1 ;
-(id)initWithIDs:(id)arg1 kind:(id)arg2 context:(id)arg3 ;
@end

