/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAKnowledgeKeyValueEntry : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * storeName; 
@property (nonatomic,copy) NSString * storeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyValueEntry;
+(id)keyValueEntryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)key;
-(NSString *)storeType;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(NSString *)storeName;
-(void)setStoreType:(NSString *)arg1 ;
-(void)setStoreName:(NSString *)arg1 ;
@end

