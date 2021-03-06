/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface FMClient.SearchResult : NSObject <NSSecureCoding> {

	 devices;
	 resultCode;

}

@property (copy,nonatomic) NSArray * devices; 
@property (assign,nonatomic) long long resultCode; 
@property (readonly,nonatomic) NSString * debugDescription; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)setDevices:(NSArray *)arg1 ;
-(void)setResultCode:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)resultCode;
-(NSArray *)devices;
@end

