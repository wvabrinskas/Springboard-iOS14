/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSRecord.h>

@class LSBundleRecord, NSDictionary, NSURL, _LSLocalizedStringRecord, NSString, NSArray;

@interface LSClaimRecord : LSRecord {

	LSBundleRecord* _weakClaimingBundleRecord;

}

@property (readonly) NSDictionary * iconDictionary; 
@property (readonly) NSURL * iconResourceBundleURL; 
@property (readonly) _LSLocalizedStringRecord * _localizedName; 
@property (readonly) LSBundleRecord * _claimingBundleRecord; 
@property (nonatomic,readonly) id compatibilityObject; 
@property (readonly) NSString * localizedName; 
@property (readonly) NSArray * typeIdentifiers; 
@property (readonly) NSArray * URLSchemes; 
@property (readonly) NSString * handlerRank; 
@property (readonly) unsigned role; 
@property (readonly) LSBundleRecord * claimingBundleRecord; 
+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(NSString *)handlerRank;
-(NSArray *)URLSchemes;
-(id)iconDictionaryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(NSArray *)typeIdentifiers;
-(id)URLSchemesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(id)_localizedNameWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(id)typeIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(unsigned)roleWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(void)_LSRecord_resolve_typeIdentifiers;
-(NSDictionary *)iconDictionary;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)handlerRankWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(void)_LSRecord_resolve_iconDictionary;
-(id)_claimingBundleRecordWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(id)iconResourceBundleURLWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(id)localizedNameWithPreferredLocalizations:(id)arg1 ;
-(void)_LSRecord_resolve__localizedName;
-(void)_LSRecord_resolve_URLSchemes;
-(_LSLocalizedStringRecord *)_localizedName;
-(LSBundleRecord *)claimingBundleRecord;
-(LSBundleRecord *)_claimingBundleRecord;
-(NSURL *)iconResourceBundleURL;
-(void)_LSRecord_resolve__claimingBundleRecord;
-(void)_LSRecord_resolve_iconResourceBundleURL;
-(void)_LSRecord_resolve_role;
-(void)_LSRecord_resolve_handlerRank;
-(unsigned)role;
-(NSString *)localizedName;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
