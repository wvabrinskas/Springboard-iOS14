/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASyncServerVerifyResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * internalVerifications; 
@property (nonatomic,copy) NSArray * serverChecksums; 
@property (nonatomic,copy) NSArray * syncDebugInfo; 
+(id)serverVerifyResponse;
+(id)serverVerifyResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(NSArray *)internalVerifications;
-(void)setInternalVerifications:(NSArray *)arg1 ;
-(NSArray *)serverChecksums;
-(void)setServerChecksums:(NSArray *)arg1 ;
-(NSArray *)syncDebugInfo;
-(void)setSyncDebugInfo:(NSArray *)arg1 ;
@end
