/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/MABaseGraph.h>

@class KGGraph, NSMutableDictionary;

@interface MAKGGraph : MABaseGraph {

	KGGraph* _graph;
	NSMutableDictionary* _labelByDomain;
	NSMutableDictionary* _domainByLabel;

}

@property (nonatomic,readonly) KGGraph * graph;              //@synthesize graph=_graph - In the implementation block
+(void)enableKGDB;
+(BOOL)setMarkerAtURL:(id)arg1 ;
+(BOOL)copyPersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)hasMarker:(id)arg1 ;
+(void)disableKGDB;
+(BOOL)destroyPersistentStoreAtURL:(id)arg1 error:(id*)arg2 ;
+(id)persistentStoreURLWithPath:(id)arg1 andName:(id)arg2 ;
+(void)deleteMarker:(id)arg1 ;
+(Class)persistentStoreClass;
+(BOOL)migratePersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)persistentStoreFileExtension;
-(KGGraph *)graph;
-(void)enumerateNodesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_loadWithGraphDictionary:(id)arg1 ;
-(unsigned long long)nodesCount;
-(id)addUniqueNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL*)arg5 ;
-(BOOL)edgesStoreWeakReferencesToNodes;
-(id)initWithSpecification:(id)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(BOOL)copyPersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(void)removeNode:(id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 ;
-(void)enterBatch;
-(unsigned long long)countOfNodesRelatedToNodesWithIdentifiers:(id)arg1 relation:(id)arg2 ;
-(id)addNodeFromBase:(id)arg1 ;
-(id)edgesForDomain:(unsigned short)arg1 ;
-(Class)nodeClass;
-(void)removeEdge:(id)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(unsigned long long)numberOfEdgesMatchingFilter:(id)arg1 ;
-(id)initWithSpecification:(id)arg1 dataURL:(id)arg2 ;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(unsigned long long)version;
-(id)nodeForIdentifier:(unsigned)arg1 ;
-(void)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 saveToDatabase:(BOOL)arg4 createdNodes:(out id*)arg5 createdEdges:(out id*)arg6 ;
-(id)databaseURL;
-(void)deleteMarker;
-(unsigned long long)edgesCountForDomain:(unsigned short)arg1 ;
-(id)identifier;
-(id)nodesForIdentifiers:(id)arg1 ;
-(void)writeUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)edgesDomains;
-(void)enumerateNodesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesRelatedToNodeWithIdentifier:(unsigned)arg1 withRelation:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateEdgesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)hasPendingRead;
-(void)persistModelProperties:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 clobberExisting:(BOOL)arg3 ;
-(void)closePersistentStore;
-(void)enumerateNodesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)edgesForIdentifiers:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg1 ;
-(void)waitUntilQuiescentUsingBlock:(/*^block*/id)arg1 ;
-(void)persistWeight:(float)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(id)description;
-(id)nodesDomains;
-(id)edgesForLabel:(id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)numberOfNodesMatchingFilter:(id)arg1 ;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forEdgeWithIdentifier:(unsigned)arg3 ;
-(id)nodesForDomains:(id)arg1 ;
-(void)invalidateMemoryCaches;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(id)anyNodeForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(unsigned long long)edgesCount;
-(id)nodesForDomain:(unsigned short)arg1 ;
-(id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(void)savePersistentStoreWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithSpecification:(id)arg1 persistenceStoreURL:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)unloadEdge:(id)arg1 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)addUniquelyIdentifiedNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL*)arg5 ;
-(void)loadDomains:(id)arg1 ;
-(void)removeModelPropertiesForEdgeWithIdentifier:(unsigned)arg1 ;
-(id)initWithGraphJSONURL:(id)arg1 ;
-(void)setMarker;
-(void)removeEdges:(id)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)addNodeWithLabel:(id)arg1 ;
-(id)anyNodeForLabel:(id)arg1 ;
-(id)nodesForDomain:(unsigned short)arg1 properties:(id)arg2 ;
-(void)unloadDomains:(id)arg1 ;
-(id)nodesForLabel:(id)arg1 ;
-(id)edgesLabels;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)allNodes;
-(BOOL)compareWithPersistedState;
-(void)removeNodeEdges:(id)arg1 ;
-(id)initWithGraphMLURL:(id)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)removeModelPropertyForKey:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)enumerateEdgesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)persistWeight:(float)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(id)anyNodeMatchingFilter:(id)arg1 ;
-(BOOL)hasPendingWrite;
-(void)persistModelProperties:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 clobberExisting:(BOOL)arg3 ;
-(id)edgesForDomains:(id)arg1 ;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forNodeWithIdentifier:(unsigned)arg3 ;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(void)removeModelPropertyForKey:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(void)removeModelPropertiesForNodeWithIdentifier:(unsigned)arg1 ;
-(BOOL)savePersistentStore;
-(id)edgesMatchingFilter:(id)arg1 ;
-(id)edgeFromFetchedRowWithIdentifier:(int)arg1 domain:(short)arg2 label:(id)arg3 weight:(float)arg4 sourceNodeIdentifier:(int)arg5 targetNodeIdentifier:(int)arg6 ;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)orphanNodes;
-(void)readUsingBlock:(/*^block*/id)arg1 ;
-(id)allEdges;
-(unsigned long long)nodesCountForDomain:(unsigned short)arg1 ;
-(id)edgeForIdentifier:(unsigned)arg1 ;
-(id)nodeFromFetchedRowWithIdentifier:(int)arg1 domain:(short)arg2 label:(id)arg3 weight:(float)arg4 ;
-(id)nodeIdentifiersRelatedToSourceNodeIdentifiers:(id)arg1 relation:(id)arg2 ;
-(void)leaveBatch;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 ;
-(id)nodesLabels;
-(unsigned long long)memoryFootprint:(id)arg1 ;
-(void)removeNodes:(id)arg1 ;
-(BOOL)migratePersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(id)nodesMatchingFilter:(id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)hasMarker;
-(id)nodeIdentifiersMatchingFilter:(id)arg1 ;
-(id)abstractEdges;
-(id)labelsForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)labelAndDomainFromLabels:(id)arg1 outLabel:(id*)arg2 outDomain:(unsigned short*)arg3 ;
-(void)populateEntityDescription:(id)arg1 fromGraphSpecification:(id)arg2 ;
-(id)maNodeFromKGNode:(id)arg1 ;
-(id)maNodesFromKGNodeCollection:(id)arg1 ;
-(id)maEdgeFromKGEdge:(id)arg1 ;
-(id)maEdgesFromKGEdgeCollection:(id)arg1 ;
-(id)_addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(id)_nodeIdentifiersWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)_addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)_edgeIdentifiersForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)_anyEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)edgesOfType:(unsigned long long)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 ;
-(id)edgesWithLabel:(id)arg1 inDomain:(unsigned short)arg2 onNode:(id)arg3 edgeDirection:(unsigned long long)arg4 ;
-(unsigned long long)countOfEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 startNode:(id)arg5 ;
-(void)_instantiateGraphWithStoreAtURL:(id)arg1 ;
@end
