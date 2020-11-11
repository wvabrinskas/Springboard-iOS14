/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSString;

@interface PKKeychainItemWrapper : NSObject {

	NSMutableDictionary* keychainItemData;
	NSMutableDictionary* genericPasswordQuery;
	BOOL _invisible;
	unsigned long long type;
	NSString* _label;
	unsigned long long _accessibility;

}

@property (assign,nonatomic) unsigned long long type; 
@property (assign,nonatomic) unsigned long long accessibility;                        //@synthesize accessibility=_accessibility - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keychainItemData; 
@property (nonatomic,retain) NSMutableDictionary * genericPasswordQuery; 
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(id)objectForKey:(id)arg1 ;
-(NSString *)label;
-(void)setType:(unsigned long long)arg1 ;
-(void)resetLocalKeychainItem;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)applySynchronizableValueToDictionary:(id)arg1 ;
-(id)secItemFormatToDictionary:(id)arg1 ;
-(void)setKeychainItemData:(NSMutableDictionary *)arg1 ;
-(void)writeToKeychain;
-(void)_resetKeychainItem:(BOOL)arg1 ;
-(id)dictionaryToSecItemFormat:(id)arg1 ;
-(NSMutableDictionary *)keychainItemData;
-(void)applyAccessibilityValueToDictionary:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 ;
-(NSMutableDictionary *)genericPasswordQuery;
-(void)setGenericPasswordQuery:(NSMutableDictionary *)arg1 ;
-(unsigned long long)accessibility;
-(void)resetKeychainItem;
-(id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 type:(unsigned long long)arg4 invisible:(BOOL)arg5 accessibility:(unsigned long long)arg6 ;
-(unsigned long long)type;
-(void)setAccessibility:(unsigned long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 type:(unsigned long long)arg4 invisible:(BOOL)arg5 ;
@end
