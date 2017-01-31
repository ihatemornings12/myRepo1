#
# OMNeT++/OMNEST Makefile for libinet
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-so -o inet -O out -pINET -Xapplications/voipstream -Xtransport/tcp_lwip -Xtransport/tcp_nsc -DWITH_TCP_COMMON -DWITH_TCP_INET -DWITH_IPv4 -DWITH_IPv6 -DWITH_UDP -DWITH_RTP -DWITH_SCTP -DWITH_NETPERFMETER -DWITH_DHCP -DWITH_ETHERNET -DWITH_PPP -DWITH_EXT_IF -DWITH_MPLS -DWITH_OSPFv2 -DWITH_BGPv4 -DWITH_TRACI -DWITH_MANET -DWITH_xMIPv6 -DWITH_AODV -DWITH_RIP -DWITH_RADIO -DWITH_IEEE80211 -I/usr/include/libxml2 -I/usr/include/glibmm-2.4 -I/usr/lib/x86_64-linux-gnu/glibmm-2.4/include -I/usr/include/sigc++-2.0 -I/usr/lib/x86_64-linux-gnu/sigc++-2.0/include -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/libxml++-2.6 -I/usr/lib/x86_64-linux-gnu/libxml++-2.6/include -lxml++-2.6 -lxml2 -lglibmm-2.4 -lgobject-2.0 -lsigc-2.0 -lglib-2.0
#

# Name of target to be created (-o option)
TARGET = libinet$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I/usr/include/libxml2 \
    -I/usr/include/glibmm-2.4 \
    -I/usr/lib/x86_64-linux-gnu/glibmm-2.4/include \
    -I/usr/include/sigc++-2.0 \
    -I/usr/lib/x86_64-linux-gnu/sigc++-2.0/include \
    -I/usr/include/glib-2.0 \
    -I/usr/lib/x86_64-linux-gnu/glib-2.0/include \
    -I/usr/include/libxml++-2.6 \
    -I/usr/lib/x86_64-linux-gnu/libxml++-2.6/include \
    -I. \
    -Iactions \
    -Iactions/actionbase \
    -Iactions/change \
    -Iactions/clone \
    -Iactions/create \
    -Iactions/destroy \
    -Iactions/disable \
    -Iactions/disable/nodeRelease \
    -Iactions/drop \
    -Iactions/move \
    -Iactions/put \
    -Iactions/retrieve \
    -Iactions/seappexpression \
    -Iactions/send \
    -Iapplications \
    -Iapplications/common \
    -Iapplications/dhcp \
    -Iapplications/ethernet \
    -Iapplications/generic \
    -Iapplications/httptools \
    -Iapplications/inet_sdn \
    -Iapplications/inet_sdn/smartGrid \
    -Iapplications/netperfmeter \
    -Iapplications/pingapp \
    -Iapplications/rtpapp \
    -Iapplications/sctpapp \
    -Iapplications/tcpapp \
    -Iapplications/traci \
    -Iapplications/trafficlightapp \
    -Iapplications/udpapp \
    -Iapplications/voip \
    -Iattacks \
    -Iattacks/attackbase \
    -Iattacks/attackentry \
    -Iattacks/conditionalattack \
    -Iattacks/conditionalattack/conditionalattack \
    -Iattacks/conditionalattack/packetfilter \
    -Iattacks/physicalattack \
    -Iattacks/unconditionalattack \
    -Ibase \
    -Ibattery \
    -Ibattery/models \
    -Iexmachina \
    -Iglobalfilter \
    -Iglobalfilter/putmessages \
    -Ilinklayer \
    -Ilinklayer/common \
    -Ilinklayer/configurator \
    -Ilinklayer/contract \
    -Ilinklayer/ethernet \
    -Ilinklayer/ethernet/switch \
    -Ilinklayer/ext \
    -Ilinklayer/idealwireless \
    -Ilinklayer/ieee80211 \
    -Ilinklayer/ieee80211/mac \
    -Ilinklayer/ieee80211/mgmt \
    -Ilinklayer/ieee80211/radio \
    -Ilinklayer/ieee80211/radio/errormodel \
    -Ilinklayer/ieee8021d \
    -Ilinklayer/ieee8021d/common \
    -Ilinklayer/ieee8021d/relay \
    -Ilinklayer/ieee8021d/rstp \
    -Ilinklayer/ieee8021d/stp \
    -Ilinklayer/ieee8021d/tester \
    -Ilinklayer/loopback \
    -Ilinklayer/ppp \
    -Ilinklayer/queue \
    -Ilinklayer/radio \
    -Ilinklayer/radio/propagation \
    -Ilocalfilter \
    -Imobility \
    -Imobility/common \
    -Imobility/contract \
    -Imobility/group \
    -Imobility/single \
    -Imobility/static \
    -Inetworklayer \
    -Inetworklayer/arp \
    -Inetworklayer/autorouting \
    -Inetworklayer/autorouting/ipv4 \
    -Inetworklayer/autorouting/ipv6 \
    -Inetworklayer/bgpv4 \
    -Inetworklayer/bgpv4/BGPMessage \
    -Inetworklayer/common \
    -Inetworklayer/contract \
    -Inetworklayer/diffserv \
    -Inetworklayer/icmpv6 \
    -Inetworklayer/internetcloud \
    -Inetworklayer/ipv4 \
    -Inetworklayer/ipv6 \
    -Inetworklayer/ipv6tunneling \
    -Inetworklayer/ldp \
    -Inetworklayer/manetrouting \
    -Inetworklayer/manetrouting/aodv-uu \
    -Inetworklayer/manetrouting/aodv-uu/aodv-uu \
    -Inetworklayer/manetrouting/base \
    -Inetworklayer/manetrouting/batman \
    -Inetworklayer/manetrouting/batman/batmand \
    -Inetworklayer/manetrouting/batman/batmand/orig \
    -Inetworklayer/manetrouting/dsdv \
    -Inetworklayer/manetrouting/dsr \
    -Inetworklayer/manetrouting/dsr/dsr-uu \
    -Inetworklayer/manetrouting/dymo \
    -Inetworklayer/manetrouting/dymo/dymoum \
    -Inetworklayer/manetrouting/dymo_fau \
    -Inetworklayer/manetrouting/olsr \
    -Inetworklayer/mpls \
    -Inetworklayer/ospfv2 \
    -Inetworklayer/ospfv2/interface \
    -Inetworklayer/ospfv2/messagehandler \
    -Inetworklayer/ospfv2/neighbor \
    -Inetworklayer/ospfv2/router \
    -Inetworklayer/routing \
    -Inetworklayer/routing/aodv \
    -Inetworklayer/routing/dymo \
    -Inetworklayer/routing/gpsr \
    -Inetworklayer/routing/rip \
    -Inetworklayer/rsvp_te \
    -Inetworklayer/ted \
    -Inetworklayer/xmipv6 \
    -Inodes \
    -Inodes/aodv \
    -Inodes/bgp \
    -Inodes/dymo \
    -Inodes/ethernet \
    -Inodes/gpsr \
    -Inodes/httptools \
    -Inodes/inet \
    -Inodes/inet_sdn \
    -Inodes/inet_sdn/smartGrid \
    -Inodes/internetcloud \
    -Inodes/ipv6 \
    -Inodes/mpls \
    -Inodes/ospfv2 \
    -Inodes/rip \
    -Inodes/rtp \
    -Inodes/wireless \
    -Inodes/xmipv6 \
    -Iofomnet \
    -Iofomnet/openflow \
    -Iofomnet/openflow/apps \
    -Iofomnet/openflow/attackDetection \
    -Iofomnet/openflow/attackDetection/methods \
    -Iofomnet/openflow/ctrlApps \
    -Iofomnet/openflow/images \
    -Iofomnet/openflow/messages \
    -Iofomnet/openflow/mitigation \
    -Iofomnet/openflow/nodes \
    -Iofomnet/openflow/scenarios \
    -Iofomnet/openflow/scenarios/results \
    -Iofomnet/openflow/scenarios/results/szenario_Domains.ini \
    -Iofomnet/openflow/scenarios/results/szenario_Domains_multiController.ini \
    -Iofomnet/openflow/utility \
    -Iparser \
    -Istatus \
    -Itransport \
    -Itransport/contract \
    -Itransport/rtp \
    -Itransport/rtp/profiles \
    -Itransport/rtp/profiles/avprofile \
    -Itransport/sctp \
    -Itransport/tcp \
    -Itransport/tcp/flavours \
    -Itransport/tcp/queues \
    -Itransport/tcp_common \
    -Itransport/udp \
    -Iutil \
    -Iutil/headerserializers \
    -Iutil/headerserializers/headers \
    -Iutil/headerserializers/ipv4 \
    -Iutil/headerserializers/ipv4/headers \
    -Iutil/headerserializers/ipv6 \
    -Iutil/headerserializers/ipv6/headers \
    -Iutil/headerserializers/sctp \
    -Iutil/headerserializers/sctp/headers \
    -Iutil/headerserializers/tcp \
    -Iutil/headerserializers/tcp/headers \
    -Iutil/headerserializers/udp \
    -Iutil/headerserializers/udp/headers \
    -Iutil/messageprinters \
    -Iutil/seapputils \
    -Ivariable \
    -Iworld \
    -Iworld/annotations \
    -Iworld/httptools \
    -Iworld/obstacles \
    -Iworld/radio \
    -Iworld/scenario \
    -Iworld/traci

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =  -lxml++-2.6 -lxml2 -lglibmm-2.4 -lgobject-2.0 -lsigc-2.0 -lglib-2.0

# Output directory
PROJECT_OUTPUT_DIR = out
PROJECTRELATIVE_PATH =
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/actions/actionbase/ActionBase.o \
    $O/actions/change/Change.o \
    $O/actions/clone/Clone.o \
    $O/actions/create/Create.o \
    $O/actions/destroy/Destroy.o \
    $O/actions/disable/Disable.o \
    $O/actions/disable/nodeRelease/NodeRelease.o \
    $O/actions/drop/Drop.o \
    $O/actions/move/Move.o \
    $O/actions/put/Put.o \
    $O/actions/retrieve/Retrieve.o \
    $O/actions/seappexpression/SEAPPExpression.o \
    $O/actions/send/Send.o \
    $O/applications/common/ApplicationBase.o \
    $O/applications/dhcp/DHCPClient.o \
    $O/applications/dhcp/DHCPServer.o \
    $O/applications/ethernet/EtherAppCli.o \
    $O/applications/ethernet/EtherAppSrv.o \
    $O/applications/ethernet/EthernetApplication.o \
    $O/applications/ethernet/EtherTrafGen.o \
    $O/applications/generic/IPvXTrafGen.o \
    $O/applications/generic/IPvXTrafSink.o \
    $O/applications/httptools/HttpBrowser.o \
    $O/applications/httptools/HttpBrowserBase.o \
    $O/applications/httptools/HttpBrowserDirect.o \
    $O/applications/httptools/HttpNodeBase.o \
    $O/applications/httptools/HttpRandom.o \
    $O/applications/httptools/HttpServer.o \
    $O/applications/httptools/HttpServerBase.o \
    $O/applications/httptools/HttpServerDirect.o \
    $O/applications/httptools/HttpServerDirectEvilA.o \
    $O/applications/httptools/HttpServerDirectEvilB.o \
    $O/applications/httptools/HttpServerEvilA.o \
    $O/applications/httptools/HttpServerEvilB.o \
    $O/applications/httptools/HttpUtils.o \
    $O/applications/inet_sdn/smartGrid/DSOApp.o \
    $O/applications/inet_sdn/smartGrid/IED.o \
    $O/applications/inet_sdn/smartGrid/Record.o \
    $O/applications/inet_sdn/smartGrid/RecordedData.o \
    $O/applications/inet_sdn/smartGrid/Report.o \
    $O/applications/inet_sdn/smartGrid/RTUApp.o \
    $O/applications/inet_sdn/smartGrid/SmartMeter.o \
    $O/applications/netperfmeter/NetPerfMeter.o \
    $O/applications/pingapp/PingApp.o \
    $O/applications/pingapp/PingTestApp.o \
    $O/applications/rtpapp/RTPApplication.o \
    $O/applications/sctpapp/SCTPClient.o \
    $O/applications/sctpapp/SCTPNatPeer.o \
    $O/applications/sctpapp/SCTPNatServer.o \
    $O/applications/sctpapp/SCTPPeer.o \
    $O/applications/sctpapp/SCTPServer.o \
    $O/applications/tcpapp/TCPAppBase.o \
    $O/applications/tcpapp/TCPBasicClientApp.o \
    $O/applications/tcpapp/TCPEchoApp.o \
    $O/applications/tcpapp/TCPGenericSrvApp.o \
    $O/applications/tcpapp/TCPGenericSrvThread.o \
    $O/applications/tcpapp/TCPSessionApp.o \
    $O/applications/tcpapp/TCPSinkApp.o \
    $O/applications/tcpapp/TCPSrvHostApp.o \
    $O/applications/tcpapp/TelnetApp.o \
    $O/applications/traci/TraCIDemo.o \
    $O/applications/traci/TraCITestApp.o \
    $O/applications/trafficlightapp/CommandNodeBasicApp.o \
    $O/applications/trafficlightapp/CommandNodeSinkApp.o \
    $O/applications/trafficlightapp/TrafficLightBasicApp.o \
    $O/applications/trafficlightapp/TrafficLightSinkApp.o \
    $O/applications/trafficlightapp/TrafficLightUpdateStatusApp.o \
    $O/applications/udpapp/UDPBasicApp.o \
    $O/applications/udpapp/UDPBasicBurst.o \
    $O/applications/udpapp/UDPEchoApp.o \
    $O/applications/udpapp/UDPSink.o \
    $O/applications/udpapp/UDPVideoStreamCli.o \
    $O/applications/udpapp/UDPVideoStreamSvr.o \
    $O/applications/voip/SimpleVoIPReceiver.o \
    $O/applications/voip/SimpleVoIPSender.o \
    $O/attacks/attackbase/AttackBase.o \
    $O/attacks/attackentry/AttackEntry.o \
    $O/attacks/conditionalattack/conditionalattack/ConditionalAttack.o \
    $O/attacks/conditionalattack/packetfilter/CompoundBlock.o \
    $O/attacks/conditionalattack/packetfilter/ElementaryBlock.o \
    $O/attacks/conditionalattack/packetfilter/FilterBlock.o \
    $O/attacks/conditionalattack/packetfilter/PacketFilter.o \
    $O/attacks/physicalattack/PhysicalAttack.o \
    $O/attacks/unconditionalattack/UnconditionalAttack.o \
    $O/base/AbstractQueue.o \
    $O/base/BasicModule.o \
    $O/base/ByteArray.o \
    $O/base/ByteArrayBuffer.o \
    $O/base/ByteArrayMessage.o \
    $O/base/Compat.o \
    $O/base/Coord.o \
    $O/base/erfc.o \
    $O/base/InterfaceOperations.o \
    $O/base/Join.o \
    $O/base/LifecycleController.o \
    $O/base/ModuleAccess.o \
    $O/base/NedFunctions.o \
    $O/base/NodeOperations.o \
    $O/base/NotificationBoard.o \
    $O/base/NotifierConsts.o \
    $O/base/OperationalBase.o \
    $O/base/PassiveQueueBase.o \
    $O/base/ProtocolMap.o \
    $O/base/QueueBase.o \
    $O/base/ReassemblyBuffer.o \
    $O/base/ResultFilters.o \
    $O/base/Sink.o \
    $O/base/Topology.o \
    $O/base/UnimplementedModule.o \
    $O/battery/models/BasicBattery.o \
    $O/battery/models/InetSimpleBattery.o \
    $O/exmachina/ExMachina.o \
    $O/globalfilter/GlobalFilter.o \
    $O/globalfilter/putmessages/PutMessages.o \
    $O/linklayer/common/MACBase.o \
    $O/linklayer/common/WirelessMacBase.o \
    $O/linklayer/configurator/Ieee8021dInterfaceData.o \
    $O/linklayer/configurator/L2NetworkConfigurator.o \
    $O/linklayer/configurator/L2NodeConfigurator.o \
    $O/linklayer/contract/MACAddress.o \
    $O/linklayer/ethernet/EtherBus.o \
    $O/linklayer/ethernet/EtherEncap.o \
    $O/linklayer/ethernet/EtherFrameClassifier.o \
    $O/linklayer/ethernet/EtherHub.o \
    $O/linklayer/ethernet/EtherLLC.o \
    $O/linklayer/ethernet/EtherMAC.o \
    $O/linklayer/ethernet/EtherMACBase.o \
    $O/linklayer/ethernet/EtherMACFullDuplex.o \
    $O/linklayer/ethernet/switch/MACAddressTable.o \
    $O/linklayer/ethernet/switch/MACRelayUnit.o \
    $O/linklayer/ext/cSocketRTScheduler.o \
    $O/linklayer/ext/ExtInterface.o \
    $O/linklayer/idealwireless/IdealWirelessMac.o \
    $O/linklayer/ieee80211/mac/Ieee80211DataRate.o \
    $O/linklayer/ieee80211/mac/Ieee80211eClassifier.o \
    $O/linklayer/ieee80211/mac/Ieee80211Mac.o \
    $O/linklayer/ieee80211/mac/WifiMode.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o \
    $O/linklayer/ieee80211/radio/BerParseFile.o \
    $O/linklayer/ieee80211/radio/Ieee80211RadioModel.o \
    $O/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o \
    $O/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o \
    $O/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o \
    $O/linklayer/ieee8021d/common/STPBase.o \
    $O/linklayer/ieee8021d/relay/Ieee8021dRelay.o \
    $O/linklayer/ieee8021d/rstp/RSTP.o \
    $O/linklayer/ieee8021d/stp/STP.o \
    $O/linklayer/ieee8021d/tester/STPTester.o \
    $O/linklayer/loopback/Loopback.o \
    $O/linklayer/ppp/PPP.o \
    $O/linklayer/queue/AlgorithmicDropperBase.o \
    $O/linklayer/queue/DropTailQueue.o \
    $O/linklayer/queue/FIFOQueue.o \
    $O/linklayer/queue/PriorityScheduler.o \
    $O/linklayer/queue/REDDropper.o \
    $O/linklayer/queue/SchedulerBase.o \
    $O/linklayer/queue/ThresholdDropper.o \
    $O/linklayer/queue/WRRScheduler.o \
    $O/linklayer/radio/GenericRadioModel.o \
    $O/linklayer/radio/IdealRadio.o \
    $O/linklayer/radio/Modulation.o \
    $O/linklayer/radio/Radio.o \
    $O/linklayer/radio/propagation/FreeSpaceModel.o \
    $O/linklayer/radio/propagation/LogNormalShadowingModel.o \
    $O/linklayer/radio/propagation/NakagamiModel.o \
    $O/linklayer/radio/propagation/RayleighModel.o \
    $O/linklayer/radio/propagation/RiceModel.o \
    $O/linklayer/radio/propagation/SUIModel.o \
    $O/linklayer/radio/propagation/TwoRayGroundModel.o \
    $O/localfilter/LocalFilter.o \
    $O/mobility/common/LineSegmentsMobilityBase.o \
    $O/mobility/common/MobilityAccess.o \
    $O/mobility/common/MobilityBase.o \
    $O/mobility/common/MovingMobilityBase.o \
    $O/mobility/contract/IMobility.o \
    $O/mobility/group/MoBANCoordinator.o \
    $O/mobility/group/MoBANLocal.o \
    $O/mobility/group/Posture.o \
    $O/mobility/group/PostureTransition.o \
    $O/mobility/single/ANSimMobility.o \
    $O/mobility/single/BonnMotionFileCache.o \
    $O/mobility/single/BonnMotionMobility.o \
    $O/mobility/single/ChiangMobility.o \
    $O/mobility/single/CircleMobility.o \
    $O/mobility/single/ConstSpeedMobility.o \
    $O/mobility/single/GaussMarkovMobility.o \
    $O/mobility/single/LinearMobility.o \
    $O/mobility/single/LinearNodeDistributionMobility.o \
    $O/mobility/single/MassMobility.o \
    $O/mobility/single/Ns2MotionMobility.o \
    $O/mobility/single/RandomWPMobility.o \
    $O/mobility/single/RectangleMobility.o \
    $O/mobility/single/TraCIMobility.o \
    $O/mobility/single/TractorMobility.o \
    $O/mobility/single/TurtleMobility.o \
    $O/mobility/static/StaticGridMobility.o \
    $O/mobility/static/StationaryMobility.o \
    $O/networklayer/arp/ARP.o \
    $O/networklayer/arp/IARPCache.o \
    $O/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o \
    $O/networklayer/autorouting/ipv4/HostAutoConfigurator.o \
    $O/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o \
    $O/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o \
    $O/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o \
    $O/networklayer/bgpv4/BGPFSM.o \
    $O/networklayer/bgpv4/BGPRouting.o \
    $O/networklayer/bgpv4/BGPSession.o \
    $O/networklayer/bgpv4/BGPMessage/BGPUpdate.o \
    $O/networklayer/common/InterfaceEntry.o \
    $O/networklayer/common/InterfaceMatcher.o \
    $O/networklayer/common/InterfaceTable.o \
    $O/networklayer/contract/IPSocket.o \
    $O/networklayer/contract/IPv4Address.o \
    $O/networklayer/contract/IPv4ControlInfo.o \
    $O/networklayer/contract/IPv6Address.o \
    $O/networklayer/contract/IPv6ControlInfo.o \
    $O/networklayer/contract/IPvXAddress.o \
    $O/networklayer/contract/IPvXAddressResolver.o \
    $O/networklayer/diffserv/BehaviorAggregateClassifier.o \
    $O/networklayer/diffserv/DiffservUtil.o \
    $O/networklayer/diffserv/DSCPMarker.o \
    $O/networklayer/diffserv/MultiFieldClassifier.o \
    $O/networklayer/diffserv/SingleRateThreeColorMeter.o \
    $O/networklayer/diffserv/TokenBucketMeter.o \
    $O/networklayer/diffserv/TwoRateThreeColorMeter.o \
    $O/networklayer/icmpv6/ICMPv6.o \
    $O/networklayer/icmpv6/IPv6NeighbourCache.o \
    $O/networklayer/icmpv6/IPv6NeighbourDiscovery.o \
    $O/networklayer/internetcloud/CloudDelayerBase.o \
    $O/networklayer/internetcloud/MatrixCloudDelayer.o \
    $O/networklayer/ipv4/ErrorHandling.o \
    $O/networklayer/ipv4/ICMP.o \
    $O/networklayer/ipv4/IGMPv2.o \
    $O/networklayer/ipv4/IPv4.o \
    $O/networklayer/ipv4/IPv4Datagram.o \
    $O/networklayer/ipv4/IPv4FragBuf.o \
    $O/networklayer/ipv4/IPv4InterfaceData.o \
    $O/networklayer/ipv4/IPv4Route.o \
    $O/networklayer/ipv4/NetworkInfo.o \
    $O/networklayer/ipv4/RoutingTable.o \
    $O/networklayer/ipv4/RoutingTableParser.o \
    $O/networklayer/ipv4/RoutingTableRecorder.o \
    $O/networklayer/ipv6/IPv6.o \
    $O/networklayer/ipv6/IPv6Datagram.o \
    $O/networklayer/ipv6/IPv6ErrorHandling.o \
    $O/networklayer/ipv6/IPv6ExtensionHeaders.o \
    $O/networklayer/ipv6/IPv6FragBuf.o \
    $O/networklayer/ipv6/IPv6InterfaceData.o \
    $O/networklayer/ipv6/RoutingTable6.o \
    $O/networklayer/ipv6tunneling/IPv6Tunneling.o \
    $O/networklayer/ldp/LDP.o \
    $O/networklayer/manetrouting/aodv-uu/aodv_msg_struct.o \
    $O/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.o \
    $O/networklayer/manetrouting/aodv-uu/packet_queue_omnet.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/list.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/locality.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.o \
    $O/networklayer/manetrouting/base/ManetAddress.o \
    $O/networklayer/manetrouting/base/ManetNetfilterHook.o \
    $O/networklayer/manetrouting/base/ManetRoutingBase.o \
    $O/networklayer/manetrouting/batman/BatmanMain.o \
    $O/networklayer/manetrouting/batman/batmand/batman.o \
    $O/networklayer/manetrouting/batman/batmand/bitarray.o \
    $O/networklayer/manetrouting/batman/batmand/hna.o \
    $O/networklayer/manetrouting/batman/batmand/originator.o \
    $O/networklayer/manetrouting/batman/batmand/os.o \
    $O/networklayer/manetrouting/batman/batmand/ring_buffer.o \
    $O/networklayer/manetrouting/batman/batmand/schedule.o \
    $O/networklayer/manetrouting/dsdv/DSDV_2.o \
    $O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o \
    $O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/neigh.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o \
    $O/networklayer/manetrouting/dymo/dymo_msg_struct.o \
    $O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o \
    $O/networklayer/manetrouting/dymo/dymo_um_omnet.o \
    $O/networklayer/manetrouting/dymo/dymoum/blacklist.o \
    $O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_re.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o \
    $O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o \
    $O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o \
    $O/networklayer/manetrouting/dymo/dymoum/rtable.o \
    $O/networklayer/manetrouting/dymo/dymoum/timer_queue.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o \
    $O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o \
    $O/networklayer/manetrouting/olsr/OLSR.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX_state.o \
    $O/networklayer/manetrouting/olsr/OLSR_rtable.o \
    $O/networklayer/manetrouting/olsr/OLSR_state.o \
    $O/networklayer/manetrouting/olsr/OLSROPT.o \
    $O/networklayer/mpls/LIBTable.o \
    $O/networklayer/mpls/MPLS.o \
    $O/networklayer/mpls/MPLSPacket.o \
    $O/networklayer/ospfv2/OSPFConfigReader.o \
    $O/networklayer/ospfv2/OSPFRouting.o \
    $O/networklayer/ospfv2/interface/OSPFInterface.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceState.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o \
    $O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o \
    $O/networklayer/ospfv2/messagehandler/HelloHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o \
    $O/networklayer/ospfv2/messagehandler/MessageHandler.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighbor.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborState.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o \
    $O/networklayer/ospfv2/router/ASExternalLSA.o \
    $O/networklayer/ospfv2/router/LSA.o \
    $O/networklayer/ospfv2/router/NetworkLSA.o \
    $O/networklayer/ospfv2/router/OSPFArea.o \
    $O/networklayer/ospfv2/router/OSPFRouter.o \
    $O/networklayer/ospfv2/router/OSPFRoutingTableEntry.o \
    $O/networklayer/ospfv2/router/RouterLSA.o \
    $O/networklayer/ospfv2/router/SummaryLSA.o \
    $O/networklayer/routing/aodv/AODVRouteData.o \
    $O/networklayer/routing/aodv/AODVRouting.o \
    $O/networklayer/routing/dymo/DYMORouteData.o \
    $O/networklayer/routing/dymo/xDYMO.o \
    $O/networklayer/routing/gpsr/GPSR.o \
    $O/networklayer/routing/gpsr/PositionTable.o \
    $O/networklayer/routing/rip/RIPRouting.o \
    $O/networklayer/rsvp_te/RSVP.o \
    $O/networklayer/rsvp_te/SimpleClassifier.o \
    $O/networklayer/rsvp_te/Utils.o \
    $O/networklayer/ted/LinkStateRouting.o \
    $O/networklayer/ted/TED.o \
    $O/networklayer/xmipv6/BindingCache.o \
    $O/networklayer/xmipv6/BindingUpdateList.o \
    $O/networklayer/xmipv6/MobilityHeader.o \
    $O/networklayer/xmipv6/xMIPv6.o \
    $O/ofomnet/openflow/Buffer.o \
    $O/ofomnet/openflow/Flow_Table.o \
    $O/ofomnet/openflow/OF_Wrapper.o \
    $O/ofomnet/openflow/OFA_controller.o \
    $O/ofomnet/openflow/OFA_switch.o \
    $O/ofomnet/openflow/Open_Flow_Processing.o \
    $O/ofomnet/openflow/apps/PingAppRandom.o \
    $O/ofomnet/openflow/attackDetection/AttackDetection.o \
    $O/ofomnet/openflow/attackDetection/methods/Entropy.o \
    $O/ofomnet/openflow/ctrlApps/Forwarding.o \
    $O/ofomnet/openflow/ctrlApps/FwdSwitch.o \
    $O/ofomnet/openflow/ctrlApps/Hub.o \
    $O/ofomnet/openflow/ctrlApps/Switch.o \
    $O/ofomnet/openflow/mitigation/Mitigation.o \
    $O/ofomnet/openflow/utility/kPartitionNetwork.o \
    $O/ofomnet/openflow/utility/placeController.o \
    $O/ofomnet/openflow/utility/SpanningTree.o \
    $O/parser/Parser.o \
    $O/status/NodeStatus.o \
    $O/transport/contract/SCTPSocket.o \
    $O/transport/contract/TCPSocket.o \
    $O/transport/contract/TCPSocketMap.o \
    $O/transport/contract/UDPSocket.o \
    $O/transport/rtp/reports.o \
    $O/transport/rtp/RTCP.o \
    $O/transport/rtp/RTCPPacket.o \
    $O/transport/rtp/RTP.o \
    $O/transport/rtp/RTPInnerPacket.o \
    $O/transport/rtp/RTPPacket.o \
    $O/transport/rtp/RTPParticipantInfo.o \
    $O/transport/rtp/RTPPayloadReceiver.o \
    $O/transport/rtp/RTPPayloadSender.o \
    $O/transport/rtp/RTPProfile.o \
    $O/transport/rtp/RTPReceiverInfo.o \
    $O/transport/rtp/RTPSenderInfo.o \
    $O/transport/rtp/sdes.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfile.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o \
    $O/transport/sctp/SCTP.o \
    $O/transport/sctp/SCTPAlg.o \
    $O/transport/sctp/SCTPAssociationAddIP.o \
    $O/transport/sctp/SCTPAssociationBase.o \
    $O/transport/sctp/SCTPAssociationEventProc.o \
    $O/transport/sctp/SCTPAssociationRcvMessage.o \
    $O/transport/sctp/SCTPAssociationSendAll.o \
    $O/transport/sctp/SCTPAssociationStreamReset.o \
    $O/transport/sctp/SCTPAssociationUtil.o \
    $O/transport/sctp/SCTPCCFunctions.o \
    $O/transport/sctp/SCTPGapList.o \
    $O/transport/sctp/SCTPMessage.o \
    $O/transport/sctp/SCTPNatHook.o \
    $O/transport/sctp/SCTPNatTable.o \
    $O/transport/sctp/SCTPQueue.o \
    $O/transport/sctp/SCTPReceiveStream.o \
    $O/transport/sctp/SCTPSendStream.o \
    $O/transport/sctp/SCTPSSFunctions.o \
    $O/transport/tcp/TCP.o \
    $O/transport/tcp/TCPConnectionBase.o \
    $O/transport/tcp/TCPConnectionEventProc.o \
    $O/transport/tcp/TCPConnectionRcvSegment.o \
    $O/transport/tcp/TCPConnectionSackUtil.o \
    $O/transport/tcp/TCPConnectionUtil.o \
    $O/transport/tcp/TCPSACKRexmitQueue.o \
    $O/transport/tcp/flavours/DumbTCP.o \
    $O/transport/tcp/flavours/TCPBaseAlg.o \
    $O/transport/tcp/flavours/TCPNewReno.o \
    $O/transport/tcp/flavours/TCPNoCongestionControl.o \
    $O/transport/tcp/flavours/TCPReno.o \
    $O/transport/tcp/flavours/TCPSegmentTransmitInfoList.o \
    $O/transport/tcp/flavours/TCPTahoe.o \
    $O/transport/tcp/flavours/TCPTahoeRenoFamily.o \
    $O/transport/tcp/flavours/TCPVegas.o \
    $O/transport/tcp/flavours/TCPWestwood.o \
    $O/transport/tcp/queues/TCPByteStreamRcvQueue.o \
    $O/transport/tcp/queues/TCPByteStreamSendQueue.o \
    $O/transport/tcp/queues/TCPMsgBasedRcvQueue.o \
    $O/transport/tcp/queues/TCPMsgBasedSendQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataRcvQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataSendQueue.o \
    $O/transport/tcp_common/TCPSegment.o \
    $O/transport/tcp_common/TCPSpoof.o \
    $O/transport/udp/UDP.o \
    $O/util/common.o \
    $O/util/Delayer.o \
    $O/util/int128.o \
    $O/util/Macho.o \
    $O/util/MessageChecker.o \
    $O/util/NetAnimTrace.o \
    $O/util/opp_utils.o \
    $O/util/OrdinalBasedDropper.o \
    $O/util/OrdinalBasedDuplicator.o \
    $O/util/PacketDump.o \
    $O/util/PatternMatcher.o \
    $O/util/PcapDump.o \
    $O/util/PcapRecorder.o \
    $O/util/TCPDump.o \
    $O/util/ThruputMeter.o \
    $O/util/ThruputMeteringChannel.o \
    $O/util/XMLUtils.o \
    $O/util/headerserializers/TCPIPchecksum.o \
    $O/util/headerserializers/ipv4/ICMPSerializer.o \
    $O/util/headerserializers/ipv4/IGMPSerializer.o \
    $O/util/headerserializers/ipv4/IPv4Serializer.o \
    $O/util/headerserializers/ipv6/IPv6Serializer.o \
    $O/util/headerserializers/sctp/SCTPSerializer.o \
    $O/util/headerserializers/tcp/TCPSerializer.o \
    $O/util/headerserializers/udp/UDPSerializer.o \
    $O/util/messageprinters/InetPacketBytesPrinter.o \
    $O/util/messageprinters/InetPacketPrinter.o \
    $O/util/messageprinters/InetPacketPrinter2.o \
    $O/util/seapputils/seapputils.o \
    $O/variable/Variable.o \
    $O/world/annotations/AnnotationDummy.o \
    $O/world/annotations/AnnotationManager.o \
    $O/world/httptools/HttpController.o \
    $O/world/obstacles/Obstacle.o \
    $O/world/obstacles/ObstacleControl.o \
    $O/world/radio/ChannelAccess.o \
    $O/world/radio/ChannelControl.o \
    $O/world/radio/IdealChannelModel.o \
    $O/world/radio/IdealChannelModelAccess.o \
    $O/world/scenario/ScenarioManager.o \
    $O/world/traci/TraCIScenarioManager.o \
    $O/world/traci/TraCIScenarioManagerLaunchd.o \
    $O/applications/dhcp/DHCPMessage_m.o \
    $O/applications/ethernet/EtherApp_m.o \
    $O/applications/httptools/HttpEventMessages_m.o \
    $O/applications/httptools/HttpMessages_m.o \
    $O/applications/inet_sdn/ApplicationPacket_m.o \
    $O/applications/inet_sdn/SendApplicationPacket_m.o \
    $O/applications/inet_sdn/smartGrid/MeasurementData_m.o \
    $O/applications/inet_sdn/smartGrid/MonitoringData_m.o \
    $O/applications/inet_sdn/smartGrid/SetPoints_m.o \
    $O/applications/netperfmeter/NetPerfMeter_m.o \
    $O/applications/pingapp/PingPayload_m.o \
    $O/applications/tcpapp/GenericAppMsg_m.o \
    $O/applications/trafficlightapp/Ciao_m.o \
    $O/applications/trafficlightapp/TrafficLightPacket_m.o \
    $O/applications/voip/SimpleVoIPPacket_m.o \
    $O/base/ByteArray_m.o \
    $O/base/ByteArrayMessage_m.o \
    $O/linklayer/contract/Ieee802Ctrl_m.o \
    $O/linklayer/contract/PhyControlInfo_m.o \
    $O/linklayer/ethernet/EtherFrame_m.o \
    $O/linklayer/ext/ExtFrame_m.o \
    $O/linklayer/idealwireless/IdealWirelessFrame_m.o \
    $O/linklayer/ieee80211/mac/Ieee80211Frame_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o \
    $O/linklayer/ieee8021d/common/Ieee8021dBPDU_m.o \
    $O/linklayer/ppp/PPPFrame_m.o \
    $O/linklayer/radio/AirFrame_m.o \
    $O/linklayer/radio/IdealAirFrame_m.o \
    $O/linklayer/radio/Radio80211aControlInfo_m.o \
    $O/networklayer/arp/ARPPacket_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPHeader_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPOpen_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPUpdate_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.o \
    $O/networklayer/contract/IPProtocolId_m.o \
    $O/networklayer/contract/IPv4ControlInfo_m.o \
    $O/networklayer/contract/IPv6ControlInfo_m.o \
    $O/networklayer/diffserv/DSCP_m.o \
    $O/networklayer/icmpv6/ICMPv6Message_m.o \
    $O/networklayer/icmpv6/IPv6NDMessage_m.o \
    $O/networklayer/ipv4/ICMPMessage_m.o \
    $O/networklayer/ipv4/IGMPMessage_m.o \
    $O/networklayer/ipv4/IPv4Datagram_m.o \
    $O/networklayer/ipv6/IPv6Datagram_m.o \
    $O/networklayer/ipv6/IPv6ExtensionHeaders_m.o \
    $O/networklayer/ldp/LDPPacket_m.o \
    $O/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.o \
    $O/networklayer/manetrouting/base/ControlInfoBreakLink_m.o \
    $O/networklayer/manetrouting/base/ControlManetRouting_m.o \
    $O/networklayer/manetrouting/base/MeshControlInfo_m.o \
    $O/networklayer/manetrouting/batman/BatmanMsg_m.o \
    $O/networklayer/manetrouting/dsdv/DSDVhello_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o \
    $O/networklayer/manetrouting/olsr/OLSRpkt_m.o \
    $O/networklayer/ospfv2/OSPFPacket_m.o \
    $O/networklayer/routing/aodv/AODVControlPackets_m.o \
    $O/networklayer/routing/dymo/DYMO_m.o \
    $O/networklayer/routing/gpsr/GPSR_m.o \
    $O/networklayer/routing/rip/RIPPacket_m.o \
    $O/networklayer/rsvp_te/IntServ_m.o \
    $O/networklayer/rsvp_te/RSVPHello_m.o \
    $O/networklayer/rsvp_te/RSVPPacket_m.o \
    $O/networklayer/rsvp_te/RSVPPathMsg_m.o \
    $O/networklayer/rsvp_te/RSVPResvMsg_m.o \
    $O/networklayer/rsvp_te/SignallingMsg_m.o \
    $O/networklayer/ted/LinkStatePacket_m.o \
    $O/networklayer/ted/TED_m.o \
    $O/networklayer/xmipv6/MobilityHeader_m.o \
    $O/ofomnet/openflow/messages/OFP_Echo_Reply_m.o \
    $O/ofomnet/openflow/messages/OFP_Echo_Request_m.o \
    $O/ofomnet/openflow/messages/OFP_Features_Reply_m.o \
    $O/ofomnet/openflow/messages/OFP_Features_Request_m.o \
    $O/ofomnet/openflow/messages/OFP_Flow_Mod_m.o \
    $O/ofomnet/openflow/messages/OFP_Flow_Removed_m.o \
    $O/ofomnet/openflow/messages/OFP_Flow_Stats_Reply_m.o \
    $O/ofomnet/openflow/messages/OFP_Flow_Stats_Request_m.o \
    $O/ofomnet/openflow/messages/OFP_Packet_In_m.o \
    $O/ofomnet/openflow/messages/OFP_Packet_Out_m.o \
    $O/ofomnet/openflow/messages/OFP_Port_Status_m.o \
    $O/ofomnet/openflow/messages/Open_Flow_Message_m.o \
    $O/transport/contract/SCTPCommand_m.o \
    $O/transport/contract/TCPCommand_m.o \
    $O/transport/contract/UDPControlInfo_m.o \
    $O/transport/rtp/reports_m.o \
    $O/transport/rtp/RTCPPacket1_m.o \
    $O/transport/rtp/RTCPPacket2_m.o \
    $O/transport/rtp/RTCPPacket3_m.o \
    $O/transport/rtp/RTPInnerPacket_m.o \
    $O/transport/rtp/RTPInterfacePacket_m.o \
    $O/transport/rtp/RTPPacket_m.o \
    $O/transport/rtp/RTPParticipantInfo_m.o \
    $O/transport/rtp/RTPSenderControlMessage_m.o \
    $O/transport/rtp/RTPSenderStatusMessage_m.o \
    $O/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o \
    $O/transport/sctp/SCTPMessage_m.o \
    $O/transport/tcp_common/TCPSegment_m.o \
    $O/transport/udp/UDPPacket_m.o

# Message files
MSGFILES = \
    applications/dhcp/DHCPMessage.msg \
    applications/ethernet/EtherApp.msg \
    applications/httptools/HttpEventMessages.msg \
    applications/httptools/HttpMessages.msg \
    applications/inet_sdn/ApplicationPacket.msg \
    applications/inet_sdn/SendApplicationPacket.msg \
    applications/inet_sdn/smartGrid/MeasurementData.msg \
    applications/inet_sdn/smartGrid/MonitoringData.msg \
    applications/inet_sdn/smartGrid/SetPoints.msg \
    applications/netperfmeter/NetPerfMeter.msg \
    applications/pingapp/PingPayload.msg \
    applications/tcpapp/GenericAppMsg.msg \
    applications/trafficlightapp/Ciao.msg \
    applications/trafficlightapp/TrafficLightPacket.msg \
    applications/voip/SimpleVoIPPacket.msg \
    base/ByteArray.msg \
    base/ByteArrayMessage.msg \
    linklayer/contract/Ieee802Ctrl.msg \
    linklayer/contract/PhyControlInfo.msg \
    linklayer/ethernet/EtherFrame.msg \
    linklayer/ext/ExtFrame.msg \
    linklayer/idealwireless/IdealWirelessFrame.msg \
    linklayer/ieee80211/mac/Ieee80211Frame.msg \
    linklayer/ieee80211/mgmt/Ieee80211MgmtFrames.msg \
    linklayer/ieee80211/mgmt/Ieee80211Primitives.msg \
    linklayer/ieee8021d/common/Ieee8021dBPDU.msg \
    linklayer/ppp/PPPFrame.msg \
    linklayer/radio/AirFrame.msg \
    linklayer/radio/IdealAirFrame.msg \
    linklayer/radio/Radio80211aControlInfo.msg \
    networklayer/arp/ARPPacket.msg \
    networklayer/bgpv4/BGPMessage/BGPASPathSegment.msg \
    networklayer/bgpv4/BGPMessage/BGPHeader.msg \
    networklayer/bgpv4/BGPMessage/BGPKeepAlive.msg \
    networklayer/bgpv4/BGPMessage/BGPOpen.msg \
    networklayer/bgpv4/BGPMessage/BGPUpdate.msg \
    networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes.msg \
    networklayer/contract/IPProtocolId.msg \
    networklayer/contract/IPv4ControlInfo.msg \
    networklayer/contract/IPv6ControlInfo.msg \
    networklayer/diffserv/DSCP.msg \
    networklayer/icmpv6/ICMPv6Message.msg \
    networklayer/icmpv6/IPv6NDMessage.msg \
    networklayer/ipv4/ICMPMessage.msg \
    networklayer/ipv4/IGMPMessage.msg \
    networklayer/ipv4/IPv4Datagram.msg \
    networklayer/ipv6/IPv6Datagram.msg \
    networklayer/ipv6/IPv6ExtensionHeaders.msg \
    networklayer/ldp/LDPPacket.msg \
    networklayer/manetrouting/aodv-uu/aodv_msg_struct.msg \
    networklayer/manetrouting/base/ControlInfoBreakLink.msg \
    networklayer/manetrouting/base/ControlManetRouting.msg \
    networklayer/manetrouting/base/MeshControlInfo.msg \
    networklayer/manetrouting/batman/BatmanMsg.msg \
    networklayer/manetrouting/dsdv/DSDVhello.msg \
    networklayer/manetrouting/dymo_fau/DYMO_Packet.msg \
    networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RERR.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RM.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RREP.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RREQ.msg \
    networklayer/manetrouting/dymo_fau/DYMO_Timeout.msg \
    networklayer/manetrouting/dymo_fau/DYMO_UERR.msg \
    networklayer/manetrouting/olsr/OLSRpkt.msg \
    networklayer/ospfv2/OSPFPacket.msg \
    networklayer/routing/aodv/AODVControlPackets.msg \
    networklayer/routing/dymo/DYMO.msg \
    networklayer/routing/gpsr/GPSR.msg \
    networklayer/routing/rip/RIPPacket.msg \
    networklayer/rsvp_te/IntServ.msg \
    networklayer/rsvp_te/RSVPHello.msg \
    networklayer/rsvp_te/RSVPPacket.msg \
    networklayer/rsvp_te/RSVPPathMsg.msg \
    networklayer/rsvp_te/RSVPResvMsg.msg \
    networklayer/rsvp_te/SignallingMsg.msg \
    networklayer/ted/LinkStatePacket.msg \
    networklayer/ted/TED.msg \
    networklayer/xmipv6/MobilityHeader.msg \
    ofomnet/openflow/messages/OFP_Echo_Reply.msg \
    ofomnet/openflow/messages/OFP_Echo_Request.msg \
    ofomnet/openflow/messages/OFP_Features_Reply.msg \
    ofomnet/openflow/messages/OFP_Features_Request.msg \
    ofomnet/openflow/messages/OFP_Flow_Mod.msg \
    ofomnet/openflow/messages/OFP_Flow_Removed.msg \
    ofomnet/openflow/messages/OFP_Flow_Stats_Reply.msg \
    ofomnet/openflow/messages/OFP_Flow_Stats_Request.msg \
    ofomnet/openflow/messages/OFP_Packet_In.msg \
    ofomnet/openflow/messages/OFP_Packet_Out.msg \
    ofomnet/openflow/messages/OFP_Port_Status.msg \
    ofomnet/openflow/messages/Open_Flow_Message.msg \
    transport/contract/SCTPCommand.msg \
    transport/contract/TCPCommand.msg \
    transport/contract/UDPControlInfo.msg \
    transport/rtp/reports.msg \
    transport/rtp/RTCPPacket1.msg \
    transport/rtp/RTCPPacket2.msg \
    transport/rtp/RTCPPacket3.msg \
    transport/rtp/RTPInnerPacket.msg \
    transport/rtp/RTPInterfacePacket.msg \
    transport/rtp/RTPPacket.msg \
    transport/rtp/RTPParticipantInfo.msg \
    transport/rtp/RTPSenderControlMessage.msg \
    transport/rtp/RTPSenderStatusMessage.msg \
    transport/rtp/profiles/avprofile/RTPMpegPacket.msg \
    transport/sctp/SCTPMessage.msg \
    transport/tcp_common/TCPSegment.msg \
    transport/udp/UDPPacket.msg

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppenvir$D $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS) \
    -DWITH_TCP_COMMON \
    -DWITH_TCP_INET \
    -DWITH_IPv4 \
    -DWITH_IPv6 \
    -DWITH_UDP \
    -DWITH_RTP \
    -DWITH_SCTP \
    -DWITH_NETPERFMETER \
    -DWITH_DHCP \
    -DWITH_ETHERNET \
    -DWITH_PPP \
    -DWITH_EXT_IF \
    -DWITH_MPLS \
    -DWITH_OSPFv2 \
    -DWITH_BGPv4 \
    -DWITH_TRACI \
    -DWITH_MANET \
    -DWITH_xMIPv6 \
    -DWITH_AODV \
    -DWITH_RIP \
    -DWITH_RADIO \
    -DWITH_IEEE80211 \
    -DINET_EXPORT $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH) -PINET_API

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# inserted from file 'makefrag':
# if you want to use external interfaces with inet, you should install
# winpcap (on windows) or libpcap-dev (on linux) and re-run ./configure in
# the omnetpp root directory and comment out the following line:
HAVE_PCAP=no

ifeq ($(HAVE_PCAP),yes)
  # link with PCAP libs too
  LIBS += $(PCAP_LIBS)
else
  # remove the HAVE_PCAP define if we do not need PCAP
  CFLAGS := $(filter-out -DHAVE_PCAP,$(CFLAGS))
endif

#
# TCP implementaion using the Network Simulation Cradle (TCP_NSC feature)
#
ifneq (,$(findstring -DWITH_TCP_NSC,$(COPTS)))
  NSC_VERSION= $(shell ls -d ../3rdparty/nsc* 2>/dev/null | sed 's/^.*-//')
  ifneq ($(NSC_VERSION),)
    CFLAGS += -I../3rdparty/nsc-$(NSC_VERSION)/sim -DHAVE_NSC
    LIBS += -Wl,-rpath,`abspath ../3rdparty/nsc-$(NSC_VERSION)`
  endif
endif

#
# pkg-config:
#
HAVE_PKGCFG := $(shell pkg-config --version 2>/dev/null)
ifeq ($(strip $(HAVE_PKGCFG)),)
  HAVE_PKGCFG := no
else
  HAVE_PKGCFG := yes
  PKGCFG := $(shell which pkg-config)
endif

#
# VoipStream feature:
#
ifneq (,$(findstring -DWITH_VOIPSTREAM,$(COPTS)))
  ifeq ($(HAVE_PKGCFG), yes)
    HAVE_FFMPEG := $(shell $(PKGCFG) --exists libavcodec libavformat libavutil && echo yes || echo no)
    ifeq ($(HAVE_FFMPEG), yes)
      LIBS += $(shell $(PKGCFG) --libs libavcodec libavformat libavutil)
      CFLAGS += $(shell $(PKGCFG) --cflags libavcodec libavformat libavutil) -DHAVE_FFMPEG
    endif
    HAVE_FFMPEG_AVRESAMPLE := $(shell $(PKGCFG) --exists libavresample && echo yes || echo no)
    ifeq ($(HAVE_FFMPEG_AVRESAMPLE), yes)
      LIBS += $(shell $(PKGCFG) --libs libavresample)
      CFLAGS += $(shell $(PKGCFG) --cflags libavresample) -DHAVE_FFMPEG_AVRESAMPLE
    endif
  endif
endif

# disable anoying "... hides overloaded virtual function" warning
CFLAGS += -Wno-overloaded-virtual

# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(Q)$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	@echo Creating shared library: $@
	$(Q)$(SHLIB_LD) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS)
	$(Q)$(SHLIB_POSTPROCESS) $O/$(TARGET)

.PHONY: all clean cleanall depend msgheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f inet inet.exe libinet.so libinet.a libinet.dll libinet.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f actions/*_m.cc actions/*_m.h
	$(Q)-rm -f actions/actionbase/*_m.cc actions/actionbase/*_m.h
	$(Q)-rm -f actions/change/*_m.cc actions/change/*_m.h
	$(Q)-rm -f actions/clone/*_m.cc actions/clone/*_m.h
	$(Q)-rm -f actions/create/*_m.cc actions/create/*_m.h
	$(Q)-rm -f actions/destroy/*_m.cc actions/destroy/*_m.h
	$(Q)-rm -f actions/disable/*_m.cc actions/disable/*_m.h
	$(Q)-rm -f actions/disable/nodeRelease/*_m.cc actions/disable/nodeRelease/*_m.h
	$(Q)-rm -f actions/drop/*_m.cc actions/drop/*_m.h
	$(Q)-rm -f actions/move/*_m.cc actions/move/*_m.h
	$(Q)-rm -f actions/put/*_m.cc actions/put/*_m.h
	$(Q)-rm -f actions/retrieve/*_m.cc actions/retrieve/*_m.h
	$(Q)-rm -f actions/seappexpression/*_m.cc actions/seappexpression/*_m.h
	$(Q)-rm -f actions/send/*_m.cc actions/send/*_m.h
	$(Q)-rm -f applications/*_m.cc applications/*_m.h
	$(Q)-rm -f applications/common/*_m.cc applications/common/*_m.h
	$(Q)-rm -f applications/dhcp/*_m.cc applications/dhcp/*_m.h
	$(Q)-rm -f applications/ethernet/*_m.cc applications/ethernet/*_m.h
	$(Q)-rm -f applications/generic/*_m.cc applications/generic/*_m.h
	$(Q)-rm -f applications/httptools/*_m.cc applications/httptools/*_m.h
	$(Q)-rm -f applications/inet_sdn/*_m.cc applications/inet_sdn/*_m.h
	$(Q)-rm -f applications/inet_sdn/smartGrid/*_m.cc applications/inet_sdn/smartGrid/*_m.h
	$(Q)-rm -f applications/netperfmeter/*_m.cc applications/netperfmeter/*_m.h
	$(Q)-rm -f applications/pingapp/*_m.cc applications/pingapp/*_m.h
	$(Q)-rm -f applications/rtpapp/*_m.cc applications/rtpapp/*_m.h
	$(Q)-rm -f applications/sctpapp/*_m.cc applications/sctpapp/*_m.h
	$(Q)-rm -f applications/tcpapp/*_m.cc applications/tcpapp/*_m.h
	$(Q)-rm -f applications/traci/*_m.cc applications/traci/*_m.h
	$(Q)-rm -f applications/trafficlightapp/*_m.cc applications/trafficlightapp/*_m.h
	$(Q)-rm -f applications/udpapp/*_m.cc applications/udpapp/*_m.h
	$(Q)-rm -f applications/voip/*_m.cc applications/voip/*_m.h
	$(Q)-rm -f attacks/*_m.cc attacks/*_m.h
	$(Q)-rm -f attacks/attackbase/*_m.cc attacks/attackbase/*_m.h
	$(Q)-rm -f attacks/attackentry/*_m.cc attacks/attackentry/*_m.h
	$(Q)-rm -f attacks/conditionalattack/*_m.cc attacks/conditionalattack/*_m.h
	$(Q)-rm -f attacks/conditionalattack/conditionalattack/*_m.cc attacks/conditionalattack/conditionalattack/*_m.h
	$(Q)-rm -f attacks/conditionalattack/packetfilter/*_m.cc attacks/conditionalattack/packetfilter/*_m.h
	$(Q)-rm -f attacks/physicalattack/*_m.cc attacks/physicalattack/*_m.h
	$(Q)-rm -f attacks/unconditionalattack/*_m.cc attacks/unconditionalattack/*_m.h
	$(Q)-rm -f base/*_m.cc base/*_m.h
	$(Q)-rm -f battery/*_m.cc battery/*_m.h
	$(Q)-rm -f battery/models/*_m.cc battery/models/*_m.h
	$(Q)-rm -f exmachina/*_m.cc exmachina/*_m.h
	$(Q)-rm -f globalfilter/*_m.cc globalfilter/*_m.h
	$(Q)-rm -f globalfilter/putmessages/*_m.cc globalfilter/putmessages/*_m.h
	$(Q)-rm -f linklayer/*_m.cc linklayer/*_m.h
	$(Q)-rm -f linklayer/common/*_m.cc linklayer/common/*_m.h
	$(Q)-rm -f linklayer/configurator/*_m.cc linklayer/configurator/*_m.h
	$(Q)-rm -f linklayer/contract/*_m.cc linklayer/contract/*_m.h
	$(Q)-rm -f linklayer/ethernet/*_m.cc linklayer/ethernet/*_m.h
	$(Q)-rm -f linklayer/ethernet/switch/*_m.cc linklayer/ethernet/switch/*_m.h
	$(Q)-rm -f linklayer/ext/*_m.cc linklayer/ext/*_m.h
	$(Q)-rm -f linklayer/idealwireless/*_m.cc linklayer/idealwireless/*_m.h
	$(Q)-rm -f linklayer/ieee80211/*_m.cc linklayer/ieee80211/*_m.h
	$(Q)-rm -f linklayer/ieee80211/mac/*_m.cc linklayer/ieee80211/mac/*_m.h
	$(Q)-rm -f linklayer/ieee80211/mgmt/*_m.cc linklayer/ieee80211/mgmt/*_m.h
	$(Q)-rm -f linklayer/ieee80211/radio/*_m.cc linklayer/ieee80211/radio/*_m.h
	$(Q)-rm -f linklayer/ieee80211/radio/errormodel/*_m.cc linklayer/ieee80211/radio/errormodel/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/*_m.cc linklayer/ieee8021d/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/common/*_m.cc linklayer/ieee8021d/common/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/relay/*_m.cc linklayer/ieee8021d/relay/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/rstp/*_m.cc linklayer/ieee8021d/rstp/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/stp/*_m.cc linklayer/ieee8021d/stp/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/tester/*_m.cc linklayer/ieee8021d/tester/*_m.h
	$(Q)-rm -f linklayer/loopback/*_m.cc linklayer/loopback/*_m.h
	$(Q)-rm -f linklayer/ppp/*_m.cc linklayer/ppp/*_m.h
	$(Q)-rm -f linklayer/queue/*_m.cc linklayer/queue/*_m.h
	$(Q)-rm -f linklayer/radio/*_m.cc linklayer/radio/*_m.h
	$(Q)-rm -f linklayer/radio/propagation/*_m.cc linklayer/radio/propagation/*_m.h
	$(Q)-rm -f localfilter/*_m.cc localfilter/*_m.h
	$(Q)-rm -f mobility/*_m.cc mobility/*_m.h
	$(Q)-rm -f mobility/common/*_m.cc mobility/common/*_m.h
	$(Q)-rm -f mobility/contract/*_m.cc mobility/contract/*_m.h
	$(Q)-rm -f mobility/group/*_m.cc mobility/group/*_m.h
	$(Q)-rm -f mobility/single/*_m.cc mobility/single/*_m.h
	$(Q)-rm -f mobility/static/*_m.cc mobility/static/*_m.h
	$(Q)-rm -f networklayer/*_m.cc networklayer/*_m.h
	$(Q)-rm -f networklayer/arp/*_m.cc networklayer/arp/*_m.h
	$(Q)-rm -f networklayer/autorouting/*_m.cc networklayer/autorouting/*_m.h
	$(Q)-rm -f networklayer/autorouting/ipv4/*_m.cc networklayer/autorouting/ipv4/*_m.h
	$(Q)-rm -f networklayer/autorouting/ipv6/*_m.cc networklayer/autorouting/ipv6/*_m.h
	$(Q)-rm -f networklayer/bgpv4/*_m.cc networklayer/bgpv4/*_m.h
	$(Q)-rm -f networklayer/bgpv4/BGPMessage/*_m.cc networklayer/bgpv4/BGPMessage/*_m.h
	$(Q)-rm -f networklayer/common/*_m.cc networklayer/common/*_m.h
	$(Q)-rm -f networklayer/contract/*_m.cc networklayer/contract/*_m.h
	$(Q)-rm -f networklayer/diffserv/*_m.cc networklayer/diffserv/*_m.h
	$(Q)-rm -f networklayer/icmpv6/*_m.cc networklayer/icmpv6/*_m.h
	$(Q)-rm -f networklayer/internetcloud/*_m.cc networklayer/internetcloud/*_m.h
	$(Q)-rm -f networklayer/ipv4/*_m.cc networklayer/ipv4/*_m.h
	$(Q)-rm -f networklayer/ipv6/*_m.cc networklayer/ipv6/*_m.h
	$(Q)-rm -f networklayer/ipv6tunneling/*_m.cc networklayer/ipv6tunneling/*_m.h
	$(Q)-rm -f networklayer/ldp/*_m.cc networklayer/ldp/*_m.h
	$(Q)-rm -f networklayer/manetrouting/*_m.cc networklayer/manetrouting/*_m.h
	$(Q)-rm -f networklayer/manetrouting/aodv-uu/*_m.cc networklayer/manetrouting/aodv-uu/*_m.h
	$(Q)-rm -f networklayer/manetrouting/aodv-uu/aodv-uu/*_m.cc networklayer/manetrouting/aodv-uu/aodv-uu/*_m.h
	$(Q)-rm -f networklayer/manetrouting/base/*_m.cc networklayer/manetrouting/base/*_m.h
	$(Q)-rm -f networklayer/manetrouting/batman/*_m.cc networklayer/manetrouting/batman/*_m.h
	$(Q)-rm -f networklayer/manetrouting/batman/batmand/*_m.cc networklayer/manetrouting/batman/batmand/*_m.h
	$(Q)-rm -f networklayer/manetrouting/batman/batmand/orig/*_m.cc networklayer/manetrouting/batman/batmand/orig/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dsdv/*_m.cc networklayer/manetrouting/dsdv/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dsr/*_m.cc networklayer/manetrouting/dsr/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dsr/dsr-uu/*_m.cc networklayer/manetrouting/dsr/dsr-uu/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo/*_m.cc networklayer/manetrouting/dymo/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo/dymoum/*_m.cc networklayer/manetrouting/dymo/dymoum/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo_fau/*_m.cc networklayer/manetrouting/dymo_fau/*_m.h
	$(Q)-rm -f networklayer/manetrouting/olsr/*_m.cc networklayer/manetrouting/olsr/*_m.h
	$(Q)-rm -f networklayer/mpls/*_m.cc networklayer/mpls/*_m.h
	$(Q)-rm -f networklayer/ospfv2/*_m.cc networklayer/ospfv2/*_m.h
	$(Q)-rm -f networklayer/ospfv2/interface/*_m.cc networklayer/ospfv2/interface/*_m.h
	$(Q)-rm -f networklayer/ospfv2/messagehandler/*_m.cc networklayer/ospfv2/messagehandler/*_m.h
	$(Q)-rm -f networklayer/ospfv2/neighbor/*_m.cc networklayer/ospfv2/neighbor/*_m.h
	$(Q)-rm -f networklayer/ospfv2/router/*_m.cc networklayer/ospfv2/router/*_m.h
	$(Q)-rm -f networklayer/routing/*_m.cc networklayer/routing/*_m.h
	$(Q)-rm -f networklayer/routing/aodv/*_m.cc networklayer/routing/aodv/*_m.h
	$(Q)-rm -f networklayer/routing/dymo/*_m.cc networklayer/routing/dymo/*_m.h
	$(Q)-rm -f networklayer/routing/gpsr/*_m.cc networklayer/routing/gpsr/*_m.h
	$(Q)-rm -f networklayer/routing/rip/*_m.cc networklayer/routing/rip/*_m.h
	$(Q)-rm -f networklayer/rsvp_te/*_m.cc networklayer/rsvp_te/*_m.h
	$(Q)-rm -f networklayer/ted/*_m.cc networklayer/ted/*_m.h
	$(Q)-rm -f networklayer/xmipv6/*_m.cc networklayer/xmipv6/*_m.h
	$(Q)-rm -f nodes/*_m.cc nodes/*_m.h
	$(Q)-rm -f nodes/aodv/*_m.cc nodes/aodv/*_m.h
	$(Q)-rm -f nodes/bgp/*_m.cc nodes/bgp/*_m.h
	$(Q)-rm -f nodes/dymo/*_m.cc nodes/dymo/*_m.h
	$(Q)-rm -f nodes/ethernet/*_m.cc nodes/ethernet/*_m.h
	$(Q)-rm -f nodes/gpsr/*_m.cc nodes/gpsr/*_m.h
	$(Q)-rm -f nodes/httptools/*_m.cc nodes/httptools/*_m.h
	$(Q)-rm -f nodes/inet/*_m.cc nodes/inet/*_m.h
	$(Q)-rm -f nodes/inet_sdn/*_m.cc nodes/inet_sdn/*_m.h
	$(Q)-rm -f nodes/inet_sdn/smartGrid/*_m.cc nodes/inet_sdn/smartGrid/*_m.h
	$(Q)-rm -f nodes/internetcloud/*_m.cc nodes/internetcloud/*_m.h
	$(Q)-rm -f nodes/ipv6/*_m.cc nodes/ipv6/*_m.h
	$(Q)-rm -f nodes/mpls/*_m.cc nodes/mpls/*_m.h
	$(Q)-rm -f nodes/ospfv2/*_m.cc nodes/ospfv2/*_m.h
	$(Q)-rm -f nodes/rip/*_m.cc nodes/rip/*_m.h
	$(Q)-rm -f nodes/rtp/*_m.cc nodes/rtp/*_m.h
	$(Q)-rm -f nodes/wireless/*_m.cc nodes/wireless/*_m.h
	$(Q)-rm -f nodes/xmipv6/*_m.cc nodes/xmipv6/*_m.h
	$(Q)-rm -f ofomnet/*_m.cc ofomnet/*_m.h
	$(Q)-rm -f ofomnet/openflow/*_m.cc ofomnet/openflow/*_m.h
	$(Q)-rm -f ofomnet/openflow/apps/*_m.cc ofomnet/openflow/apps/*_m.h
	$(Q)-rm -f ofomnet/openflow/attackDetection/*_m.cc ofomnet/openflow/attackDetection/*_m.h
	$(Q)-rm -f ofomnet/openflow/attackDetection/methods/*_m.cc ofomnet/openflow/attackDetection/methods/*_m.h
	$(Q)-rm -f ofomnet/openflow/ctrlApps/*_m.cc ofomnet/openflow/ctrlApps/*_m.h
	$(Q)-rm -f ofomnet/openflow/images/*_m.cc ofomnet/openflow/images/*_m.h
	$(Q)-rm -f ofomnet/openflow/messages/*_m.cc ofomnet/openflow/messages/*_m.h
	$(Q)-rm -f ofomnet/openflow/mitigation/*_m.cc ofomnet/openflow/mitigation/*_m.h
	$(Q)-rm -f ofomnet/openflow/nodes/*_m.cc ofomnet/openflow/nodes/*_m.h
	$(Q)-rm -f ofomnet/openflow/scenarios/*_m.cc ofomnet/openflow/scenarios/*_m.h
	$(Q)-rm -f ofomnet/openflow/scenarios/results/*_m.cc ofomnet/openflow/scenarios/results/*_m.h
	$(Q)-rm -f ofomnet/openflow/scenarios/results/szenario_Domains.ini/*_m.cc ofomnet/openflow/scenarios/results/szenario_Domains.ini/*_m.h
	$(Q)-rm -f ofomnet/openflow/scenarios/results/szenario_Domains_multiController.ini/*_m.cc ofomnet/openflow/scenarios/results/szenario_Domains_multiController.ini/*_m.h
	$(Q)-rm -f ofomnet/openflow/utility/*_m.cc ofomnet/openflow/utility/*_m.h
	$(Q)-rm -f parser/*_m.cc parser/*_m.h
	$(Q)-rm -f status/*_m.cc status/*_m.h
	$(Q)-rm -f transport/*_m.cc transport/*_m.h
	$(Q)-rm -f transport/contract/*_m.cc transport/contract/*_m.h
	$(Q)-rm -f transport/rtp/*_m.cc transport/rtp/*_m.h
	$(Q)-rm -f transport/rtp/profiles/*_m.cc transport/rtp/profiles/*_m.h
	$(Q)-rm -f transport/rtp/profiles/avprofile/*_m.cc transport/rtp/profiles/avprofile/*_m.h
	$(Q)-rm -f transport/sctp/*_m.cc transport/sctp/*_m.h
	$(Q)-rm -f transport/tcp/*_m.cc transport/tcp/*_m.h
	$(Q)-rm -f transport/tcp/flavours/*_m.cc transport/tcp/flavours/*_m.h
	$(Q)-rm -f transport/tcp/queues/*_m.cc transport/tcp/queues/*_m.h
	$(Q)-rm -f transport/tcp_common/*_m.cc transport/tcp_common/*_m.h
	$(Q)-rm -f transport/udp/*_m.cc transport/udp/*_m.h
	$(Q)-rm -f util/*_m.cc util/*_m.h
	$(Q)-rm -f util/headerserializers/*_m.cc util/headerserializers/*_m.h
	$(Q)-rm -f util/headerserializers/headers/*_m.cc util/headerserializers/headers/*_m.h
	$(Q)-rm -f util/headerserializers/ipv4/*_m.cc util/headerserializers/ipv4/*_m.h
	$(Q)-rm -f util/headerserializers/ipv4/headers/*_m.cc util/headerserializers/ipv4/headers/*_m.h
	$(Q)-rm -f util/headerserializers/ipv6/*_m.cc util/headerserializers/ipv6/*_m.h
	$(Q)-rm -f util/headerserializers/ipv6/headers/*_m.cc util/headerserializers/ipv6/headers/*_m.h
	$(Q)-rm -f util/headerserializers/sctp/*_m.cc util/headerserializers/sctp/*_m.h
	$(Q)-rm -f util/headerserializers/sctp/headers/*_m.cc util/headerserializers/sctp/headers/*_m.h
	$(Q)-rm -f util/headerserializers/tcp/*_m.cc util/headerserializers/tcp/*_m.h
	$(Q)-rm -f util/headerserializers/tcp/headers/*_m.cc util/headerserializers/tcp/headers/*_m.h
	$(Q)-rm -f util/headerserializers/udp/*_m.cc util/headerserializers/udp/*_m.h
	$(Q)-rm -f util/headerserializers/udp/headers/*_m.cc util/headerserializers/udp/headers/*_m.h
	$(Q)-rm -f util/messageprinters/*_m.cc util/messageprinters/*_m.h
	$(Q)-rm -f util/seapputils/*_m.cc util/seapputils/*_m.h
	$(Q)-rm -f variable/*_m.cc variable/*_m.h
	$(Q)-rm -f world/*_m.cc world/*_m.h
	$(Q)-rm -f world/annotations/*_m.cc world/annotations/*_m.h
	$(Q)-rm -f world/httptools/*_m.cc world/httptools/*_m.h
	$(Q)-rm -f world/obstacles/*_m.cc world/obstacles/*_m.h
	$(Q)-rm -f world/radio/*_m.cc world/radio/*_m.h
	$(Q)-rm -f world/scenario/*_m.cc world/scenario/*_m.h
	$(Q)-rm -f world/traci/*_m.cc world/traci/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc actions/*.cc actions/actionbase/*.cc actions/change/*.cc actions/clone/*.cc actions/create/*.cc actions/destroy/*.cc actions/disable/*.cc actions/disable/nodeRelease/*.cc actions/drop/*.cc actions/move/*.cc actions/put/*.cc actions/retrieve/*.cc actions/seappexpression/*.cc actions/send/*.cc applications/*.cc applications/common/*.cc applications/dhcp/*.cc applications/ethernet/*.cc applications/generic/*.cc applications/httptools/*.cc applications/inet_sdn/*.cc applications/inet_sdn/smartGrid/*.cc applications/netperfmeter/*.cc applications/pingapp/*.cc applications/rtpapp/*.cc applications/sctpapp/*.cc applications/tcpapp/*.cc applications/traci/*.cc applications/trafficlightapp/*.cc applications/udpapp/*.cc applications/voip/*.cc attacks/*.cc attacks/attackbase/*.cc attacks/attackentry/*.cc attacks/conditionalattack/*.cc attacks/conditionalattack/conditionalattack/*.cc attacks/conditionalattack/packetfilter/*.cc attacks/physicalattack/*.cc attacks/unconditionalattack/*.cc base/*.cc battery/*.cc battery/models/*.cc exmachina/*.cc globalfilter/*.cc globalfilter/putmessages/*.cc linklayer/*.cc linklayer/common/*.cc linklayer/configurator/*.cc linklayer/contract/*.cc linklayer/ethernet/*.cc linklayer/ethernet/switch/*.cc linklayer/ext/*.cc linklayer/idealwireless/*.cc linklayer/ieee80211/*.cc linklayer/ieee80211/mac/*.cc linklayer/ieee80211/mgmt/*.cc linklayer/ieee80211/radio/*.cc linklayer/ieee80211/radio/errormodel/*.cc linklayer/ieee8021d/*.cc linklayer/ieee8021d/common/*.cc linklayer/ieee8021d/relay/*.cc linklayer/ieee8021d/rstp/*.cc linklayer/ieee8021d/stp/*.cc linklayer/ieee8021d/tester/*.cc linklayer/loopback/*.cc linklayer/ppp/*.cc linklayer/queue/*.cc linklayer/radio/*.cc linklayer/radio/propagation/*.cc localfilter/*.cc mobility/*.cc mobility/common/*.cc mobility/contract/*.cc mobility/group/*.cc mobility/single/*.cc mobility/static/*.cc networklayer/*.cc networklayer/arp/*.cc networklayer/autorouting/*.cc networklayer/autorouting/ipv4/*.cc networklayer/autorouting/ipv6/*.cc networklayer/bgpv4/*.cc networklayer/bgpv4/BGPMessage/*.cc networklayer/common/*.cc networklayer/contract/*.cc networklayer/diffserv/*.cc networklayer/icmpv6/*.cc networklayer/internetcloud/*.cc networklayer/ipv4/*.cc networklayer/ipv6/*.cc networklayer/ipv6tunneling/*.cc networklayer/ldp/*.cc networklayer/manetrouting/*.cc networklayer/manetrouting/aodv-uu/*.cc networklayer/manetrouting/aodv-uu/aodv-uu/*.cc networklayer/manetrouting/base/*.cc networklayer/manetrouting/batman/*.cc networklayer/manetrouting/batman/batmand/*.cc networklayer/manetrouting/batman/batmand/orig/*.cc networklayer/manetrouting/dsdv/*.cc networklayer/manetrouting/dsr/*.cc networklayer/manetrouting/dsr/dsr-uu/*.cc networklayer/manetrouting/dymo/*.cc networklayer/manetrouting/dymo/dymoum/*.cc networklayer/manetrouting/dymo_fau/*.cc networklayer/manetrouting/olsr/*.cc networklayer/mpls/*.cc networklayer/ospfv2/*.cc networklayer/ospfv2/interface/*.cc networklayer/ospfv2/messagehandler/*.cc networklayer/ospfv2/neighbor/*.cc networklayer/ospfv2/router/*.cc networklayer/routing/*.cc networklayer/routing/aodv/*.cc networklayer/routing/dymo/*.cc networklayer/routing/gpsr/*.cc networklayer/routing/rip/*.cc networklayer/rsvp_te/*.cc networklayer/ted/*.cc networklayer/xmipv6/*.cc nodes/*.cc nodes/aodv/*.cc nodes/bgp/*.cc nodes/dymo/*.cc nodes/ethernet/*.cc nodes/gpsr/*.cc nodes/httptools/*.cc nodes/inet/*.cc nodes/inet_sdn/*.cc nodes/inet_sdn/smartGrid/*.cc nodes/internetcloud/*.cc nodes/ipv6/*.cc nodes/mpls/*.cc nodes/ospfv2/*.cc nodes/rip/*.cc nodes/rtp/*.cc nodes/wireless/*.cc nodes/xmipv6/*.cc ofomnet/*.cc ofomnet/openflow/*.cc ofomnet/openflow/apps/*.cc ofomnet/openflow/attackDetection/*.cc ofomnet/openflow/attackDetection/methods/*.cc ofomnet/openflow/ctrlApps/*.cc ofomnet/openflow/images/*.cc ofomnet/openflow/messages/*.cc ofomnet/openflow/mitigation/*.cc ofomnet/openflow/nodes/*.cc ofomnet/openflow/scenarios/*.cc ofomnet/openflow/scenarios/results/*.cc ofomnet/openflow/scenarios/results/szenario_Domains.ini/*.cc ofomnet/openflow/scenarios/results/szenario_Domains_multiController.ini/*.cc ofomnet/openflow/utility/*.cc parser/*.cc status/*.cc transport/*.cc transport/contract/*.cc transport/rtp/*.cc transport/rtp/profiles/*.cc transport/rtp/profiles/avprofile/*.cc transport/sctp/*.cc transport/tcp/*.cc transport/tcp/flavours/*.cc transport/tcp/queues/*.cc transport/tcp_common/*.cc transport/udp/*.cc util/*.cc util/headerserializers/*.cc util/headerserializers/headers/*.cc util/headerserializers/ipv4/*.cc util/headerserializers/ipv4/headers/*.cc util/headerserializers/ipv6/*.cc util/headerserializers/ipv6/headers/*.cc util/headerserializers/sctp/*.cc util/headerserializers/sctp/headers/*.cc util/headerserializers/tcp/*.cc util/headerserializers/tcp/headers/*.cc util/headerserializers/udp/*.cc util/headerserializers/udp/headers/*.cc util/messageprinters/*.cc util/seapputils/*.cc variable/*.cc world/*.cc world/annotations/*.cc world/httptools/*.cc world/obstacles/*.cc world/radio/*.cc world/scenario/*.cc world/traci/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/actions/actionbase/ActionBase.o: actions/actionbase/ActionBase.cc \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h \
  base/Compat.h
$O/actions/change/Change.o: actions/change/Change.cc \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/InterfaceEntry.h \
  actions/actionbase/ActionBase.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  util/seapputils/seapputils.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/ModuleAccess.h \
  linklayer/ethernet/Ethernet.h \
  transport/contract/UDPControlInfo_m.h \
  linklayer/radio/AirFrame_m.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/contract/UDPControlInfo.h \
  actions/change/Change.h \
  networklayer/contract/IPv6Address.h \
  base/Coord.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  linklayer/ppp/PPPFrame_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  transport/contract/TCPCommand_m.h \
  linklayer/radio/IdealAirFrame_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/radio/ModulationType.h
$O/actions/clone/Clone.o: actions/clone/Clone.cc \
  util/seapputils/seapputils.h \
  base/Compat.h \
  actions/actionbase/ActionBase.h \
  actions/clone/Clone.h \
  networklayer/contract/IPv4Address.h \
  base/INETDefs.h
$O/actions/create/Create.o: actions/create/Create.cc \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/contract/UDPControlInfo_m.h \
  linklayer/radio/AirFrame_m.h \
  base/ByteArray_m.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  applications/inet_sdn/smartGrid/MeasurementData_m.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  actions/actionbase/ActionBase.h \
  linklayer/ethernet/Ethernet.h \
  util/seapputils/seapputils.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/Compat.h \
  applications/inet_sdn/ApplicationPacket_m.h \
  linklayer/radio/IdealAirFrame_m.h \
  actions/create/Create.h \
  transport/udp/UDPPacket_m.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp_common/TCPSegment.h \
  linklayer/radio/ModulationType.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/Coord.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  linklayer/ppp/PPPFrame_m.h \
  applications/inet_sdn/SendApplicationPacket_m.h \
  util/FWMath.h
$O/actions/destroy/Destroy.o: actions/destroy/Destroy.cc \
  base/INETDefs.h \
  attacks/conditionalattack/conditionalattack/ConditionalAttack.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  variable/Variable.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h \
  localfilter/LocalFilter.h \
  base/Compat.h \
  actions/actionbase/ActionBase.h \
  actions/destroy/Destroy.h \
  attacks/attackbase/AttackBase.h
$O/actions/disable/Disable.o: actions/disable/Disable.cc \
  actions/actionbase/ActionBase.h \
  base/Compat.h \
  actions/disable/nodeRelease/NodeRelease.h \
  actions/disable/Disable.h \
  base/INETDefs.h
$O/actions/disable/nodeRelease/NodeRelease.o: actions/disable/nodeRelease/NodeRelease.cc \
  actions/disable/nodeRelease/NodeRelease.h
$O/actions/drop/Drop.o: actions/drop/Drop.cc \
  actions/actionbase/ActionBase.h \
  base/Compat.h \
  actions/drop/Drop.h \
  base/INETDefs.h
$O/actions/move/Move.o: actions/move/Move.cc \
  actions/move/Move.h \
  base/Compat.h \
  base/ModuleAccess.h \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h \
  util/FWMath.h \
  base/Coord.h
$O/actions/put/Put.o: actions/put/Put.cc \
  actions/put/Put.h \
  globalfilter/putmessages/PutMessages.h \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h \
  base/Compat.h
$O/actions/retrieve/Retrieve.o: actions/retrieve/Retrieve.cc \
  actions/retrieve/Retrieve.h \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h \
  util/seapputils/seapputils.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  variable/Variable.h
$O/actions/seappexpression/SEAPPExpression.o: actions/seappexpression/SEAPPExpression.cc \
  variable/Variable.h \
  actions/actionbase/ActionBase.h \
  base/Compat.h \
  base/INETDefs.h \
  actions/seappexpression/SEAPPExpression.h
$O/actions/send/Send.o: actions/send/Send.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  util/seapputils/seapputils.h \
  actions/send/Send.h \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h
$O/applications/common/ApplicationBase.o: applications/common/ApplicationBase.cc \
  base/OperationalBase.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  applications/common/ApplicationBase.h \
  base/Compat.h \
  base/ILifecycle.h
$O/applications/dhcp/DHCPClient.o: applications/dhcp/DHCPClient.cc \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IRoutingTable.h \
  applications/dhcp/DHCPLease.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  applications/dhcp/DHCPMessage_m.h \
  base/ModuleAccess.h \
  networklayer/arp/ARP.h \
  base/Compat.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/arp/IARPCache.h \
  transport/contract/UDPSocket.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceEntry.h \
  applications/dhcp/DHCPClient.h
$O/applications/dhcp/DHCPServer.o: applications/dhcp/DHCPServer.cc \
  networklayer/common/InterfaceTable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  applications/dhcp/DHCPLease.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  networklayer/contract/IPv6Address.h \
  base/LifecycleOperation.h \
  applications/dhcp/DHCPServer.h \
  transport/contract/UDPControlInfo_m.h \
  applications/dhcp/DHCPMessage_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/arp/ARP.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/arp/IARPCache.h \
  transport/contract/UDPSocket.h
$O/applications/ethernet/EtherAppCli.o: applications/ethernet/EtherAppCli.cc \
  status/NodeStatus.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  base/Compat.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  applications/ethernet/EtherApp_m.h \
  applications/ethernet/EtherAppCli.h \
  linklayer/contract/MACAddress.h
$O/applications/ethernet/EtherAppSrv.o: applications/ethernet/EtherAppSrv.cc \
  base/LifecycleOperation.h \
  applications/ethernet/EtherAppSrv.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/INETDefs.h \
  base/ModuleAccess.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/Compat.h \
  applications/ethernet/EtherApp_m.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h
$O/applications/ethernet/EtherTrafGen.o: applications/ethernet/EtherTrafGen.cc \
  base/INETDefs.h \
  applications/ethernet/EtherTrafGen.h \
  status/NodeStatus.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  base/Compat.h \
  base/ModuleAccess.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/applications/ethernet/EthernetApplication.o: applications/ethernet/EthernetApplication.cc \
  base/INETDefs.h \
  base/Compat.h \
  applications/ethernet/EthernetApplication.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  applications/ethernet/EtherApp_m.h \
  linklayer/contract/MACAddress.h
$O/applications/generic/IPvXTrafGen.o: applications/generic/IPvXTrafGen.cc \
  status/NodeStatus.h \
  base/NodeOperations.h \
  networklayer/contract/IPv6Address.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  applications/generic/IPvXTrafSink.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/ILifecycle.h \
  base/Compat.h \
  base/ModuleAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPSocket.h \
  applications/generic/IPvXTrafGen.h \
  networklayer/contract/IPv6ControlInfo_m.h
$O/applications/generic/IPvXTrafSink.o: applications/generic/IPvXTrafSink.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  status/NodeStatus.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  applications/generic/IPvXTrafSink.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPSocket.h \
  applications/generic/IPvXTrafGen.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h
$O/applications/httptools/HttpBrowser.o: applications/httptools/HttpBrowser.cc \
  applications/httptools/HttpBrowser.h \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  transport/contract/TCPSocket.h \
  applications/httptools/HttpBrowserBase.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPSocketMap.h \
  applications/httptools/HttpRandom.h \
  networklayer/contract/IPv6Address.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpEventMessages_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpNodeBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpBrowserBase.o: applications/httptools/HttpBrowserBase.cc \
  base/Compat.h \
  applications/httptools/HttpBrowserBase.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpRandom.h \
  status/NodeStatus.h \
  base/LifecycleOperation.h \
  base/INETDefs.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpUtils.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h
$O/applications/httptools/HttpBrowserDirect.o: applications/httptools/HttpBrowserDirect.cc \
  base/LifecycleOperation.h \
  applications/httptools/HttpBrowserDirect.h \
  applications/httptools/HttpServerBase.h \
  applications/httptools/HttpEventMessages_m.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpNodeBase.h \
  base/INETDefs.h \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  applications/httptools/HttpBrowserBase.h \
  base/Compat.h \
  applications/httptools/HttpRandom.h
$O/applications/httptools/HttpNodeBase.o: applications/httptools/HttpNodeBase.cc \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  base/Compat.h \
  applications/httptools/HttpRandom.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpEventMessages_m.h \
  world/httptools/HttpController.h \
  base/INETDefs.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpRandom.o: applications/httptools/HttpRandom.cc \
  applications/httptools/HttpMessages_m.h \
  base/Compat.h \
  applications/httptools/HttpRandom.h \
  base/INETDefs.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpServer.o: applications/httptools/HttpServer.cc \
  base/ILifecycle.h \
  applications/httptools/HttpMessages_m.h \
  base/Compat.h \
  transport/contract/TCPSocket.h \
  applications/httptools/HttpServer.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPSocketMap.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpServerBase.h \
  networklayer/contract/IPv6Address.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpEventMessages_m.h \
  transport/contract/TCPCommand_m.h \
  applications/httptools/HttpNodeBase.h \
  base/INETDefs.h \
  applications/httptools/HttpUtils.h \
  networklayer/contract/IPvXAddress.h \
  world/httptools/HttpController.h
$O/applications/httptools/HttpServerBase.o: applications/httptools/HttpServerBase.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpServerBase.h \
  status/NodeStatus.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpNodeBase.h \
  base/INETDefs.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h
$O/applications/httptools/HttpServerDirect.o: applications/httptools/HttpServerDirect.cc \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpServerDirect.h \
  base/Compat.h \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  world/httptools/HttpController.h \
  base/INETDefs.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpEventMessages_m.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpServerBase.h
$O/applications/httptools/HttpServerDirectEvilA.o: applications/httptools/HttpServerDirectEvilA.cc \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpEventMessages_m.h \
  base/INETDefs.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpUtils.h \
  world/httptools/HttpController.h \
  base/ILifecycle.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpServerDirectEvilA.h \
  base/Compat.h \
  applications/httptools/HttpServerDirect.h \
  applications/httptools/HttpRandom.h
$O/applications/httptools/HttpServerDirectEvilB.o: applications/httptools/HttpServerDirectEvilB.cc \
  applications/httptools/HttpEventMessages_m.h \
  world/httptools/HttpController.h \
  base/INETDefs.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpUtils.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpServerBase.h \
  applications/httptools/HttpServerDirectEvilB.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  applications/httptools/HttpServerDirect.h \
  base/Compat.h
$O/applications/httptools/HttpServerEvilA.o: applications/httptools/HttpServerEvilA.cc \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  applications/httptools/HttpServerBase.h \
  applications/httptools/HttpServerEvilA.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  applications/httptools/HttpNodeBase.h \
  transport/contract/TCPCommand_m.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpServer.h \
  transport/contract/TCPSocket.h \
  base/Compat.h \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  transport/contract/TCPSocketMap.h \
  applications/httptools/HttpRandom.h \
  networklayer/contract/IPv4Address.h
$O/applications/httptools/HttpServerEvilB.o: applications/httptools/HttpServerEvilB.cc \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  applications/httptools/HttpServerBase.h \
  applications/httptools/HttpEventMessages_m.h \
  transport/contract/TCPCommand_m.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpUtils.h \
  networklayer/contract/IPvXAddress.h \
  applications/httptools/HttpNodeBase.h \
  base/INETDefs.h \
  applications/httptools/HttpMessages_m.h \
  base/ILifecycle.h \
  applications/httptools/HttpServer.h \
  transport/contract/TCPSocket.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPSocketMap.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpServerEvilB.h
$O/applications/httptools/HttpUtils.o: applications/httptools/HttpUtils.cc \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpMessages_m.h
$O/applications/inet_sdn/smartGrid/DSOApp.o: applications/inet_sdn/smartGrid/DSOApp.cc \
  networklayer/contract/IPv6Address.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  applications/inet_sdn/smartGrid/DSOApp.h \
  applications/inet_sdn/smartGrid/SetPoints_m.h \
  applications/inet_sdn/smartGrid/MonitoringData_m.h \
  transport/contract/TCPSocket.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  applications/inet_sdn/smartGrid/Record.h \
  transport/contract/TCPSocketMap.h
$O/applications/inet_sdn/smartGrid/IED.o: applications/inet_sdn/smartGrid/IED.cc \
  base/INETDefs.h \
  applications/inet_sdn/smartGrid/IED.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  util/seapputils/seapputils.h \
  applications/inet_sdn/smartGrid/MonitoringData_m.h \
  applications/inet_sdn/smartGrid/SetPoints_m.h
$O/applications/inet_sdn/smartGrid/RTUApp.o: applications/inet_sdn/smartGrid/RTUApp.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/TCPCommand_m.h \
  base/Compat.h \
  transport/contract/TCPSocket.h \
  applications/inet_sdn/smartGrid/MonitoringData_m.h \
  applications/inet_sdn/smartGrid/SetPoints_m.h \
  applications/inet_sdn/smartGrid/Record.h \
  networklayer/contract/IPv4Address.h \
  applications/inet_sdn/smartGrid/RTUApp.h
$O/applications/inet_sdn/smartGrid/Record.o: applications/inet_sdn/smartGrid/Record.cc \
  applications/inet_sdn/smartGrid/Record.h
$O/applications/inet_sdn/smartGrid/RecordedData.o: applications/inet_sdn/smartGrid/RecordedData.cc \
  applications/inet_sdn/smartGrid/RecordedData.h
$O/applications/inet_sdn/smartGrid/Report.o: applications/inet_sdn/smartGrid/Report.cc \
  applications/inet_sdn/smartGrid/Report.h
$O/applications/inet_sdn/smartGrid/SmartMeter.o: applications/inet_sdn/smartGrid/SmartMeter.cc \
  applications/inet_sdn/smartGrid/SmartMeter.h \
  base/Compat.h \
  util/seapputils/seapputils.h \
  applications/inet_sdn/smartGrid/MeasurementData_m.h \
  networklayer/contract/IPv4Address.h \
  base/INETDefs.h
$O/applications/netperfmeter/NetPerfMeter.o: applications/netperfmeter/NetPerfMeter.cc \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  applications/netperfmeter/NetPerfMeter_m.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/UDPSocket.h \
  transport/contract/SCTPSocket.h \
  base/Compat.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPQueue.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPAssociation.h \
  transport/contract/TCPSocket.h \
  transport/sctp/SCTPMessage_m.h \
  applications/netperfmeter/NetPerfMeter.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/contract/IPv6Address.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  transport/contract/SCTPCommand_m.h
$O/applications/pingapp/PingApp.o: applications/pingapp/PingApp.cc \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/ModuleAccess.h \
  base/Compat.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  networklayer/contract/IPProtocolId_m.h \
  applications/pingapp/PingApp.h \
  networklayer/contract/IPv4ControlInfo_m.h
$O/applications/pingapp/PingTestApp.o: applications/pingapp/PingTestApp.cc \
  applications/pingapp/PingPayload_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/LifecycleOperation.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  status/NodeStatus.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  applications/pingapp/PingTestApp.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/Compat.h
$O/applications/rtpapp/RTPApplication.o: applications/rtpapp/RTPApplication.cc \
  base/ILifecycle.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPInterfacePacket_m.h \
  status/NodeStatus.h \
  networklayer/contract/IPv6Address.h \
  base/LifecycleOperation.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  applications/rtpapp/RTPApplication.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/applications/sctpapp/SCTPClient.o: applications/sctpapp/SCTPClient.cc \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  base/INETDefs.h \
  transport/sctp/SCTPSendStream.h \
  status/NodeStatus.h \
  transport/sctp/SCTP.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  applications/sctpapp/SCTPClient.h \
  transport/contract/SCTPCommand_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceEntry.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/UDPSocket.h \
  transport/contract/SCTPSocket.h \
  base/Compat.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPAssociation.h
$O/applications/sctpapp/SCTPNatPeer.o: applications/sctpapp/SCTPNatPeer.cc \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPAssociation.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPMessage.h \
  base/Compat.h \
  transport/contract/SCTPSocket.h \
  transport/contract/UDPSocket.h \
  networklayer/common/InterfaceEntry.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPGapList.h \
  transport/sctp/SCTPReceiveStream.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPCommand_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTP.h \
  status/NodeStatus.h \
  applications/sctpapp/SCTPNatPeer.h \
  networklayer/common/InterfaceTable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddressResolver.h
$O/applications/sctpapp/SCTPNatServer.o: applications/sctpapp/SCTPNatServer.cc \
  transport/contract/UDPSocket.h \
  transport/contract/SCTPSocket.h \
  networklayer/common/InterfaceEntry.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPAssociation.h \
  base/Compat.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPNatTable.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTP.h \
  transport/contract/SCTPCommand_m.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  applications/sctpapp/SCTPNatServer.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  base/INETDefs.h
$O/applications/sctpapp/SCTPPeer.o: applications/sctpapp/SCTPPeer.cc \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPSendStream.h \
  status/NodeStatus.h \
  transport/sctp/SCTP.h \
  transport/contract/SCTPCommand_m.h \
  applications/sctpapp/SCTPPeer.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTable.h \
  base/INETDefs.h \
  transport/contract/UDPSocket.h \
  transport/contract/SCTPSocket.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPAssociation.h \
  base/Compat.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPMessage.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPGapList.h
$O/applications/sctpapp/SCTPServer.o: applications/sctpapp/SCTPServer.cc \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h \
  applications/sctpapp/SCTPServer.h \
  base/INotifiable.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  transport/contract/SCTPCommand_m.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  status/NodeStatus.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/contract/SCTPCommand.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  base/Compat.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPQueue.h \
  transport/contract/UDPSocket.h \
  transport/contract/SCTPSocket.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceEntry.h
$O/applications/tcpapp/TCPAppBase.o: applications/tcpapp/TCPAppBase.cc \
  transport/contract/TCPSocket.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  applications/tcpapp/TCPAppBase.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/applications/tcpapp/TCPBasicClientApp.o: applications/tcpapp/TCPBasicClientApp.cc \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  applications/tcpapp/GenericAppMsg_m.h \
  transport/contract/TCPCommand_m.h \
  applications/tcpapp/TCPBasicClientApp.h \
  status/NodeStatus.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  applications/tcpapp/TCPAppBase.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/ModuleAccess.h \
  transport/contract/TCPSocket.h \
  base/ILifecycle.h
$O/applications/tcpapp/TCPEchoApp.o: applications/tcpapp/TCPEchoApp.cc \
  base/ILifecycle.h \
  transport/contract/TCPSocket.h \
  base/ModuleAccess.h \
  base/Compat.h \
  applications/tcpapp/TCPEchoApp.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArrayMessage.h \
  base/ByteArray_m.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  status/NodeStatus.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArrayMessage_m.h \
  base/INETDefs.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h
$O/applications/tcpapp/TCPGenericSrvApp.o: applications/tcpapp/TCPGenericSrvApp.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/ModuleAccess.h \
  transport/contract/TCPSocket.h \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  applications/tcpapp/GenericAppMsg_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/TCPCommand_m.h \
  status/NodeStatus.h \
  base/LifecycleOperation.h \
  applications/tcpapp/TCPGenericSrvApp.h \
  networklayer/contract/IPv6Address.h
$O/applications/tcpapp/TCPGenericSrvThread.o: applications/tcpapp/TCPGenericSrvThread.cc \
  transport/contract/TCPSocket.h \
  base/Compat.h \
  base/ILifecycle.h \
  transport/contract/TCPSocketMap.h \
  networklayer/contract/IPv4Address.h \
  applications/tcpapp/TCPSrvHostApp.h \
  networklayer/contract/IPv6Address.h \
  applications/tcpapp/TCPGenericSrvThread.h \
  base/LifecycleOperation.h \
  applications/tcpapp/GenericAppMsg_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h
$O/applications/tcpapp/TCPSessionApp.o: applications/tcpapp/TCPSessionApp.cc \
  applications/tcpapp/TCPAppBase.h \
  base/ByteArray_m.h \
  networklayer/contract/IPv4Address.h \
  applications/tcpapp/TCPSessionApp.h \
  base/ByteArrayMessage.h \
  base/ModuleAccess.h \
  transport/contract/TCPSocket.h \
  base/Compat.h \
  base/ILifecycle.h \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArrayMessage_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  networklayer/contract/IPv6Address.h \
  status/NodeStatus.h
$O/applications/tcpapp/TCPSinkApp.o: applications/tcpapp/TCPSinkApp.cc \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  status/NodeStatus.h \
  applications/tcpapp/TCPSinkApp.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/ModuleAccess.h \
  transport/contract/TCPSocket.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h
$O/applications/tcpapp/TCPSrvHostApp.o: applications/tcpapp/TCPSrvHostApp.cc \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/LifecycleOperation.h \
  status/NodeStatus.h \
  applications/tcpapp/TCPSrvHostApp.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPSocketMap.h \
  base/ILifecycle.h \
  transport/contract/TCPSocket.h \
  base/ModuleAccess.h \
  base/Compat.h
$O/applications/tcpapp/TelnetApp.o: applications/tcpapp/TelnetApp.cc \
  base/ILifecycle.h \
  base/Compat.h \
  base/ModuleAccess.h \
  transport/contract/TCPSocket.h \
  applications/tcpapp/TelnetApp.h \
  networklayer/contract/IPv4Address.h \
  applications/tcpapp/TCPAppBase.h \
  status/NodeStatus.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  applications/tcpapp/GenericAppMsg_m.h
$O/applications/traci/TraCIDemo.o: applications/traci/TraCIDemo.cc \
  base/ModuleAccess.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  mobility/contract/IMobility.h \
  mobility/common/MobilityBase.h \
  base/ILifecycle.h \
  ./applications/traci/TraCIDemo.h \
  networklayer/contract/IPv4Address.h \
  util/FWMath.h \
  base/LifecycleOperation.h \
  base/Coord.h \
  networklayer/contract/IPv6Address.h \
  status/NodeStatus.h \
  ./mobility/single/TraCIMobility.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  ./world/traci/TraCIScenarioManager.h
$O/applications/traci/TraCITestApp.o: applications/traci/TraCITestApp.cc \
  base/INETDefs.h \
  ./world/traci/TraCIScenarioManager.h \
  util/FWMath.h \
  base/LifecycleOperation.h \
  base/Coord.h \
  status/NodeStatus.h \
  ./mobility/single/TraCIMobility.h \
  ./applications/traci/TraCITestApp.h \
  base/ModuleAccess.h \
  base/Compat.h \
  mobility/contract/IMobility.h \
  mobility/common/MobilityBase.h \
  base/ILifecycle.h
$O/applications/trafficlightapp/CommandNodeBasicApp.o: applications/trafficlightapp/CommandNodeBasicApp.cc \
  networklayer/common/InterfaceTableAccess.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  applications/trafficlightapp/CommandNodeBasicApp.h \
  transport/contract/UDPControlInfo_m.h \
  base/ModuleAccess.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  applications/common/ApplicationBase.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/LifecycleOperation.h \
  base/OperationalBase.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h
$O/applications/trafficlightapp/CommandNodeSinkApp.o: applications/trafficlightapp/CommandNodeSinkApp.cc \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  base/OperationalBase.h \
  base/NodeOperations.h \
  applications/common/ApplicationBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/UDPControlInfo_m.h \
  applications/trafficlightapp/CommandNodeSinkApp.h \
  applications/trafficlightapp/TrafficLightPacket_m.h
$O/applications/trafficlightapp/TrafficLightBasicApp.o: applications/trafficlightapp/TrafficLightBasicApp.cc \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  applications/common/ApplicationBase.h \
  base/NotifierConsts.h \
  base/OperationalBase.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  applications/trafficlightapp/TrafficLightBasicApp.h \
  linklayer/contract/MACAddress.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/UDPSocket.h
$O/applications/trafficlightapp/TrafficLightSinkApp.o: applications/trafficlightapp/TrafficLightSinkApp.cc \
  applications/common/ApplicationBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  base/OperationalBase.h \
  networklayer/contract/IPv6Address.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/UDPControlInfo_m.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  applications/trafficlightapp/TrafficLightSinkApp.h \
  base/Compat.h
$O/applications/trafficlightapp/TrafficLightUpdateStatusApp.o: applications/trafficlightapp/TrafficLightUpdateStatusApp.cc \
  base/INETDefs.h \
  applications/trafficlightapp/TrafficLightUpdateStatusApp.h \
  base/Compat.h
$O/applications/udpapp/UDPBasicApp.o: applications/udpapp/UDPBasicApp.cc \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  applications/common/ApplicationBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/OperationalBase.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  applications/inet_sdn/SendApplicationPacket_m.h \
  base/NotifierConsts.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/UDPSocket.h \
  base/Compat.h \
  applications/udpapp/UDPBasicApp.h \
  base/ModuleAccess.h
$O/applications/udpapp/UDPBasicBurst.o: applications/udpapp/UDPBasicBurst.cc \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  base/Compat.h \
  networklayer/ipv6/RoutingTable6.h \
  applications/udpapp/UDPBasicBurst.h \
  base/ModuleAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/INotifiable.h \
  networklayer/ipv6/RoutingTable6Access.h \
  applications/common/ApplicationBase.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  base/OperationalBase.h \
  base/NodeOperations.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h
$O/applications/udpapp/UDPEchoApp.o: applications/udpapp/UDPEchoApp.cc \
  applications/udpapp/UDPEchoApp.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  applications/common/ApplicationBase.h \
  base/OperationalBase.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/UDPControlInfo_m.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h
$O/applications/udpapp/UDPSink.o: applications/udpapp/UDPSink.cc \
  applications/common/ApplicationBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/OperationalBase.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  base/Compat.h \
  applications/udpapp/UDPSink.h
$O/applications/udpapp/UDPVideoStreamCli.o: applications/udpapp/UDPVideoStreamCli.cc \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  applications/common/ApplicationBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  applications/udpapp/UDPVideoStreamCli.h \
  base/OperationalBase.h \
  networklayer/contract/IPv6Address.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h
$O/applications/udpapp/UDPVideoStreamSvr.o: applications/udpapp/UDPVideoStreamSvr.cc \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  applications/udpapp/UDPVideoStreamSvr.h \
  base/Compat.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  applications/common/ApplicationBase.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  base/OperationalBase.h \
  base/NodeOperations.h
$O/applications/voip/SimpleVoIPReceiver.o: applications/voip/SimpleVoIPReceiver.cc \
  base/ModuleAccess.h \
  base/Compat.h \
  applications/voip/SimpleVoIPReceiver.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6Address.h \
  base/LifecycleOperation.h \
  status/NodeStatus.h \
  applications/voip/SimpleVoIPPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h
$O/applications/voip/SimpleVoIPSender.o: applications/voip/SimpleVoIPSender.cc \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  status/NodeStatus.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  applications/voip/SimpleVoIPPacket_m.h \
  base/INETDefs.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  applications/voip/SimpleVoIPSender.h
$O/attacks/attackbase/AttackBase.o: attacks/attackbase/AttackBase.cc \
  base/INETDefs.h \
  variable/Variable.h \
  base/Compat.h \
  actions/actionbase/ActionBase.h \
  attacks/attackbase/AttackBase.h
$O/attacks/attackentry/AttackEntry.o: attacks/attackentry/AttackEntry.cc \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h \
  attacks/attackbase/AttackBase.h \
  base/Compat.h \
  attacks/attackentry/AttackEntry.h \
  variable/Variable.h
$O/attacks/conditionalattack/conditionalattack/ConditionalAttack.o: attacks/conditionalattack/conditionalattack/ConditionalAttack.cc \
  actions/change/Change.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  attacks/conditionalattack/conditionalattack/ConditionalAttack.h \
  actions/put/Put.h \
  actions/seappexpression/SEAPPExpression.h \
  actions/create/Create.h \
  globalfilter/putmessages/PutMessages.h \
  actions/retrieve/Retrieve.h \
  actions/drop/Drop.h \
  base/INETDefs.h \
  attacks/attackbase/AttackBase.h \
  actions/actionbase/ActionBase.h \
  util/seapputils/seapputils.h \
  actions/send/Send.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  actions/clone/Clone.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h \
  variable/Variable.h
$O/attacks/conditionalattack/packetfilter/CompoundBlock.o: attacks/conditionalattack/packetfilter/CompoundBlock.cc \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  base/INETDefs.h \
  util/seapputils/seapputils.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  attacks/conditionalattack/packetfilter/CompoundBlock.h
$O/attacks/conditionalattack/packetfilter/ElementaryBlock.o: attacks/conditionalattack/packetfilter/ElementaryBlock.cc \
  base/INETDefs.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ethernet/EtherFrame.h \
  attacks/conditionalattack/packetfilter/ElementaryBlock.h \
  base/Compat.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  util/seapputils/seapputils.h \
  linklayer/ethernet/Ethernet.h
$O/attacks/conditionalattack/packetfilter/FilterBlock.o: attacks/conditionalattack/packetfilter/FilterBlock.cc \
  attacks/conditionalattack/packetfilter/FilterBlock.h
$O/attacks/conditionalattack/packetfilter/PacketFilter.o: attacks/conditionalattack/packetfilter/PacketFilter.cc \
  attacks/conditionalattack/packetfilter/ElementaryBlock.h \
  util/seapputils/seapputils.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  attacks/conditionalattack/packetfilter/CompoundBlock.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  base/INETDefs.h
$O/attacks/physicalattack/PhysicalAttack.o: attacks/physicalattack/PhysicalAttack.cc \
  attacks/physicalattack/PhysicalAttack.h \
  base/Coord.h \
  actions/disable/Disable.h \
  util/FWMath.h \
  base/INETDefs.h \
  actions/destroy/Destroy.h \
  actions/actionbase/ActionBase.h \
  attacks/attackbase/AttackBase.h \
  base/Compat.h \
  variable/Variable.h \
  actions/disable/nodeRelease/NodeRelease.h \
  actions/move/Move.h
$O/attacks/unconditionalattack/UnconditionalAttack.o: attacks/unconditionalattack/UnconditionalAttack.cc \
  actions/drop/Drop.h \
  base/INETDefs.h \
  actions/create/Create.h \
  globalfilter/putmessages/PutMessages.h \
  actions/retrieve/Retrieve.h \
  actions/put/Put.h \
  actions/seappexpression/SEAPPExpression.h \
  actions/change/Change.h \
  actions/clone/Clone.h \
  variable/Variable.h \
  attacks/unconditionalattack/UnconditionalAttack.h \
  networklayer/contract/IPv4Address.h \
  util/seapputils/seapputils.h \
  base/Compat.h \
  attacks/attackbase/AttackBase.h \
  actions/actionbase/ActionBase.h
$O/base/AbstractQueue.o: base/AbstractQueue.cc \
  base/INETDefs.h \
  base/AbstractQueue.h \
  base/Compat.h
$O/base/BasicModule.o: base/BasicModule.cc \
  base/BasicModule.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/INotifiable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h
$O/base/ByteArray.o: base/ByteArray.cc \
  base/Compat.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  base/INETDefs.h
$O/base/ByteArrayBuffer.o: base/ByteArrayBuffer.cc \
  base/ByteArray.h \
  base/INETDefs.h \
  base/Compat.h \
  base/ByteArrayBuffer.h \
  base/ByteArray_m.h
$O/base/ByteArrayMessage.o: base/ByteArrayMessage.cc \
  base/Compat.h \
  base/ByteArrayMessage.h \
  base/ByteArray_m.h \
  base/ByteArrayMessage_m.h \
  base/ByteArray.h \
  base/INETDefs.h
$O/base/Compat.o: base/Compat.cc \
  base/Compat.h
$O/base/Coord.o: base/Coord.cc \
  base/Compat.h \
  base/INETDefs.h \
  base/Coord.h \
  util/FWMath.h
$O/base/InterfaceOperations.o: base/InterfaceOperations.cc
$O/base/Join.o: base/Join.cc \
  base/INETDefs.h \
  base/Compat.h
$O/base/LifecycleController.o: base/LifecycleController.cc \
  base/NotifierConsts.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  base/Compat.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceEntry.h \
  base/LifecycleController.h \
  base/IScriptable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h
$O/base/ModuleAccess.o: base/ModuleAccess.cc \
  base/INETDefs.h \
  base/ModuleAccess.h \
  base/Compat.h
$O/base/NedFunctions.o: base/NedFunctions.cc \
  base/Compat.h \
  base/INETDefs.h
$O/base/NodeOperations.o: base/NodeOperations.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  base/INETDefs.h
$O/base/NotificationBoard.o: base/NotificationBoard.cc \
  base/ModuleAccess.h \
  base/Compat.h \
  base/INotifiable.h \
  base/INETDefs.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h
$O/base/NotifierConsts.o: base/NotifierConsts.cc \
  base/Compat.h \
  base/NotifierConsts.h \
  base/INETDefs.h
$O/base/OperationalBase.o: base/OperationalBase.cc \
  base/ILifecycle.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/INETDefs.h \
  base/NodeOperations.h \
  base/OperationalBase.h \
  base/LifecycleOperation.h \
  status/NodeStatus.h
$O/base/PassiveQueueBase.o: base/PassiveQueueBase.cc \
  base/INETDefs.h \
  base/PassiveQueueBase.h \
  base/IPassiveQueue.h \
  base/Compat.h
$O/base/ProtocolMap.o: base/ProtocolMap.cc \
  base/ProtocolMap.h \
  base/Compat.h \
  base/INETDefs.h
$O/base/QueueBase.o: base/QueueBase.cc \
  base/AbstractQueue.h \
  base/Compat.h \
  base/INETDefs.h \
  base/QueueBase.h
$O/base/ReassemblyBuffer.o: base/ReassemblyBuffer.cc \
  base/Compat.h \
  base/ReassemblyBuffer.h \
  base/INETDefs.h
$O/base/ResultFilters.o: base/ResultFilters.cc \
  base/INETDefs.h \
  util/FWMath.h \
  base/Coord.h \
  base/Compat.h \
  base/ResultFilters.h \
  mobility/contract/IMobility.h
$O/base/Sink.o: base/Sink.cc \
  base/Compat.h \
  base/Sink.h \
  base/INETDefs.h
$O/base/Topology.o: base/Topology.cc \
  base/Topology.h \
  base/Compat.h \
  util/stlutils.h \
  base/INETDefs.h \
  util/PatternMatcher.h
$O/base/UnimplementedModule.o: base/UnimplementedModule.cc \
  base/UnimplementedModule.h \
  base/INETDefs.h \
  base/Compat.h
$O/base/erfc.o: base/erfc.cc \
  base/Compat.h \
  base/INETDefs.h
$O/battery/models/BasicBattery.o: battery/models/BasicBattery.cc \
  base/INETDefs.h \
  base/INotifiable.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/Compat.h \
  base/ModuleAccess.h \
  battery/models/BasicBattery.h
$O/battery/models/InetSimpleBattery.o: battery/models/InetSimpleBattery.cc \
  battery/models/InetSimpleBattery.h \
  base/ModuleAccess.h \
  battery/models/BasicBattery.h \
  linklayer/contract/RadioState.h \
  base/Compat.h \
  battery/models/Energy.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  base/INETDefs.h
$O/exmachina/ExMachina.o: exmachina/ExMachina.cc \
  base/INETDefs.h \
  attacks/physicalattack/PhysicalAttack.h \
  exmachina/ExMachina.h \
  variable/Variable.h \
  attacks/attackentry/AttackEntry.h \
  base/Compat.h \
  attacks/attackbase/AttackBase.h \
  actions/actionbase/ActionBase.h
$O/globalfilter/GlobalFilter.o: globalfilter/GlobalFilter.cc \
  /usr/include/libxml++-2.6/libxml++/nodes/entityreference.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/exception.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  /usr/include/libxml++-2.6/libxml++/validators/dtdvalidator.h \
  /usr/include/glib-2.0/glib/gshell.h \
  /usr/lib/x86_64-linux-gnu/glibmm-2.4/include/glibmmconfig.h \
  /usr/lib/x86_64-linux-gnu/glib-2.0/include/glibconfig.h \
  /usr/include/glib-2.0/glib/deprecated/gcompletion.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  /usr/include/libxml++-2.6/libxml++/document.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib/ghook.h \
  /usr/include/libxml++-2.6/libxml++/attributenode.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/gmem.h \
  /usr/include/glib-2.0/glib/gthread.h \
  attacks/unconditionalattack/UnconditionalAttack.h \
  /usr/include/glib-2.0/glib/gurifuncs.h \
  /usr/lib/x86_64-linux-gnu/libxml++-2.6/include/libxml++config.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  globalfilter/GlobalFilter.h \
  /usr/include/glib-2.0/glib/gtrashstack.h \
  /usr/include/glib-2.0/glib/glib-autocleanups.h \
  /usr/include/glib-2.0/glib/garray.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/Topology.h \
  util/seapputils/seapputils.h \
  /usr/include/glib-2.0/glib/ghmac.h \
  /usr/include/glibmm-2.4/glibmm/ustring.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  /usr/include/glib-2.0/glib/gtree.h \
  /usr/include/libxml++-2.6/libxml++/validators/validator.h \
  util/PatternMatcher.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  /usr/include/libxml++-2.6/libxml++/xsdschema.h \
  /usr/include/glib-2.0/glib/gcharset.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  globalfilter/putmessages/PutMessages.h \
  /usr/include/glib-2.0/glib/gversionmacros.h \
  /usr/include/glib-2.0/glib/genviron.h \
  /usr/include/libxml++-2.6/libxml++/noncopyable.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/validity_error.h \
  networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
  /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/glib-2.0/glib.h \
  /usr/include/glib-2.0/glib/gvariant.h \
  /usr/include/libxml++-2.6/libxml++/parsers/parser.h \
  base/NotificationBoard.h \
  /usr/include/libxml++-2.6/libxml++/nodes/contentnode.h \
  networklayer/ipv4/IPv4Route.h \
  /usr/include/glib-2.0/glib/gvarianttype.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/internal_error.h \
  /usr/include/libxml++-2.6/libxml++/dtd.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/glib-2.0/glib/gdate.h \
  /usr/include/libxml++-2.6/libxml++/nodes/textnode.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/glib-2.0/glib/gspawn.h \
  variable/Variable.h \
  /usr/include/glibmm-2.4/glibmm/unicode.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entitydeclaration.h \
  /usr/include/libxml++-2.6/libxml++/schemabase.h \
  networklayer/common/IInterfaceTable.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/glib-2.0/glib/gstringchunk.h \
  /usr/include/glib-2.0/glib/gqueue.h \
  /usr/include/glib-2.0/glib/gtimezone.h \
  /usr/include/glib-2.0/glib/deprecated/grel.h \
  attacks/attackentry/AttackEntry.h \
  /usr/include/glib-2.0/glib/goption.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  networklayer/contract/IPvXAddressResolver.h \
  /usr/include/glib-2.0/glib/deprecated/gthread.h \
  networklayer/contract/IPvXAddress.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/libxml++-2.6/libxml++/nodes/cdatanode.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidatorbase.h \
  /usr/include/libxml++-2.6/libxml++/nodes/element.h \
  /usr/include/libxml++-2.6/libxml++/validators/xsdvalidator.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/glib-2.0/glib/deprecated/gallocator.h \
  /usr/include/glib-2.0/glib/grand.h \
  /usr/include/libxml++-2.6/libxml++/relaxngschema.h \
  /usr/include/glib-2.0/glib/gpoll.h \
  networklayer/contract/IPv4Address.h \
  /usr/include/libxml++-2.6/libxml++/libxml++.h \
  /usr/include/glib-2.0/glib/deprecated/gmain.h \
  /usr/include/glib-2.0/glib/gbitlock.h \
  /usr/include/libxml++-2.6/libxml++/validators/relaxngvalidator.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/libxml++-2.6/libxml++/nodes/processinginstructionnode.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidator.h \
  /usr/include/libxml++-2.6/libxml++/nodes/commentnode.h \
  /usr/include/libxml++-2.6/libxml++/parsers/textreader.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludestart.h \
  /usr/include/glib-2.0/glib/gmain.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  actions/actionbase/ActionBase.h \
  /usr/include/libxml++-2.6/libxml++/attribute.h \
  /usr/include/glib-2.0/glib/gqsort.h \
  /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glib-2.0/glib/ghostutils.h \
  base/Compat.h \
  /usr/include/glib-2.0/glib/gtimer.h \
  parser/Parser.h \
  /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/glib-2.0/glib/gerror.h \
  /usr/include/glib-2.0/glib/gbytes.h \
  /usr/include/libxml++-2.6/libxml++/nodes/node.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/glib-2.0/glib/gversion.h \
  /usr/include/libxml++-2.6/libxml++/schema.h \
  /usr/include/glib-2.0/glib/ghash.h \
  /usr/include/glib-2.0/glib/glist.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludeend.h \
  networklayer/ipv4/IRoutingTable.h \
  /usr/include/glib-2.0/glib/deprecated/gcache.h \
  /usr/include/glib-2.0/glib/gslist.h \
  base/NotifierConsts.h \
  /usr/include/libxml++-2.6/libxml++/parsers/saxparser.h \
  /usr/include/glib-2.0/glib/gnode.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/parse_error.h \
  linklayer/contract/MACAddress.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  /usr/include/glib-2.0/glib/ggettext.h \
  attacks/attackbase/AttackBase.h \
  /usr/include/libxml++-2.6/libxml++/parsers/domparser.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/glib-2.0/glib/gwin32.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/libxml++-2.6/libxml++/attributedeclaration.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  /usr/include/glib-2.0/glib/gdatetime.h
$O/globalfilter/putmessages/PutMessages.o: globalfilter/putmessages/PutMessages.cc \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  util/seapputils/seapputils.h \
  base/INETDefs.h \
  globalfilter/putmessages/PutMessages.h
$O/linklayer/common/MACBase.o: linklayer/common/MACBase.cc \
  linklayer/contract/MACAddress.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  linklayer/common/MACBase.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h
$O/linklayer/common/WirelessMacBase.o: linklayer/common/WirelessMacBase.cc \
  base/NodeOperations.h \
  base/Compat.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  linklayer/common/WirelessMacBase.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  linklayer/common/MACBase.h \
  base/ILifecycle.h
$O/linklayer/configurator/Ieee8021dInterfaceData.o: linklayer/configurator/Ieee8021dInterfaceData.cc \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  base/Compat.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h
$O/linklayer/configurator/L2NetworkConfigurator.o: linklayer/configurator/L2NetworkConfigurator.cc \
  util/PatternMatcher.h \
  networklayer/common/IInterfaceTable.h \
  util/stlutils.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  linklayer/configurator/L2NetworkConfigurator.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/Topology.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h
$O/linklayer/configurator/L2NodeConfigurator.o: linklayer/configurator/L2NodeConfigurator.cc \
  base/Compat.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  base/ModuleAccess.h \
  base/Topology.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  linklayer/configurator/L2NetworkConfigurator.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  linklayer/configurator/L2NodeConfigurator.h \
  util/PatternMatcher.h
$O/linklayer/contract/MACAddress.o: linklayer/contract/MACAddress.cc \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/linklayer/ethernet/EtherBus.o: linklayer/ethernet/EtherBus.cc \
  linklayer/ethernet/EtherBus.h \
  base/Compat.h \
  base/INETDefs.h
$O/linklayer/ethernet/EtherEncap.o: linklayer/ethernet/EtherEncap.cc \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ethernet/EtherFrame.h \
  networklayer/common/InterfaceEntry.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherEncap.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/linklayer/ethernet/EtherFrameClassifier.o: linklayer/ethernet/EtherFrameClassifier.cc \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/EtherFrameClassifier.h \
  base/Compat.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ethernet/EtherFrame.h \
  base/INETDefs.h
$O/linklayer/ethernet/EtherHub.o: linklayer/ethernet/EtherHub.cc \
  base/Compat.h \
  base/INETDefs.h \
  linklayer/ethernet/EtherHub.h
$O/linklayer/ethernet/EtherLLC.o: linklayer/ethernet/EtherLLC.cc \
  base/Compat.h \
  base/NodeOperations.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/Ethernet.h \
  status/NodeStatus.h \
  linklayer/ethernet/EtherFrame.h \
  base/ModuleAccess.h \
  base/INETDefs.h \
  linklayer/ethernet/EtherLLC.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h
$O/linklayer/ethernet/EtherMAC.o: linklayer/ethernet/EtherMAC.cc \
  linklayer/ethernet/EtherMAC.h \
  base/ILifecycle.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/common/MACBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/EtherFrame.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/EtherMACBase.h \
  base/IPassiveQueue.h \
  base/Compat.h
$O/linklayer/ethernet/EtherMACBase.o: linklayer/ethernet/EtherMACBase.cc \
  base/IPassiveQueue.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NodeOperations.h \
  linklayer/ethernet/EtherMACBase.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/ethernet/EtherFrame_m.h \
  util/opp_utils.h \
  linklayer/common/MACBase.h \
  base/LifecycleOperation.h \
  base/NotificationBoard.h
$O/linklayer/ethernet/EtherMACFullDuplex.o: linklayer/ethernet/EtherMACFullDuplex.cc \
  base/IPassiveQueue.h \
  base/Compat.h \
  linklayer/ethernet/EtherMACBase.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/EtherMACFullDuplex.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/common/MACBase.h \
  base/NotificationBoard.h
$O/linklayer/ethernet/switch/MACAddressTable.o: linklayer/ethernet/switch/MACAddressTable.cc \
  base/INETDefs.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  base/Compat.h \
  linklayer/ethernet/switch/MACAddressTable.h \
  linklayer/contract/MACAddress.h
$O/linklayer/ethernet/switch/MACRelayUnit.o: linklayer/ethernet/switch/MACRelayUnit.cc \
  linklayer/ethernet/switch/MACRelayUnit.h \
  base/INotifiable.h \
  base/INETDefs.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame.h \
  base/LifecycleOperation.h \
  base/ILifecycle.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  linklayer/common/MACBase.h \
  base/NodeOperations.h \
  linklayer/ethernet/EtherMACBase.h \
  base/IPassiveQueue.h \
  base/Compat.h \
  status/NodeStatus.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h
$O/linklayer/ext/ExtInterface.o: linklayer/ext/ExtInterface.cc \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  linklayer/ext/ExtFrame_m.h \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/headers/bsdint.h \
  util/opp_utils.h \
  linklayer/common/MACBase.h \
  linklayer/ext/ExtInterface.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  linklayer/ext/cSocketRTScheduler.h \
  base/NotifierConsts.h
$O/linklayer/ext/cSocketRTScheduler.o: linklayer/ext/cSocketRTScheduler.cc \
  base/Compat.h \
  linklayer/ext/cSocketRTScheduler.h \
  base/INETDefs.h \
  linklayer/ext/ExtFrame_m.h \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/headers/ethernet.h
$O/linklayer/idealwireless/IdealWirelessMac.o: linklayer/idealwireless/IdealWirelessMac.cc \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  linklayer/contract/RadioState.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  linklayer/idealwireless/IdealWirelessMac.h \
  util/opp_utils.h \
  linklayer/common/MACBase.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  base/IPassiveQueue.h \
  linklayer/radio/IdealRadio.h \
  linklayer/idealwireless/IdealWirelessFrame_m.h \
  base/Compat.h \
  linklayer/radio/IdealAirFrame_m.h \
  networklayer/contract/IPvXAddress.h \
  base/Coord.h \
  base/NodeOperations.h \
  world/radio/IdealChannelModelAccess.h \
  linklayer/contract/MACAddress.h \
  linklayer/common/WirelessMacBase.h \
  base/BasicModule.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  status/NodeStatus.h \
  world/radio/IdealChannelModel.h \
  util/FWMath.h \
  base/NotifierConsts.h
$O/linklayer/ieee80211/mac/Ieee80211DataRate.o: linklayer/ieee80211/mac/Ieee80211DataRate.cc \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/ieee80211/mac/WifiMode.h \
  base/INETDefs.h \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h
$O/linklayer/ieee80211/mac/Ieee80211Mac.o: linklayer/ieee80211/mac/Ieee80211Mac.cc \
  linklayer/radio/ModulationType.h \
  base/LifecycleOperation.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  base/NotificationBoard.h \
  util/opp_utils.h \
  linklayer/common/MACBase.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ieee80211/mac/WifiMode.h \
  linklayer/radio/AirFrame_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  linklayer/contract/RadioState.h \
  base/FSMA.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/ieee80211/mac/Ieee80211Mac.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  linklayer/contract/MACAddress.h \
  linklayer/common/WirelessMacBase.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  base/Coord.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/ieee80211/mac/IQoSClassifier.h \
  linklayer/ieee80211/mac/Ieee80211eClassifier.h \
  base/IPassiveQueue.h \
  base/Compat.h
$O/linklayer/ieee80211/mac/Ieee80211eClassifier.o: linklayer/ieee80211/mac/Ieee80211eClassifier.cc \
  transport/tcp_common/TCPSegment_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  linklayer/ieee80211/mac/Ieee80211eClassifier.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  linklayer/ieee80211/mac/IQoSClassifier.h \
  base/Compat.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/ByteArray.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv6Address.h \
  networklayer/icmpv6/ICMPv6Message_m.h
$O/linklayer/ieee80211/mac/WifiMode.o: linklayer/ieee80211/mac/WifiMode.cc \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mac/WifiMode.h \
  base/INETDefs.h
$O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o: linklayer/ieee80211/mgmt/Ieee80211AgentSTA.cc \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  linklayer/ieee80211/mgmt/Ieee80211AgentSTA.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  util/opp_utils.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAP.cc \
  base/INotifiable.h \
  base/INETDefs.h \
  linklayer/ethernet/EtherFrame.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/contract/RadioState.h \
  base/ModuleAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
  base/NotificationBoard.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/PassiveQueueBase.h \
  base/IPassiveQueue.h \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/Ethernet.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.cc \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/IPassiveQueue.h \
  base/PassiveQueueBase.h \
  base/Compat.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/NotificationBoard.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  base/INotifiable.h \
  base/INETDefs.h \
  linklayer/ethernet/EtherFrame.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/ModuleAccess.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.cc \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/PassiveQueueBase.h \
  base/IPassiveQueue.h \
  base/Compat.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/NotificationBoard.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ILifecycle.h \
  base/INotifiable.h \
  base/INETDefs.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.h \
  linklayer/ethernet/EtherFrame.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/ModuleAccess.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.cc \
  base/NotifierConsts.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/Compat.h \
  base/IPassiveQueue.h \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/NotificationBoard.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtBase.cc \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/Compat.h \
  base/IPassiveQueue.h \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/NodeOperations.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/ModuleAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/INETDefs.h \
  base/INotifiable.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.cc \
  base/BasicModule.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  base/PassiveQueueBase.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceTableAccess.h \
  base/Coord.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  util/opp_utils.h \
  base/NotificationBoard.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  networklayer/common/InterfaceEntry.h \
  world/radio/ChannelAccess.h \
  linklayer/contract/RadioState.h \
  base/ModuleAccess.h \
  world/radio/IChannelControl.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.cc \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/ModuleAccess.h \
  base/INotifiable.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/NotifierConsts.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/IPassiveQueue.h \
  base/PassiveQueueBase.h \
  base/Compat.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/linklayer/ieee80211/radio/BerParseFile.o: linklayer/ieee80211/radio/BerParseFile.cc \
  base/Compat.h \
  linklayer/ieee80211/radio/BerParseFile.h \
  base/INETDefs.h
$O/linklayer/ieee80211/radio/Ieee80211RadioModel.o: linklayer/ieee80211/radio/Ieee80211RadioModel.cc \
  linklayer/radio/AirFrame_m.h \
  linklayer/ieee80211/mac/WifiMode.h \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/radio/SnrList.h \
  linklayer/radio/IRadioModel.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  linklayer/ieee80211/radio/BerParseFile.h \
  linklayer/radio/ModulationType.h \
  base/Compat.h \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h \
  base/Coord.h \
  linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
  linklayer/ieee80211/radio/Ieee80211RadioModel.h \
  linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  util/FWMath.h
$O/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o: linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.cc \
  base/Compat.h \
  base/INETDefs.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h
$O/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o: linklayer/ieee80211/radio/errormodel/nist-error-rate-model.cc \
  linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h \
  base/Compat.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/WifiMode.h
$O/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o: linklayer/ieee80211/radio/errormodel/yans-error-rate-model.cc \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/ieee80211/mac/WifiMode.h \
  base/INETDefs.h \
  linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h \
  base/Compat.h
$O/linklayer/ieee8021d/common/STPBase.o: linklayer/ieee8021d/common/STPBase.cc \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4Address.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  base/Compat.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceTable.h \
  base/LifecycleOperation.h \
  base/NotificationBoard.h \
  linklayer/ieee8021d/common/STPBase.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h
$O/linklayer/ieee8021d/relay/Ieee8021dRelay.o: linklayer/ieee8021d/relay/Ieee8021dRelay.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee8021d/relay/Ieee8021dRelay.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTable.h \
  base/LifecycleOperation.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h
$O/linklayer/ieee8021d/rstp/RSTP.o: linklayer/ieee8021d/rstp/RSTP.cc \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/EtherFrame.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  networklayer/common/InterfaceTable.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  linklayer/ieee8021d/common/STPBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  linklayer/ieee8021d/rstp/RSTP.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  networklayer/contract/IPv4Address.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  linklayer/ethernet/switch/MACAddressTable.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  linklayer/contract/MACAddress.h
$O/linklayer/ieee8021d/stp/STP.o: linklayer/ieee8021d/stp/STP.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  linklayer/ieee8021d/common/STPBase.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  linklayer/ieee8021d/stp/STP.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  linklayer/ethernet/EtherFrame.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h
$O/linklayer/ieee8021d/tester/STPTester.o: linklayer/ieee8021d/tester/STPTester.cc \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/ModuleAccess.h \
  base/Topology.h \
  networklayer/common/InterfaceEntry.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  networklayer/common/InterfaceTable.h \
  linklayer/ieee8021d/stp/STP.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  linklayer/ieee8021d/common/STPBase.h \
  linklayer/ieee8021d/tester/STPTester.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  networklayer/contract/IPv4Address.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  linklayer/contract/MACAddress.h
$O/linklayer/loopback/Loopback.o: linklayer/loopback/Loopback.cc \
  linklayer/common/MACBase.h \
  util/opp_utils.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/TxNotifDetails.h \
  linklayer/loopback/Loopback.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  base/IPassiveQueue.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h
$O/linklayer/ppp/PPP.o: linklayer/ppp/PPP.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/LifecycleOperation.h \
  base/NotificationBoard.h \
  linklayer/contract/TxNotifDetails.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  util/opp_utils.h \
  linklayer/common/MACBase.h \
  base/NodeOperations.h \
  linklayer/ppp/PPPFrame_m.h \
  networklayer/contract/IPvXAddress.h \
  base/IPassiveQueue.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  linklayer/ppp/PPP.h
$O/linklayer/queue/AlgorithmicDropperBase.o: linklayer/queue/AlgorithmicDropperBase.cc \
  linklayer/queue/AlgorithmicDropperBase.h \
  linklayer/queue/IQueueAccess.h \
  base/Compat.h \
  base/INETDefs.h
$O/linklayer/queue/DropTailQueue.o: linklayer/queue/DropTailQueue.cc \
  linklayer/queue/DropTailQueue.h \
  base/INETDefs.h \
  base/Compat.h \
  base/IPassiveQueue.h \
  base/PassiveQueueBase.h
$O/linklayer/queue/FIFOQueue.o: linklayer/queue/FIFOQueue.cc \
  linklayer/queue/IQueueAccess.h \
  base/Compat.h \
  base/PassiveQueueBase.h \
  base/IPassiveQueue.h \
  linklayer/queue/FIFOQueue.h \
  base/INETDefs.h
$O/linklayer/queue/PriorityScheduler.o: linklayer/queue/PriorityScheduler.cc \
  base/Compat.h \
  base/IPassiveQueue.h \
  linklayer/queue/SchedulerBase.h \
  linklayer/queue/PriorityScheduler.h \
  base/INETDefs.h
$O/linklayer/queue/REDDropper.o: linklayer/queue/REDDropper.cc \
  base/Compat.h \
  linklayer/queue/IQueueAccess.h \
  linklayer/queue/AlgorithmicDropperBase.h \
  base/INETDefs.h \
  linklayer/queue/REDDropper.h \
  util/opp_utils.h
$O/linklayer/queue/SchedulerBase.o: linklayer/queue/SchedulerBase.cc \
  base/IPassiveQueue.h \
  base/Compat.h \
  linklayer/queue/SchedulerBase.h \
  base/INETDefs.h
$O/linklayer/queue/ThresholdDropper.o: linklayer/queue/ThresholdDropper.cc \
  linklayer/queue/IQueueAccess.h \
  linklayer/queue/AlgorithmicDropperBase.h \
  linklayer/queue/ThresholdDropper.h \
  base/Compat.h \
  base/INETDefs.h
$O/linklayer/queue/WRRScheduler.o: linklayer/queue/WRRScheduler.cc \
  util/opp_utils.h \
  base/INETDefs.h \
  linklayer/queue/SchedulerBase.h \
  linklayer/queue/WRRScheduler.h \
  base/Compat.h \
  base/IPassiveQueue.h
$O/linklayer/radio/GenericRadioModel.o: linklayer/radio/GenericRadioModel.cc \
  util/FWMath.h \
  linklayer/radio/GenericRadioModel.h \
  base/Coord.h \
  linklayer/radio/IModulation.h \
  base/Compat.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/Modulation.h \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/radio/SnrList.h \
  linklayer/radio/AirFrame_m.h
$O/linklayer/radio/IdealRadio.o: linklayer/radio/IdealRadio.cc \
  base/LifecycleOperation.h \
  base/NotificationBoard.h \
  base/ILifecycle.h \
  base/INotifiable.h \
  base/INETDefs.h \
  base/ModuleAccess.h \
  linklayer/contract/RadioState.h \
  status/NodeStatus.h \
  world/radio/IdealChannelModel.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  base/BasicModule.h \
  base/Coord.h \
  base/NodeOperations.h \
  world/radio/IdealChannelModelAccess.h \
  linklayer/radio/IdealAirFrame_m.h \
  linklayer/radio/IdealRadio.h \
  base/Compat.h
$O/linklayer/radio/Modulation.o: linklayer/radio/Modulation.cc \
  base/Compat.h \
  linklayer/radio/IModulation.h \
  linklayer/radio/Modulation.h \
  base/INETDefs.h
$O/linklayer/radio/Radio.o: linklayer/radio/Radio.cc \
  base/NodeOperations.h \
  base/Coord.h \
  linklayer/radio/Radio.h \
  base/Compat.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  status/NodeStatus.h \
  world/obstacles/ObstacleControl.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  ./world/annotations/AnnotationManager.h \
  base/BasicModule.h \
  ./world/obstacles/Obstacle.h \
  linklayer/radio/propagation/IReceptionModel.h \
  world/radio/IChannelControl.h \
  linklayer/radio/SnrList.h \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  base/INotifiable.h \
  battery/models/BasicBattery.h \
  base/ModuleAccess.h \
  linklayer/contract/RadioState.h \
  world/radio/ChannelAccess.h \
  linklayer/radio/AirFrame_m.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/INoiseGenerator.h \
  base/ILifecycle.h \
  linklayer/radio/IRadioModel.h
$O/linklayer/radio/propagation/FreeSpaceModel.o: linklayer/radio/propagation/FreeSpaceModel.cc \
  base/BasicModule.h \
  linklayer/radio/propagation/IReceptionModel.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  base/Compat.h \
  base/Coord.h \
  base/NotificationBoard.h \
  world/radio/ChannelAccess.h \
  base/ModuleAccess.h \
  world/radio/IChannelControl.h \
  base/INotifiable.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/LogNormalShadowingModel.o: linklayer/radio/propagation/LogNormalShadowingModel.cc \
  base/INETDefs.h \
  linklayer/radio/propagation/LogNormalShadowingModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/IReceptionModel.h \
  base/Compat.h \
  linklayer/radio/propagation/FreeSpaceModel.h
$O/linklayer/radio/propagation/NakagamiModel.o: linklayer/radio/propagation/NakagamiModel.cc \
  linklayer/radio/propagation/IReceptionModel.h \
  linklayer/radio/propagation/NakagamiModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  base/Compat.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/RayleighModel.o: linklayer/radio/propagation/RayleighModel.cc \
  base/INETDefs.h \
  linklayer/radio/propagation/RayleighModel.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  base/Compat.h \
  util/FWMath.h \
  linklayer/radio/propagation/IReceptionModel.h
$O/linklayer/radio/propagation/RiceModel.o: linklayer/radio/propagation/RiceModel.cc \
  linklayer/radio/propagation/FreeSpaceModel.h \
  base/Compat.h \
  linklayer/radio/propagation/IReceptionModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/RiceModel.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/SUIModel.o: linklayer/radio/propagation/SUIModel.cc \
  base/INETDefs.h \
  linklayer/radio/propagation/SUIModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/IReceptionModel.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  base/Compat.h
$O/linklayer/radio/propagation/TwoRayGroundModel.o: linklayer/radio/propagation/TwoRayGroundModel.cc \
  base/INETDefs.h \
  base/Compat.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/TwoRayGroundModel.h \
  linklayer/radio/propagation/IReceptionModel.h
$O/localfilter/LocalFilter.o: localfilter/LocalFilter.cc \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  localfilter/LocalFilter.h \
  /usr/include/glib-2.0/glib/gdate.h \
  /usr/include/glib-2.0/glib/gvarianttype.h \
  /usr/include/libxml++-2.6/libxml++/dtd.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/internal_error.h \
  /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/libxml++-2.6/libxml++/nodes/textnode.h \
  variable/Variable.h \
  /usr/include/libxml++-2.6/libxml++/schemabase.h \
  /usr/include/glib-2.0/glib/gqueue.h \
  networklayer/common/IInterfaceTable.h \
  /usr/include/glib-2.0/glib/gstringchunk.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/glibmm-2.4/glibmm/unicode.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entitydeclaration.h \
  attacks/attackentry/AttackEntry.h \
  /usr/include/glib-2.0/glib/goption.h \
  /usr/include/glib-2.0/glib/deprecated/grel.h \
  /usr/include/glib-2.0/glib/gtimezone.h \
  util/PatternMatcher.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  /usr/include/glib-2.0/glib/gcharset.h \
  /usr/include/libxml++-2.6/libxml++/xsdschema.h \
  globalfilter/putmessages/PutMessages.h \
  /usr/include/glib-2.0/glib/gversionmacros.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  /usr/include/libxml++-2.6/libxml++/validators/validator.h \
  /usr/include/glib-2.0/glib/gtree.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/validity_error.h \
  networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
  /usr/include/libxml++-2.6/libxml++/noncopyable.h \
  /usr/include/glib-2.0/glib/genviron.h \
  /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/libxml++-2.6/libxml++/nodes/contentnode.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  /usr/include/glib-2.0/glib.h \
  /usr/include/glib-2.0/glib/gvariant.h \
  /usr/include/libxml++-2.6/libxml++/parsers/parser.h \
  /usr/include/libxml++-2.6/libxml++/attributenode.h \
  /usr/include/glib-2.0/glib/ghook.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib/gurifuncs.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h \
  /usr/lib/x86_64-linux-gnu/libxml++-2.6/include/libxml++config.h \
  /usr/include/glib-2.0/glib/gmem.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/gthread.h \
  /usr/include/glib-2.0/glib/glib-autocleanups.h \
  networklayer/common/InterfaceEntry.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/glib-2.0/glib/gtrashstack.h \
  /usr/include/glibmm-2.4/glibmm/ustring.h \
  /usr/include/glib-2.0/glib/ghmac.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  base/Topology.h \
  base/ModuleAccess.h \
  util/seapputils/seapputils.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entityreference.h \
  base/INETDefs.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/exception.h \
  /usr/lib/x86_64-linux-gnu/glibmm-2.4/include/glibmmconfig.h \
  /usr/include/glib-2.0/glib/gshell.h \
  /usr/lib/x86_64-linux-gnu/glib-2.0/include/glibconfig.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  /usr/include/libxml++-2.6/libxml++/validators/dtdvalidator.h \
  networklayer/contract/IPv6Address.h \
  actions/change/Change.h \
  /usr/include/libxml++-2.6/libxml++/document.h \
  /usr/include/glib-2.0/glib/deprecated/gcompletion.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/parse_error.h \
  linklayer/contract/MACAddress.h \
  /usr/include/glib-2.0/glib/gnode.h \
  /usr/include/glib-2.0/glib/ggettext.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/libxml++-2.6/libxml++/parsers/domparser.h \
  attacks/attackbase/AttackBase.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  /usr/include/glib-2.0/glib/gdatetime.h \
  /usr/include/glib-2.0/glib/gwin32.h \
  /usr/include/libxml++-2.6/libxml++/attributedeclaration.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/glib-2.0/glib/gerror.h \
  /usr/include/glib-2.0/glib/gbytes.h \
  parser/Parser.h \
  /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/libxml++-2.6/libxml++/nodes/node.h \
  /usr/include/glib-2.0/glib/ghash.h \
  /usr/include/libxml++-2.6/libxml++/schema.h \
  attacks/conditionalattack/conditionalattack/ConditionalAttack.h \
  /usr/include/glib-2.0/glib/gversion.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  exmachina/ExMachina.h \
  /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/glib-2.0/glib/deprecated/gcache.h \
  base/NotifierConsts.h \
  /usr/include/libxml++-2.6/libxml++/parsers/saxparser.h \
  /usr/include/glib-2.0/glib/glist.h \
  networklayer/ipv4/IRoutingTable.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludeend.h \
  /usr/include/libxml++-2.6/libxml++/libxml++.h \
  /usr/include/glib-2.0/glib/gbitlock.h \
  /usr/include/glib-2.0/glib/deprecated/gmain.h \
  networklayer/contract/IPv4Address.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/libxml++-2.6/libxml++/nodes/processinginstructionnode.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  networklayer/common/InterfaceTableAccess.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/libxml++-2.6/libxml++/validators/relaxngvalidator.h \
  /usr/include/glib-2.0/glib/gmain.h \
  actions/actionbase/ActionBase.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  /usr/include/libxml++-2.6/libxml++/parsers/textreader.h \
  /usr/include/libxml++-2.6/libxml++/nodes/commentnode.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidator.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludestart.h \
  /usr/include/glib-2.0/glib/gtimer.h \
  base/Compat.h \
  /usr/include/glib-2.0/glib/ghostutils.h \
  /usr/include/libxml++-2.6/libxml++/attribute.h \
  /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glib-2.0/glib/gqsort.h \
  /usr/include/glib-2.0/glib/deprecated/gthread.h \
  networklayer/contract/IPvXAddressResolver.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  networklayer/contract/IPvXAddress.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidatorbase.h \
  /usr/include/libxml++-2.6/libxml++/nodes/element.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  /usr/include/glib-2.0/glib/deprecated/gallocator.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/libxml++-2.6/libxml++/validators/xsdvalidator.h \
  attacks/physicalattack/PhysicalAttack.h \
  /usr/include/libxml++-2.6/libxml++/nodes/cdatanode.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/glib-2.0/glib/gpoll.h \
  /usr/include/libxml++-2.6/libxml++/relaxngschema.h \
  /usr/include/glib-2.0/glib/grand.h
$O/mobility/common/LineSegmentsMobilityBase.o: mobility/common/LineSegmentsMobilityBase.cc \
  mobility/common/LineSegmentsMobilityBase.h \
  base/Coord.h \
  base/Compat.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  base/INETDefs.h \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h \
  mobility/common/MovingMobilityBase.h
$O/mobility/common/MobilityAccess.o: mobility/common/MobilityAccess.cc \
  base/INETDefs.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  mobility/common/MobilityAccess.h \
  util/FWMath.h \
  base/Coord.h \
  base/Compat.h
$O/mobility/common/MobilityBase.o: mobility/common/MobilityBase.cc \
  base/INETDefs.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  base/Coord.h \
  base/Compat.h
$O/mobility/common/MovingMobilityBase.o: mobility/common/MovingMobilityBase.cc \
  mobility/common/MovingMobilityBase.h \
  base/INETDefs.h \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  base/Coord.h \
  base/Compat.h
$O/mobility/contract/IMobility.o: mobility/contract/IMobility.cc \
  base/Coord.h \
  base/Compat.h \
  util/FWMath.h \
  base/INETDefs.h \
  mobility/contract/IMobility.h
$O/mobility/group/MoBANCoordinator.o: mobility/group/MoBANCoordinator.cc \
  mobility/group/PostureTransition.h \
  base/INETDefs.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  mobility/common/MovingMobilityBase.h \
  base/Coord.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/Compat.h \
  mobility/group/MoBANLocal.h \
  util/FWMath.h \
  mobility/common/MobilityAccess.h \
  mobility/common/MobilityBase.h \
  mobility/group/Posture.h \
  mobility/group/MoBANCoordinator.h
$O/mobility/group/MoBANLocal.o: mobility/group/MoBANLocal.cc \
  mobility/common/MovingMobilityBase.h \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h \
  base/INETDefs.h \
  mobility/group/PostureTransition.h \
  mobility/group/MoBANCoordinator.h \
  mobility/common/MobilityBase.h \
  mobility/group/Posture.h \
  util/FWMath.h \
  mobility/group/MoBANLocal.h \
  base/Compat.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/Coord.h
$O/mobility/group/Posture.o: mobility/group/Posture.cc \
  util/FWMath.h \
  mobility/group/Posture.h \
  base/Coord.h \
  base/Compat.h \
  base/INETDefs.h
$O/mobility/group/PostureTransition.o: mobility/group/PostureTransition.cc \
  util/FWMath.h \
  base/Coord.h \
  base/Compat.h \
  base/INETDefs.h \
  mobility/group/PostureTransition.h
$O/mobility/single/ANSimMobility.o: mobility/single/ANSimMobility.cc \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  base/INETDefs.h \
  mobility/single/ANSimMobility.h \
  mobility/common/MovingMobilityBase.h \
  base/Compat.h \
  base/Coord.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h
$O/mobility/single/BonnMotionFileCache.o: mobility/single/BonnMotionFileCache.cc \
  base/INETDefs.h \
  mobility/single/BonnMotionFileCache.h \
  base/Compat.h
$O/mobility/single/BonnMotionMobility.o: mobility/single/BonnMotionMobility.cc \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  base/INETDefs.h \
  mobility/single/BonnMotionMobility.h \
  mobility/common/MovingMobilityBase.h \
  base/Compat.h \
  base/Coord.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MobilityBase.h \
  mobility/single/BonnMotionFileCache.h \
  util/FWMath.h
$O/mobility/single/ChiangMobility.o: mobility/single/ChiangMobility.cc \
  base/INETDefs.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  mobility/single/ChiangMobility.h \
  mobility/common/MovingMobilityBase.h \
  base/Coord.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/Compat.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h
$O/mobility/single/CircleMobility.o: mobility/single/CircleMobility.cc \
  base/Compat.h \
  base/Coord.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h \
  base/INETDefs.h \
  mobility/single/CircleMobility.h \
  mobility/common/MovingMobilityBase.h
$O/mobility/single/ConstSpeedMobility.o: mobility/single/ConstSpeedMobility.cc \
  base/Compat.h \
  base/Coord.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  mobility/single/ConstSpeedMobility.h \
  base/INETDefs.h \
  mobility/common/MovingMobilityBase.h
$O/mobility/single/GaussMarkovMobility.o: mobility/single/GaussMarkovMobility.cc \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/Coord.h \
  base/Compat.h \
  mobility/common/MovingMobilityBase.h \
  mobility/single/GaussMarkovMobility.h \
  base/INETDefs.h \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h
$O/mobility/single/LinearMobility.o: mobility/single/LinearMobility.cc \
  base/Coord.h \
  mobility/single/LinearMobility.h \
  base/Compat.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  base/INETDefs.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  mobility/common/MovingMobilityBase.h
$O/mobility/single/LinearNodeDistributionMobility.o: mobility/single/LinearNodeDistributionMobility.cc \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  base/Coord.h \
  mobility/static/StationaryMobility.h \
  base/Compat.h \
  base/INETDefs.h \
  mobility/single/LinearNodeDistributionMobility.h \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h
$O/mobility/single/MassMobility.o: mobility/single/MassMobility.cc \
  mobility/common/MovingMobilityBase.h \
  mobility/single/MassMobility.h \
  base/INETDefs.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  base/Coord.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/Compat.h
$O/mobility/single/Ns2MotionMobility.o: mobility/single/Ns2MotionMobility.cc \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  base/INETDefs.h \
  mobility/common/MovingMobilityBase.h \
  base/Compat.h \
  mobility/single/Ns2MotionMobility.h \
  base/Coord.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h
$O/mobility/single/RandomWPMobility.o: mobility/single/RandomWPMobility.cc \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  mobility/single/RandomWPMobility.h \
  base/INETDefs.h \
  mobility/common/MovingMobilityBase.h \
  base/Compat.h \
  base/Coord.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h
$O/mobility/single/RectangleMobility.o: mobility/single/RectangleMobility.cc \
  base/Coord.h \
  base/Compat.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  mobility/single/RectangleMobility.h \
  base/INETDefs.h \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h \
  mobility/common/MovingMobilityBase.h
$O/mobility/single/TraCIMobility.o: mobility/single/TraCIMobility.cc \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  base/INETDefs.h \
  mobility/common/MobilityBase.h \
  ./world/traci/TraCIScenarioManager.h \
  util/FWMath.h \
  base/Compat.h \
  ./mobility/single/TraCIMobility.h \
  base/Coord.h
$O/mobility/single/TractorMobility.o: mobility/single/TractorMobility.cc \
  mobility/common/MobilityBase.h \
  util/FWMath.h \
  base/Compat.h \
  base/Coord.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/single/TractorMobility.h \
  mobility/common/MovingMobilityBase.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  base/INETDefs.h
$O/mobility/single/TurtleMobility.o: mobility/single/TurtleMobility.cc \
  mobility/common/MovingMobilityBase.h \
  base/INETDefs.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h \
  base/Coord.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/single/TurtleMobility.h \
  base/Compat.h
$O/mobility/static/StaticGridMobility.o: mobility/static/StaticGridMobility.cc \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h \
  base/INETDefs.h \
  base/Compat.h \
  mobility/static/StationaryMobility.h \
  base/Coord.h \
  mobility/common/MobilityBase.h \
  util/FWMath.h \
  mobility/static/StaticGridMobility.h
$O/mobility/static/StationaryMobility.o: mobility/static/StationaryMobility.cc \
  base/INETDefs.h \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  base/Compat.h \
  mobility/static/StationaryMobility.h \
  util/FWMath.h \
  mobility/common/MobilityBase.h
$O/networklayer/arp/ARP.o: networklayer/arp/ARP.cc \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  base/ModuleAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/arp/ARP.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h
$O/networklayer/arp/IARPCache.o: networklayer/arp/IARPCache.cc \
  linklayer/contract/MACAddress.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/ModuleAccess.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h
$O/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o: networklayer/autorouting/ipv4/FlatNetworkConfigurator.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h
$O/networklayer/autorouting/ipv4/HostAutoConfigurator.o: networklayer/autorouting/ipv4/HostAutoConfigurator.cc \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/autorouting/ipv4/HostAutoConfigurator.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h
$O/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o: networklayer/autorouting/ipv4/IPv4NetworkConfigurator.cc \
  base/Topology.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  util/stlutils.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/PatternMatcher.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  util/XMLUtils.h \
  linklayer/contract/MACAddress.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h
$O/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o: networklayer/autorouting/ipv4/IPv4NodeConfigurator.cc \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/PatternMatcher.h \
  base/LifecycleOperation.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/autorouting/ipv4/IPv4NodeConfigurator.h \
  networklayer/common/InterfaceEntry.h \
  base/Topology.h \
  base/ModuleAccess.h \
  status/NodeStatus.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  base/Compat.h
$O/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o: networklayer/autorouting/ipv6/FlatNetworkConfigurator6.cc \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/RoutingTable6.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/autorouting/ipv6/FlatNetworkConfigurator6.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h
$O/networklayer/bgpv4/BGPFSM.o: networklayer/bgpv4/BGPFSM.cc \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  util/Macho.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/TCPCommand_m.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/bgpv4/BGPSession.h \
  networklayer/bgpv4/BGPFSM.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/bgpv4/BGPCommon.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/bgpv4/BGPRouting.h \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  networklayer/ipv4/RoutingTable.h \
  transport/contract/TCPSocketMap.h \
  base/NotificationBoard.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  transport/contract/TCPSocket.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h
$O/networklayer/bgpv4/BGPRouting.o: networklayer/bgpv4/BGPRouting.cc \
  networklayer/ipv4/IPv4Route.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  base/NotificationBoard.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  transport/contract/TCPSocket.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  base/ModuleAccess.h \
  transport/contract/TCPSocketMap.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  status/NodeStatus.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/NotifierConsts.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/bgpv4/BGPRouting.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  util/Macho.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/bgpv4/BGPSession.h \
  networklayer/bgpv4/BGPFSM.h \
  networklayer/bgpv4/BGPCommon.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/bgpv4/BGPSession.o: networklayer/bgpv4/BGPSession.cc \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/bgpv4/BGPRouting.h \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/bgpv4/BGPFSM.h \
  networklayer/bgpv4/BGPSession.h \
  networklayer/bgpv4/BGPCommon.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  util/Macho.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  transport/contract/TCPSocket.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  transport/contract/TCPSocketMap.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h
$O/networklayer/bgpv4/BGPMessage/BGPUpdate.o: networklayer/bgpv4/BGPMessage/BGPUpdate.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  base/INETDefs.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h
$O/networklayer/common/InterfaceEntry.o: networklayer/common/InterfaceEntry.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotificationBoard.h \
  networklayer/common/IInterfaceTable.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/networklayer/common/InterfaceMatcher.o: networklayer/common/InterfaceMatcher.cc \
  base/NotifierConsts.h \
  networklayer/common/InterfaceMatcher.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  util/PatternMatcher.h \
  networklayer/common/IInterfaceTable.h \
  util/stlutils.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h
$O/networklayer/common/InterfaceTable.o: networklayer/common/InterfaceTable.cc \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/InterfaceTable.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/NodeOperations.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/contract/IPSocket.o: networklayer/contract/IPSocket.cc \
  networklayer/contract/IPSocket.h \
  base/INETDefs.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Compat.h
$O/networklayer/contract/IPv4Address.o: networklayer/contract/IPv4Address.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/INETDefs.h
$O/networklayer/contract/IPv4ControlInfo.o: networklayer/contract/IPv4ControlInfo.cc \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h
$O/networklayer/contract/IPv6Address.o: networklayer/contract/IPv6Address.cc \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/contract/IPv6ControlInfo.o: networklayer/contract/IPv6ControlInfo.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/Compat.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo_m.h
$O/networklayer/contract/IPvXAddress.o: networklayer/contract/IPvXAddress.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/contract/IPvXAddressResolver.o: networklayer/contract/IPvXAddressResolver.cc \
  linklayer/contract/MACAddress.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv6/RoutingTable6.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  util/PatternMatcher.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/Topology.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/diffserv/BehaviorAggregateClassifier.o: networklayer/diffserv/BehaviorAggregateClassifier.cc \
  base/ByteArray.h \
  networklayer/diffserv/BehaviorAggregateClassifier.h \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  transport/udp/UDPPacket_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/diffserv/DSCPMarker.o: networklayer/diffserv/DSCPMarker.cc \
  networklayer/diffserv/DSCP_m.h \
  networklayer/diffserv/DSCPMarker.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/diffserv/DiffservUtil.o: networklayer/diffserv/DiffservUtil.cc \
  networklayer/diffserv/DiffservUtil.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/diffserv/DSCP_m.h \
  util/opp_utils.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h
$O/networklayer/diffserv/MultiFieldClassifier.o: networklayer/diffserv/MultiFieldClassifier.cc \
  transport/udp/UDPPacket_m.h \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6Address.h \
  networklayer/diffserv/MultiFieldClassifier.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray_m.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/diffserv/DiffservUtil.h \
  base/ByteArray.h
$O/networklayer/diffserv/SingleRateThreeColorMeter.o: networklayer/diffserv/SingleRateThreeColorMeter.cc \
  base/Compat.h \
  networklayer/diffserv/DiffservUtil.h \
  base/INETDefs.h \
  networklayer/diffserv/SingleRateThreeColorMeter.h
$O/networklayer/diffserv/TokenBucketMeter.o: networklayer/diffserv/TokenBucketMeter.cc \
  base/Compat.h \
  networklayer/diffserv/DiffservUtil.h \
  base/INETDefs.h \
  networklayer/diffserv/TokenBucketMeter.h
$O/networklayer/diffserv/TwoRateThreeColorMeter.o: networklayer/diffserv/TwoRateThreeColorMeter.cc \
  base/INETDefs.h \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/diffserv/TwoRateThreeColorMeter.h \
  base/Compat.h
$O/networklayer/icmpv6/ICMPv6.o: networklayer/icmpv6/ICMPv6.cc \
  base/NotificationBoard.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  applications/pingapp/PingPayload_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  networklayer/icmpv6/ICMPv6.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/icmpv6/IPv6NeighbourCache.o: networklayer/icmpv6/IPv6NeighbourCache.cc \
  linklayer/contract/MACAddress.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/icmpv6/IPv6NeighbourDiscovery.o: networklayer/icmpv6/IPv6NeighbourDiscovery.cc \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  linklayer/contract/MACAddress.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  base/Compat.h \
  networklayer/icmpv6/ICMPv6Access.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/xmipv6/xMIPv6Access.h \
  networklayer/xmipv6/MobilityHeader.h \
  base/NotificationBoard.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  networklayer/xmipv6/xMIPv6.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/internetcloud/CloudDelayerBase.o: networklayer/internetcloud/CloudDelayerBase.cc \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IPv4.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  base/AbstractQueue.h \
  networklayer/internetcloud/CloudDelayerBase.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/QueueBase.h \
  networklayer/common/InterfaceToken.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/internetcloud/MatrixCloudDelayer.o: networklayer/internetcloud/MatrixCloudDelayer.cc \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  util/XMLUtils.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/internetcloud/MatrixCloudDelayer.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  networklayer/internetcloud/CloudDelayerBase.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/IInterfaceTable.h \
  util/PatternMatcher.h
$O/networklayer/ipv4/ErrorHandling.o: networklayer/ipv4/ErrorHandling.cc \
  networklayer/ipv4/ErrorHandling.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h
$O/networklayer/ipv4/ICMP.o: networklayer/ipv4/ICMP.cc \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPSocket.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h
$O/networklayer/ipv4/IGMPv2.o: networklayer/ipv4/IGMPv2.cc \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPSocket.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IGMPv2.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IGMPMessage_m.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/ipv4/IPv4.o: networklayer/ipv4/IPv4.cc \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NotifierConsts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/NodeOperations.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPSocket.h \
  networklayer/ipv4/IPv4.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  base/LifecycleOperation.h \
  base/AbstractQueue.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/QueueBase.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ipv4/IPv4Datagram.o: networklayer/ipv4/IPv4Datagram.cc \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/ipv4/IPv4FragBuf.o: networklayer/ipv4/IPv4FragBuf.cc \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/ModuleAccess.h
$O/networklayer/ipv4/IPv4InterfaceData.o: networklayer/ipv4/IPv4InterfaceData.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotificationBoard.h
$O/networklayer/ipv4/IPv4Route.o: networklayer/ipv4/IPv4Route.cc \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/routing/aodv/AODVRouteData.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h
$O/networklayer/ipv4/NetworkInfo.o: networklayer/ipv4/NetworkInfo.cc \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/NetworkInfo.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  base/IScriptable.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4Route.h
$O/networklayer/ipv4/RoutingTable.o: networklayer/ipv4/RoutingTable.cc \
  base/ModuleAccess.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  util/opp_utils.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/Compat.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/RoutingTableParser.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  status/NodeStatus.h
$O/networklayer/ipv4/RoutingTableParser.o: networklayer/ipv4/RoutingTableParser.cc \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/ModuleAccess.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/RoutingTableParser.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/ipv4/RoutingTableRecorder.o: networklayer/ipv4/RoutingTableRecorder.cc \
  networklayer/ipv4/RoutingTableRecorder.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h
$O/networklayer/ipv6/IPv6.o: networklayer/ipv6/IPv6.cc \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  base/ReassemblyBuffer.h \
  networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/icmpv6/ICMPv6.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/icmpv6/ICMPv6Access.h \
  base/NotificationBoard.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/contract/IPSocket.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/AbstractQueue.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  base/ModuleAccess.h \
  networklayer/ipv6/IPv6FragBuf.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/ipv6/IPv6Datagram.o: networklayer/ipv6/IPv6Datagram.cc \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/ipv6/IPv6ErrorHandling.o: networklayer/ipv6/IPv6ErrorHandling.cc \
  networklayer/ipv6/IPv6ErrorHandling.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/Compat.h
$O/networklayer/ipv6/IPv6ExtensionHeaders.o: networklayer/ipv6/IPv6ExtensionHeaders.cc \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/Compat.h \
  networklayer/ipv6/IPv6Datagram.h
$O/networklayer/ipv6/IPv6FragBuf.o: networklayer/ipv6/IPv6FragBuf.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6FragBuf.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  base/ILifecycle.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  base/Compat.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/ReassemblyBuffer.h \
  networklayer/icmpv6/ICMPv6.h
$O/networklayer/ipv6/IPv6InterfaceData.o: networklayer/ipv6/IPv6InterfaceData.cc \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  base/Compat.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/ILifecycle.h \
  networklayer/ipv6/RoutingTable6.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/INETDefs.h
$O/networklayer/ipv6/RoutingTable6.o: networklayer/ipv6/RoutingTable6.cc \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  util/opp_utils.h \
  networklayer/ipv6/RoutingTable6.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/common/InterfaceEntry.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/NodeOperations.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/networklayer/ipv6tunneling/IPv6Tunneling.o: networklayer/ipv6tunneling/IPv6Tunneling.cc \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/NotificationBoard.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/xmipv6/xMIPv6Access.h \
  networklayer/ipv6/RoutingTable6.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/xmipv6/xMIPv6.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/Compat.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  linklayer/contract/MACAddress.h
$O/networklayer/ldp/LDP.o: networklayer/ldp/LDP.cc \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/ted/TED_m.h \
  transport/contract/UDPSocket.h \
  networklayer/ted/TEDAccess.h \
  transport/contract/TCPSocket.h \
  networklayer/mpls/IClassifier.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/rsvp_te/IntServ.h \
  base/ModuleAccess.h \
  transport/contract/TCPSocketMap.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  transport/udp/UDPPacket_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/ted/TED.h \
  transport/contract/UDPControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ByteArray.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/mpls/LIBTable.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/ldp/LDPPacket_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ldp/LDP.h \
  base/ByteArray_m.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NodeOperations.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/mpls/ConstType.h
$O/networklayer/manetrouting/aodv-uu/aodv_msg_struct.o: networklayer/manetrouting/aodv-uu/aodv_msg_struct.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/ModuleAccess.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
  linklayer/contract/MACAddress.h
$O/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.o: networklayer/manetrouting/aodv-uu/aodv_uu_omnet.cc \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Coord.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/QueueBase.h \
  transport/udp/UDPPacket_m.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/manetrouting/aodv-uu/packet_queue_omnet.o: networklayer/manetrouting/aodv-uu/packet_queue_omnet.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/QueueBase.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  base/AbstractQueue.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  base/Compat.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  base/Coord.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  base/AbstractQueue.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Coord.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/QueueBase.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  base/AbstractQueue.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  base/AbstractQueue.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Coord.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  linklayer/contract/MACAddress.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.cc \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/QueueBase.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Coord.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  base/AbstractQueue.h \
  base/ModuleAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  base/Coord.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.cc \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  base/Coord.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.cc \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  base/Coord.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  base/AbstractQueue.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/nl.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  base/QueueBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.o: networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.cc \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  base/Coord.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  base/ModuleAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/list.o: networklayer/manetrouting/aodv-uu/aodv-uu/list.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/locality.o: networklayer/manetrouting/aodv-uu/aodv-uu/locality.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  base/QueueBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  base/AbstractQueue.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Coord.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/base/ManetAddress.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.o: networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/nl.h \
  base/ModuleAccess.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.o: networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/contract/IPvXAddress.h \
  base/Coord.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.o: networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Coord.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  base/AbstractQueue.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h
$O/networklayer/manetrouting/base/ManetAddress.o: networklayer/manetrouting/base/ManetAddress.cc \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h
$O/networklayer/manetrouting/base/ManetNetfilterHook.o: networklayer/manetrouting/base/ManetNetfilterHook.cc \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/common/InterfaceToken.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/base/ManetRoutingBase.o: networklayer/manetrouting/base/ManetRoutingBase.cc \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Coord.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/PassiveQueueBase.h \
  base/IPassiveQueue.h \
  networklayer/contract/IPv4ControlInfo.h \
  transport/udp/UDPPacket.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/contract/IPSocket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/ProtocolMap.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/QueueBase.h \
  transport/udp/UDPPacket_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/AbstractQueue.h \
  base/ModuleAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  networklayer/common/InterfaceEntry.h \
  mobility/contract/IMobility.h \
  networklayer/common/INetfilter.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h
$O/networklayer/manetrouting/batman/BatmanMain.o: networklayer/manetrouting/batman/BatmanMain.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/ARP.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  base/AbstractQueue.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  transport/udp/UDPPacket_m.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/Coord.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h
$O/networklayer/manetrouting/batman/batmand/batman.o: networklayer/manetrouting/batman/batmand/batman.cc \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  base/Coord.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  base/QueueBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/AbstractQueue.h
$O/networklayer/manetrouting/batman/batmand/bitarray.o: networklayer/manetrouting/batman/batmand/bitarray.cc \
  networklayer/manetrouting/batman/BatmanMain.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  base/Coord.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/QueueBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  base/AbstractQueue.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h
$O/networklayer/manetrouting/batman/batmand/hna.o: networklayer/manetrouting/batman/batmand/hna.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/ARP.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  base/AbstractQueue.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Coord.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h
$O/networklayer/manetrouting/batman/batmand/originator.o: networklayer/manetrouting/batman/batmand/originator.cc \
  base/AbstractQueue.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  base/QueueBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/arp/ARP.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Coord.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  util/FWMath.h
$O/networklayer/manetrouting/batman/batmand/os.o: networklayer/manetrouting/batman/batmand/os.cc \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6Address.h \
  base/AbstractQueue.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/arp/ARP.h \
  networklayer/contract/IPvXAddress.h \
  base/Coord.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/batman/batmand/batman.h
$O/networklayer/manetrouting/batman/batmand/ring_buffer.o: networklayer/manetrouting/batman/batmand/ring_buffer.cc \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/arp/ARP.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Coord.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/batman/batmand/schedule.o: networklayer/manetrouting/batman/batmand/schedule.cc \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6Address.h \
  base/AbstractQueue.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/arp/ARP.h \
  networklayer/contract/IPvXAddress.h \
  base/Coord.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/batman/batmand/batman.h
$O/networklayer/manetrouting/dsdv/DSDV_2.o: networklayer/manetrouting/dsdv/DSDV_2.cc \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsdv/DSDVhello_m.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/contract/IPSocket.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsdv/DSDV_2.h
$O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o: networklayer/manetrouting/dsr/dsr-pkt_omnet.cc \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/headerserializers/ipv4/headers/ip.h
$O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o: networklayer/manetrouting/dsr/dsr-uu-omnetpp.cc \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  util/headerserializers/ipv4/headers/ip.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPSocket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/base/compatibility_dsr.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o: networklayer/manetrouting/dsr/dsr-uu/dsr-ack.cc \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotifierConsts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o: networklayer/manetrouting/dsr/dsr-uu/dsr-io.cc \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotifierConsts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-opt.cc \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  base/ModuleAccess.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/ICMP.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.cc \
  networklayer/ipv4/ICMP.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/ModuleAccess.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.cc \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/base/compatibility_dsr.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.cc \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-srt.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/INETDefs.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h
$O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o: networklayer/manetrouting/dsr/dsr-uu/link-cache.cc \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/INETDefs.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h
$O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o: networklayer/manetrouting/dsr/dsr-uu/maint-buf.cc \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/dsr/dsr-uu/neigh.o: networklayer/manetrouting/dsr/dsr-uu/neigh.cc \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/INETDefs.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o: networklayer/manetrouting/dsr/dsr-uu/path-cache.cc \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/ICMPAccess.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o: networklayer/manetrouting/dsr/dsr-uu/send-buf.cc \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/manetrouting/dymo/dymo_msg_struct.o: networklayer/manetrouting/dymo/dymo_msg_struct.cc \
  linklayer/contract/MACAddress.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h
$O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o: networklayer/manetrouting/dymo/dymo_packet_queue_omnet.cc \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/contract/IPv6Address.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  base/ModuleAccess.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymo_um_omnet.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h
$O/networklayer/manetrouting/dymo/dymo_um_omnet.o: networklayer/manetrouting/dymo/dymo_um_omnet.cc \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/AbstractQueue.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  base/QueueBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  transport/udp/UDPPacket_m.h \
  networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
  networklayer/contract/IPv6Address.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/base/ManetAddress.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/udp/UDPPacket.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymo_um_omnet.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  base/Coord.h
$O/networklayer/manetrouting/dymo/dymoum/blacklist.o: networklayer/manetrouting/dymo/dymoum/blacklist.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/ModuleAccess.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/base/ManetAddress.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/ReassemblyBuffer.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h
$O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o: networklayer/manetrouting/dymo/dymoum/debug_dymo.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/contract/IPv6Address.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/ModuleAccess.h \
  base/AbstractQueue.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o: networklayer/manetrouting/dymo/dymoum/dymo_generic.cc \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  base/AbstractQueue.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o: networklayer/manetrouting/dymo/dymoum/dymo_hello.cc \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  base/QueueBase.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/contract/IPv6Address.h \
  base/AbstractQueue.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/ModuleAccess.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o: networklayer/manetrouting/dymo/dymoum/dymo_nb.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/contract/IPv6Address.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/base/ManetAddress.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/IPv4Datagram_m.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_re.o: networklayer/manetrouting/dymo/dymoum/dymo_re.cc \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  base/AbstractQueue.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/MeshControlInfo_m.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o: networklayer/manetrouting/dymo/dymoum/dymo_rerr.cc \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/QueueBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/INETDefs.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMP.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o: networklayer/manetrouting/dymo/dymoum/dymo_socket.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  base/AbstractQueue.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o: networklayer/manetrouting/dymo/dymoum/dymo_timeout.cc \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/QueueBase.h \
  networklayer/manetrouting/dymo/dymoum/dymo_netlink.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/AbstractQueue.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o: networklayer/manetrouting/dymo/dymoum/dymo_uerr.cc \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/contract/IPv6Address.h \
  base/AbstractQueue.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h
$O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o: networklayer/manetrouting/dymo/dymoum/icmp_socket.cc \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/ModuleAccess.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/contract/IPv6Address.h \
  base/QueueBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h
$O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o: networklayer/manetrouting/dymo/dymoum/pending_rreq.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/contract/IPv6Address.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h
$O/networklayer/manetrouting/dymo/dymoum/rtable.o: networklayer/manetrouting/dymo/dymoum/rtable.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/k_route.h \
  networklayer/manetrouting/dymo/dymoum/dymo_netlink.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/timer_queue.o: networklayer/manetrouting/dymo/dymoum/timer_queue.cc \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  base/ReassemblyBuffer.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/dymo_fau/DYMO.o: networklayer/manetrouting/dymo_fau/DYMO.cc \
  base/AbstractQueue.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  transport/udp/UDPPacket_m.h \
  base/QueueBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  transport/contract/UDPSocket.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  transport/udp/UDPPacket.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  base/Coord.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  util/FWMath.h \
  base/NotifierConsts.h
$O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o: networklayer/manetrouting/dymo_fau/DYMO_DataQueue.cc \
  networklayer/ipv4/ICMP.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o: networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.cc \
  base/INotifiable.h \
  base/INETDefs.h \
  base/ModuleAccess.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/NotifierConsts.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.cc \
  networklayer/common/InterfaceTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  base/AbstractQueue.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/arp/IARPCache.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  base/Coord.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/ipv4/IPv4Datagram_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.cc \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/QueueBase.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  base/Compat.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  base/Coord.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o: networklayer/manetrouting/dymo_fau/DYMO_Timer.cc \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o: networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.cc \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/arp/IARPCache.h \
  base/ModuleAccess.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceTable.h
$O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o: networklayer/manetrouting/dymo_fau/InspectorHelpers.cc \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  base/Compat.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/olsr/OLSR.o: networklayer/manetrouting/olsr/OLSR.cc \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/contract/IPvXAddress.h \
  base/Coord.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  transport/udp/UDPPacket.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  base/Compat.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6Address.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/manetrouting/base/compatibility.h \
  util/opp_utils.h \
  networklayer/ipv4/ICMP.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/arp/ARP.h
$O/networklayer/manetrouting/olsr/OLSROPT.o: networklayer/manetrouting/olsr/OLSROPT.cc \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  transport/udp/UDPPacket.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  base/Compat.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/contract/IPvXAddress.h \
  base/Coord.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/olsr/OLSROPT.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/manetrouting/base/compatibility.h \
  util/opp_utils.h \
  networklayer/ipv4/ICMP.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/manetrouting/olsr/OLSR_ETX.o: networklayer/manetrouting/olsr/OLSR_ETX.cc \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/arp/ARP.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/compatibility.h \
  util/opp_utils.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/Coord.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o: networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.cc \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Coord.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  base/Compat.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  util/opp_utils.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/QueueBase.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  base/AbstractQueue.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_state.o: networklayer/manetrouting/olsr/OLSR_ETX_state.cc \
  base/Compat.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Coord.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/ICMPAccess.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/QueueBase.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  util/opp_utils.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/manetrouting/olsr/OLSR_rtable.o: networklayer/manetrouting/olsr/OLSR_rtable.cc \
  base/Coord.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/olsr/OLSR.h \
  linklayer/contract/MACAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPv6Address.h \
  base/QueueBase.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  base/ModuleAccess.h \
  base/AbstractQueue.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/ipv4/ICMP.h \
  util/opp_utils.h \
  networklayer/manetrouting/base/compatibility.h
$O/networklayer/manetrouting/olsr/OLSR_state.o: networklayer/manetrouting/olsr/OLSR_state.cc \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Coord.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/AbstractQueue.h \
  base/ModuleAccess.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/QueueBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/ICMP.h \
  util/opp_utils.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPv4.h \
  base/ProtocolMap.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h
$O/networklayer/mpls/LIBTable.o: networklayer/mpls/LIBTable.cc \
  networklayer/mpls/ConstType.h \
  util/XMLUtils.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/mpls/LIBTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/ModuleAccess.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h
$O/networklayer/mpls/MPLS.o: networklayer/mpls/MPLS.cc \
  transport/contract/TCPSocket.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  networklayer/mpls/IClassifier.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/mpls/MPLSPacket.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/TCPSocketMap.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/rsvp_te/IntServ_m.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  status/NodeStatus.h \
  base/ByteArray.h \
  base/Compat.h \
  networklayer/mpls/LIBTable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ldp/LDP.h \
  networklayer/common/InterfaceTableAccess.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ldp/LDPPacket_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/mpls/MPLS.h \
  networklayer/rsvp_te/Utils.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/mpls/ConstType.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h
$O/networklayer/mpls/MPLSPacket.o: networklayer/mpls/MPLSPacket.cc \
  base/INETDefs.h \
  networklayer/mpls/MPLSPacket.h \
  base/Compat.h
$O/networklayer/ospfv2/OSPFConfigReader.o: networklayer/ospfv2/OSPFConfigReader.cc \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/PatternMatcher.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  util/XMLUtils.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFConfigReader.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h
$O/networklayer/ospfv2/OSPFRouting.o: networklayer/ospfv2/OSPFRouting.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFConfigReader.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  status/NodeStatus.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPSocket.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/IPv4Route.h
$O/networklayer/ospfv2/interface/OSPFInterface.o: networklayer/ospfv2/interface/OSPFInterface.cc \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4InterfaceData.h
$O/networklayer/ospfv2/interface/OSPFInterfaceState.o: networklayer/ospfv2/interface/OSPFInterfaceState.cc \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o: networklayer/ospfv2/interface/OSPFInterfaceStateBackup.cc \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.cc \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o: networklayer/ospfv2/interface/OSPFInterfaceStateDown.cc \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o: networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.cc \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.cc \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o: networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.cc \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o: networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.cc \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h
$O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o: networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ipv4/IPv4Route.h
$O/networklayer/ospfv2/messagehandler/HelloHandler.o: networklayer/ospfv2/messagehandler/HelloHandler.cc \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h
$O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o: networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.cc \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h
$O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o: networklayer/ospfv2/messagehandler/LinkStateRequestHandler.cc \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h
$O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o: networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.cc \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h
$O/networklayer/ospfv2/messagehandler/MessageHandler.o: networklayer/ospfv2/messagehandler/MessageHandler.cc \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h
$O/networklayer/ospfv2/neighbor/OSPFNeighbor.o: networklayer/ospfv2/neighbor/OSPFNeighbor.cc \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborState.o: networklayer/ospfv2/neighbor/OSPFNeighborState.cc \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o: networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.cc \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o: networklayer/ospfv2/neighbor/OSPFNeighborStateDown.cc \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.cc \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  base/INETDefs.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.cc \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o: networklayer/ospfv2/neighbor/OSPFNeighborStateFull.cc \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ipv4/IPv4Route.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o: networklayer/ospfv2/neighbor/OSPFNeighborStateInit.cc \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o: networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.cc \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o: networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.cc \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/ospfv2/router/ASExternalLSA.o: networklayer/ospfv2/router/ASExternalLSA.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/LSA.o: networklayer/ospfv2/router/LSA.cc \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ospfv2/router/NetworkLSA.o: networklayer/ospfv2/router/NetworkLSA.cc \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ospfv2/router/OSPFArea.o: networklayer/ospfv2/router/OSPFArea.cc \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/common/IInterfaceTable.h
$O/networklayer/ospfv2/router/OSPFRouter.o: networklayer/ospfv2/router/OSPFRouter.cc \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/router/OSPFRoutingTableEntry.o: networklayer/ospfv2/router/OSPFRoutingTableEntry.cc \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h
$O/networklayer/ospfv2/router/RouterLSA.o: networklayer/ospfv2/router/RouterLSA.cc \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/ospfv2/router/SummaryLSA.o: networklayer/ospfv2/router/SummaryLSA.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/routing/aodv/AODVRouteData.o: networklayer/routing/aodv/AODVRouteData.cc \
  base/INETDefs.h \
  networklayer/routing/aodv/AODVRouteData.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/networklayer/routing/aodv/AODVRouting.o: networklayer/routing/aodv/AODVRouting.cc \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  status/NodeStatus.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  networklayer/routing/aodv/AODVRouting.h \
  transport/contract/UDPControlInfo_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  transport/udp/UDPPacket_m.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/routing/aodv/AODVRouteData.h \
  base/LifecycleOperation.h \
  transport/contract/UDPControlInfo.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/routing/aodv/AODVControlPackets_m.h \
  networklayer/contract/IPSocket.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h
$O/networklayer/routing/dymo/DYMORouteData.o: networklayer/routing/dymo/DYMORouteData.cc \
  base/INETDefs.h \
  networklayer/routing/dymo/DYMORouteData.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/routing/dymo/DYMOdefs.h
$O/networklayer/routing/dymo/xDYMO.o: networklayer/routing/dymo/xDYMO.cc \
  status/NodeStatus.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  transport/contract/UDPControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/routing/dymo/DYMOdefs.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/routing/dymo/DYMO_m.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/contract/UDPControlInfo.h \
  base/LifecycleOperation.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPSocket.h \
  networklayer/routing/dymo/DYMORouteData.h \
  networklayer/routing/dymo/xDYMO.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h
$O/networklayer/routing/gpsr/GPSR.o: networklayer/routing/gpsr/GPSR.cc \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPSocket.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  mobility/contract/IMobility.h \
  networklayer/routing/gpsr/PositionTable.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  status/NodeStatus.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/routing/gpsr/GPSR_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/NodeOperations.h \
  base/Coord.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/routing/gpsr/GPSRDefs.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/routing/gpsr/GPSR.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/routing/gpsr/PositionTable.o: networklayer/routing/gpsr/PositionTable.cc \
  base/Coord.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  util/FWMath.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/routing/gpsr/PositionTable.h
$O/networklayer/routing/rip/RIPRouting.o: networklayer/routing/rip/RIPRouting.cc \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  base/LifecycleOperation.h \
  transport/contract/UDPControlInfo.h \
  base/ModuleAccess.h \
  networklayer/routing/rip/RIPRouting.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv6Address.h \
  transport/udp/UDP.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/routing/rip/RIPPacket_m.h \
  linklayer/contract/MACAddress.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceMatcher.h \
  base/Compat.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/rsvp_te/RSVP.o: networklayer/rsvp_te/RSVP.cc \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/ted/TED.h \
  linklayer/contract/MACAddress.h \
  base/IScriptable.h \
  status/NodeStatus.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/mpls/LIBTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/rsvp_te/RSVP.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/mpls/LIBTableAccess.h \
  base/NodeOperations.h \
  util/XMLUtils.h \
  networklayer/contract/IPProtocolId_m.h \
  util/common.h \
  networklayer/rsvp_te/Utils.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/mpls/ConstType.h \
  networklayer/ted/TED_m.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/ted/TEDAccess.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  networklayer/mpls/IClassifier.h \
  networklayer/contract/IPSocket.h \
  base/LifecycleOperation.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/rsvp_te/RSVPPacket.h \
  base/ModuleAccess.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/rsvp_te/RSVPPathMsg.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/rsvp_te/SignallingMsg_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/rsvp_te/IRSVPClassifier.h
$O/networklayer/rsvp_te/SimpleClassifier.o: networklayer/rsvp_te/SimpleClassifier.cc \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  networklayer/mpls/IClassifier.h \
  networklayer/rsvp_te/SimpleClassifier.h \
  base/ILifecycle.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  base/INotifiable.h \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/rsvp_te/SignallingMsg_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/rsvp_te/IRSVPClassifier.h \
  networklayer/rsvp_te/RSVPPathMsg.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/rsvp_te/RSVPPacket.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  base/IScriptable.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/mpls/ConstType.h \
  util/XMLUtils.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/rsvp_te/RSVPAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/rsvp_te/RSVP.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/mpls/LIBTable.h \
  base/Compat.h
$O/networklayer/rsvp_te/Utils.o: networklayer/rsvp_te/Utils.cc \
  base/INETDefs.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/rsvp_te/Utils.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/networklayer/ted/LinkStateRouting.o: networklayer/ted/LinkStateRouting.cc \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ted/LinkStatePacket_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/ted/TED.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/ted/LinkStateRouting.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/rsvp_te/IntServ.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPSocket.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/ted/TED_m.h \
  networklayer/ted/TEDAccess.h
$O/networklayer/ted/TED.o: networklayer/ted/TED.cc \
  networklayer/contract/IPvXAddress.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/ted/TED.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/rsvp_te/IntServ.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/LifecycleOperation.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ted/TED_m.h
$O/networklayer/xmipv6/BindingCache.o: networklayer/xmipv6/BindingCache.cc \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/xmipv6/BindingCache.h
$O/networklayer/xmipv6/BindingUpdateList.o: networklayer/xmipv6/BindingUpdateList.cc \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/NotificationBoard.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/Compat.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h
$O/networklayer/xmipv6/MobilityHeader.o: networklayer/xmipv6/MobilityHeader.cc \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/Compat.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/xmipv6/MobilityHeader.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/xmipv6/xMIPv6.o: networklayer/xmipv6/xMIPv6.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  base/Compat.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/xmipv6/BindingCacheAccess.h \
  base/NotifierConsts.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/xmipv6/BindingCache.h \
  networklayer/xmipv6/MobilityHeader.h \
  base/NotificationBoard.h \
  networklayer/xmipv6/BindingUpdateListAccess.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  networklayer/xmipv6/xMIPv6.h
$O/ofomnet/openflow/Buffer.o: ofomnet/openflow/Buffer.cc \
  ofomnet/openflow/openflow.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/INETDefs.h \
  ofomnet/openflow/Buffer.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/MACAddress.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h
$O/ofomnet/openflow/Flow_Table.o: ofomnet/openflow/Flow_Table.cc \
  linklayer/ethernet/EtherFrame_m.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/Flow_Table.h \
  base/INETDefs.h \
  networklayer/arp/ARPPacket_m.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/ofomnet/openflow/OFA_controller.o: ofomnet/openflow/OFA_controller.cc \
  ofomnet/openflow/messages/OFP_Flow_Stats_Reply_m.h \
  ofomnet/openflow/ctrlApps/Switch.h \
  ofomnet/openflow/messages/OFP_Echo_Request_m.h \
  networklayer/contract/IPProtocolId_m.h \
  ofomnet/openflow/messages/OFP_Features_Request_m.h \
  ofomnet/openflow/messages/OFP_Packet_Out_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  ofomnet/openflow/messages/OFP_Flow_Stats_Request_m.h \
  transport/tcp_common/TCPSegment_m.h \
  ofomnet/openflow/OFA_controller.h \
  networklayer/contract/IPv4Address.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  base/ByteArray_m.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  ofomnet/openflow/ctrlApps/Forwarding.h \
  base/ByteArray.h \
  ofomnet/openflow/messages/OFP_Flow_Removed_m.h \
  ofomnet/openflow/messages/OFP_Echo_Reply_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/tcp_common/TCPSegment.h \
  applications/tcpapp/GenericAppMsg_m.h \
  networklayer/common/InterfaceEntry.h \
  ofomnet/openflow/OF_Wrapper.h \
  base/ModuleAccess.h \
  ofomnet/openflow/ctrlApps/Hub.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  transport/tcp/TCPConnection.h \
  ofomnet/openflow/messages/OFP_Port_Status_m.h \
  ofomnet/openflow/messages/OFP_Flow_Mod_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  ofomnet/openflow/openflow.h \
  networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  transport/contract/TCPSocket.h \
  ofomnet/openflow/messages/OFP_Features_Reply_m.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  linklayer/ethernet/EtherFrame_m.h \
  transport/tcp/TCP.h
$O/ofomnet/openflow/OFA_switch.o: ofomnet/openflow/OFA_switch.cc \
  ofomnet/openflow/messages/OFP_Flow_Mod_m.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/messages/OFP_Port_Status_m.h \
  ofomnet/openflow/messages/OFP_Features_Reply_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  transport/contract/TCPSocket.h \
  networklayer/arp/ARPPacket_m.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  ofomnet/openflow/Flow_Table.h \
  ofomnet/openflow/OF_Wrapper.h \
  ofomnet/openflow/Buffer.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  ofomnet/openflow/messages/OFP_Flow_Removed_m.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  ofomnet/openflow/messages/OFP_Echo_Reply_m.h \
  ofomnet/openflow/Open_Flow_Processing.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  ofomnet/openflow/messages/OFP_Packet_Out_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  ofomnet/openflow/OFA_switch.h \
  ofomnet/openflow/messages/OFP_Flow_Stats_Reply_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  ofomnet/openflow/messages/OFP_Flow_Stats_Request_m.h
$O/ofomnet/openflow/OF_Wrapper.o: ofomnet/openflow/OF_Wrapper.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  ofomnet/openflow/OF_Wrapper.h \
  base/INETDefs.h \
  linklayer/ethernet/EtherFrame_m.h \
  ofomnet/openflow/openflow.h
$O/ofomnet/openflow/Open_Flow_Processing.o: ofomnet/openflow/Open_Flow_Processing.cc \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/Ethernet.h \
  ofomnet/openflow/Open_Flow_Processing.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  base/ByteArray.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ByteArray_m.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/Buffer.h \
  ofomnet/openflow/OF_Wrapper.h \
  ofomnet/openflow/Flow_Table.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  base/INotifiable.h \
  networklayer/arp/ARPPacket_m.h
$O/ofomnet/openflow/apps/PingAppRandom.o: ofomnet/openflow/apps/PingAppRandom.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  ofomnet/openflow/apps/PingAppRandom.h \
  applications/pingapp/PingPayload_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv6ControlInfo_m.h
$O/ofomnet/openflow/attackDetection/AttackDetection.o: ofomnet/openflow/attackDetection/AttackDetection.cc \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  ofomnet/openflow/OFA_controller.h \
  networklayer/contract/IPv4Address.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  transport/contract/TCPSocket.h \
  linklayer/ethernet/EtherFrame_m.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h
$O/ofomnet/openflow/attackDetection/methods/Entropy.o: ofomnet/openflow/attackDetection/methods/Entropy.cc \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/MACAddress.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  ofomnet/openflow/OFA_controller.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  transport/contract/TCPSocket.h \
  linklayer/ethernet/EtherFrame_m.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h
$O/ofomnet/openflow/ctrlApps/Forwarding.o: ofomnet/openflow/ctrlApps/Forwarding.cc \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/Ethernet.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  ofomnet/openflow/ctrlApps/Forwarding.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  status/NodeStatus.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  ofomnet/openflow/OFA_controller.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/IPassiveQueue.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  linklayer/ethernet/EtherMACBase.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/common/MACBase.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  linklayer/ethernet/EtherFrame_m.h \
  transport/contract/TCPSocket.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  ofomnet/openflow/openflow.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  linklayer/ethernet/EtherMAC.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  ofomnet/openflow/OF_Wrapper.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/contract/IPv6Address.h
$O/ofomnet/openflow/ctrlApps/FwdSwitch.o: ofomnet/openflow/ctrlApps/FwdSwitch.cc \
  ofomnet/openflow/openflow.h \
  transport/contract/TCPSocket.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  linklayer/ethernet/EtherFrame_m.h \
  ofomnet/openflow/ctrlApps/FwdSwitch.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  transport/udp/UDPPacket_m.h \
  ofomnet/openflow/OF_Wrapper.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  base/ByteArray.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/udp/UDPPacket.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  ofomnet/openflow/OFA_controller.h
$O/ofomnet/openflow/ctrlApps/Hub.o: ofomnet/openflow/ctrlApps/Hub.cc \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  ofomnet/openflow/OFA_controller.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/Ethernet.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  ofomnet/openflow/ctrlApps/Hub.h \
  ofomnet/openflow/OF_Wrapper.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ethernet/EtherFrame_m.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  transport/contract/TCPSocket.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  ofomnet/openflow/openflow.h
$O/ofomnet/openflow/ctrlApps/Switch.o: ofomnet/openflow/ctrlApps/Switch.cc \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  ofomnet/openflow/OFA_controller.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  networklayer/contract/IPProtocolId_m.h \
  ofomnet/openflow/ctrlApps/Switch.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/MACAddress.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  ofomnet/openflow/OF_Wrapper.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  transport/contract/TCPSocket.h \
  linklayer/ethernet/EtherFrame_m.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  ofomnet/openflow/openflow.h
$O/ofomnet/openflow/mitigation/Mitigation.o: ofomnet/openflow/mitigation/Mitigation.cc \
  ofomnet/openflow/mitigation/Mitigation.h \
  linklayer/ethernet/EtherFrame_m.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  transport/contract/TCPSocket.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  ofomnet/openflow/OF_Wrapper.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/Ethernet.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  ofomnet/openflow/OFA_controller.h \
  networklayer/contract/IPv4Address.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h
$O/ofomnet/openflow/utility/SpanningTree.o: ofomnet/openflow/utility/SpanningTree.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  ofomnet/openflow/utility/SpanningTree.h \
  ofomnet/openflow/Open_Flow_Processing.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  ofomnet/openflow/Flow_Table.h \
  ofomnet/openflow/OF_Wrapper.h \
  ofomnet/openflow/Buffer.h \
  networklayer/arp/ARPPacket_m.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ethernet/EtherFrame_m.h \
  ofomnet/openflow/openflow.h
$O/ofomnet/openflow/utility/kPartitionNetwork.o: ofomnet/openflow/utility/kPartitionNetwork.cc \
  ofomnet/openflow/utility/kPartitionNetwork.h
$O/ofomnet/openflow/utility/placeController.o: ofomnet/openflow/utility/placeController.cc \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  ofomnet/openflow/Open_Flow_Processing.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/arp/ARPPacket_m.h \
  base/INotifiable.h \
  ofomnet/openflow/utility/placeController.h \
  networklayer/contract/IPv6Address.h \
  ofomnet/openflow/Flow_Table.h \
  ofomnet/openflow/Buffer.h \
  ofomnet/openflow/OF_Wrapper.h \
  ofomnet/openflow/openflow.h \
  linklayer/ethernet/EtherFrame_m.h
$O/parser/Parser.o: parser/Parser.cc \
  /usr/include/glib-2.0/glib/gwin32.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/libxml++-2.6/libxml++/attributedeclaration.h \
  /usr/include/glib-2.0/glib/gdatetime.h \
  attacks/attackbase/AttackBase.h \
  /usr/include/libxml++-2.6/libxml++/parsers/domparser.h \
  /usr/include/glib-2.0/glib/gutils.h \
  actions/disable/nodeRelease/NodeRelease.h \
  /usr/include/glib-2.0/glib/ggettext.h \
  actions/clone/Clone.h \
  /usr/include/glib-2.0/glib/gnode.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/parse_error.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  /usr/include/glib-2.0/glib/glist.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludeend.h \
  /usr/include/glib-2.0/glib/deprecated/gcache.h \
  /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/libxml++-2.6/libxml++/parsers/saxparser.h \
  util/FWMath.h \
  /usr/include/glib-2.0/glib/gversion.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/libxml++-2.6/libxml++/schema.h \
  attacks/conditionalattack/conditionalattack/ConditionalAttack.h \
  /usr/include/glib-2.0/glib/ghash.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/libxml++-2.6/libxml++/nodes/node.h \
  parser/Parser.h \
  /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/glib-2.0/glib/gerror.h \
  /usr/include/glib-2.0/glib/gbytes.h \
  /usr/include/libxml++-2.6/libxml++/attribute.h \
  /usr/include/glib-2.0/glib/gqsort.h \
  /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glib-2.0/glib/ghostutils.h \
  base/Compat.h \
  /usr/include/glib-2.0/glib/gtimer.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidator.h \
  /usr/include/libxml++-2.6/libxml++/nodes/commentnode.h \
  /usr/include/libxml++-2.6/libxml++/parsers/textreader.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludestart.h \
  /usr/include/glib-2.0/glib/gmain.h \
  actions/destroy/Destroy.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  actions/actionbase/ActionBase.h \
  /usr/include/libxml++-2.6/libxml++/validators/relaxngvalidator.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/libxml++-2.6/libxml++/nodes/processinginstructionnode.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  networklayer/contract/IPv4Address.h \
  /usr/include/libxml++-2.6/libxml++/libxml++.h \
  /usr/include/glib-2.0/glib/gbitlock.h \
  /usr/include/glib-2.0/glib/deprecated/gmain.h \
  actions/put/Put.h \
  /usr/include/glib-2.0/glib/grand.h \
  /usr/include/libxml++-2.6/libxml++/relaxngschema.h \
  /usr/include/glib-2.0/glib/gpoll.h \
  /usr/include/libxml++-2.6/libxml++/nodes/cdatanode.h \
  base/Coord.h \
  attacks/physicalattack/PhysicalAttack.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidatorbase.h \
  /usr/include/libxml++-2.6/libxml++/nodes/element.h \
  /usr/include/libxml++-2.6/libxml++/validators/xsdvalidator.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/glib-2.0/glib/deprecated/gallocator.h \
  actions/drop/Drop.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  actions/create/Create.h \
  /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  /usr/include/glib-2.0/glib/deprecated/gthread.h \
  actions/send/Send.h \
  /usr/include/glib-2.0/glib/gtimezone.h \
  /usr/include/glib-2.0/glib/deprecated/grel.h \
  /usr/include/glib-2.0/glib/goption.h \
  attacks/attackentry/AttackEntry.h \
  /usr/include/glibmm-2.4/glibmm/unicode.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entitydeclaration.h \
  /usr/include/libxml++-2.6/libxml++/schemabase.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/glib-2.0/glib/gstringchunk.h \
  /usr/include/glib-2.0/glib/gqueue.h \
  /usr/include/libxml++-2.6/libxml++/nodes/textnode.h \
  /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  variable/Variable.h \
  /usr/include/glib-2.0/glib/gvarianttype.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/internal_error.h \
  /usr/include/libxml++-2.6/libxml++/dtd.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/glib-2.0/glib/gdate.h \
  /usr/include/glib-2.0/glib.h \
  /usr/include/glib-2.0/glib/gvariant.h \
  /usr/include/libxml++-2.6/libxml++/parsers/parser.h \
  /usr/include/libxml++-2.6/libxml++/nodes/contentnode.h \
  actions/seappexpression/SEAPPExpression.h \
  /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/glib-2.0/glib/genviron.h \
  /usr/include/libxml++-2.6/libxml++/noncopyable.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/validity_error.h \
  /usr/include/glib-2.0/glib/gtree.h \
  /usr/include/libxml++-2.6/libxml++/validators/validator.h \
  /usr/include/glib-2.0/glib/gcharset.h \
  /usr/include/libxml++-2.6/libxml++/xsdschema.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  /usr/include/glib-2.0/glib/gversionmacros.h \
  globalfilter/putmessages/PutMessages.h \
  util/seapputils/seapputils.h \
  /usr/include/glib-2.0/glib/ghmac.h \
  /usr/include/glibmm-2.4/glibmm/ustring.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/glib-2.0/glib/gtrashstack.h \
  /usr/include/glib-2.0/glib/glib-autocleanups.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/gmem.h \
  /usr/include/glib-2.0/glib/gthread.h \
  actions/move/Move.h \
  attacks/unconditionalattack/UnconditionalAttack.h \
  /usr/include/glib-2.0/glib/gurifuncs.h \
  /usr/lib/x86_64-linux-gnu/libxml++-2.6/include/libxml++config.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib/ghook.h \
  /usr/include/libxml++-2.6/libxml++/attributenode.h \
  /usr/include/glib-2.0/glib/deprecated/gcompletion.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  /usr/include/libxml++-2.6/libxml++/document.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  actions/change/Change.h \
  actions/disable/Disable.h \
  /usr/include/libxml++-2.6/libxml++/validators/dtdvalidator.h \
  /usr/lib/x86_64-linux-gnu/glibmm-2.4/include/glibmmconfig.h \
  /usr/include/glib-2.0/glib/gshell.h \
  /usr/lib/x86_64-linux-gnu/glib-2.0/include/glibconfig.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/exception.h \
  base/INETDefs.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entityreference.h \
  actions/retrieve/Retrieve.h
$O/status/NodeStatus.o: status/NodeStatus.cc \
  base/NodeOperations.h \
  base/Compat.h \
  status/NodeStatus.h \
  base/INETDefs.h \
  base/ModuleAccess.h \
  base/LifecycleOperation.h \
  base/ILifecycle.h
$O/transport/contract/SCTPSocket.o: transport/contract/SCTPSocket.cc \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPSocket.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/SCTPCommand_m.h \
  transport/sctp/SCTP.h \
  transport/contract/SCTPCommand.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPSocket.h
$O/transport/contract/TCPSocket.o: transport/contract/TCPSocket.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h
$O/transport/contract/TCPSocketMap.o: transport/contract/TCPSocketMap.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/TCPSocketMap.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/transport/contract/UDPSocket.o: transport/contract/UDPSocket.cc \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/UDPSocket.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  transport/contract/UDPControlInfo.h \
  base/NotificationBoard.h
$O/transport/rtp/RTCP.o: transport/rtp/RTCP.cc \
  transport/rtp/RTPParticipantInfo.h \
  transport/contract/UDPSocket.h \
  transport/rtp/RTPInnerPacket_m.h \
  base/ILifecycle.h \
  transport/rtp/RTCP.h \
  transport/rtp/RTPPacket_m.h \
  base/LifecycleOperation.h \
  transport/rtp/sdes.h \
  transport/rtp/reports.h \
  transport/rtp/RTCPPacket3.h \
  transport/rtp/RTPInnerPacket.h \
  base/ModuleAccess.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  transport/rtp/RTCPPacket2_m.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTCPPacket3_m.h \
  transport/rtp/RTCPPacket1.h \
  transport/rtp/RTPSenderInfo.h \
  transport/rtp/RTCPPacket2.h \
  status/NodeStatus.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTCPPacket1_m.h \
  transport/rtp/RTCPPacket.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  transport/rtp/RTPReceiverInfo.h
$O/transport/rtp/RTCPPacket.o: transport/rtp/RTCPPacket.cc \
  transport/rtp/RTCPPacket3.h \
  base/INETDefs.h \
  transport/rtp/sdes.h \
  transport/rtp/reports.h \
  transport/rtp/RTCPPacket1_m.h \
  base/Compat.h \
  transport/rtp/RTCPPacket.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTCPPacket2_m.h \
  transport/rtp/RTCPPacket2.h \
  transport/rtp/RTCPPacket3_m.h \
  transport/rtp/RTCPPacket1.h
$O/transport/rtp/RTP.o: transport/rtp/RTP.cc \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  transport/rtp/RTPInnerPacket.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/rtp/RTPPacket_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  base/LifecycleOperation.h \
  transport/contract/UDPSocket.h \
  transport/rtp/RTPInnerPacket_m.h \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  transport/rtp/RTPProfile.h \
  transport/rtp/RTP.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInterfacePacket_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  linklayer/contract/MACAddress.h \
  transport/contract/UDPControlInfo_m.h
$O/transport/rtp/RTPInnerPacket.o: transport/rtp/RTPInnerPacket.cc \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  base/INETDefs.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPInnerPacket_m.h
$O/transport/rtp/RTPPacket.o: transport/rtp/RTPPacket.cc \
  transport/rtp/RTPPacket_m.h \
  base/INETDefs.h \
  base/Compat.h \
  transport/rtp/RTPPacket.h
$O/transport/rtp/RTPParticipantInfo.o: transport/rtp/RTPParticipantInfo.cc \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/reports.h \
  transport/rtp/sdes.h \
  transport/rtp/RTPParticipantInfo.h \
  base/INETDefs.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTPPacket.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/transport/rtp/RTPPayloadReceiver.o: transport/rtp/RTPPayloadReceiver.cc \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPPacket.h \
  base/Compat.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/INETDefs.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPPayloadReceiver.h
$O/transport/rtp/RTPPayloadSender.o: transport/rtp/RTPPayloadSender.cc \
  base/Compat.h \
  transport/rtp/RTPPayloadSender.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInterfacePacket_m.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  base/INETDefs.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPInnerPacket_m.h
$O/transport/rtp/RTPProfile.o: transport/rtp/RTPProfile.cc \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPProfile.h \
  transport/rtp/RTPPacket.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/rtp/RTPPayloadSender.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPPayloadReceiver.h \
  transport/rtp/RTPInnerPacket_m.h \
  base/INETDefs.h \
  transport/rtp/RTPInnerPacket.h
$O/transport/rtp/RTPReceiverInfo.o: transport/rtp/RTPReceiverInfo.cc \
  base/INETDefs.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/reports.h \
  transport/rtp/sdes.h \
  transport/rtp/RTPPacket_m.h \
  base/Compat.h \
  transport/rtp/RTPPacket.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPReceiverInfo.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTPParticipantInfo_m.h
$O/transport/rtp/RTPSenderInfo.o: transport/rtp/RTPSenderInfo.cc \
  base/Compat.h \
  transport/rtp/RTPPacket.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/RTPSenderInfo.h \
  transport/rtp/reports_m.h \
  base/INETDefs.h \
  transport/rtp/reports.h \
  transport/rtp/sdes.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPParticipantInfo.h
$O/transport/rtp/reports.o: transport/rtp/reports.cc \
  transport/rtp/reports.h \
  transport/rtp/reports_m.h
$O/transport/rtp/sdes.o: transport/rtp/sdes.cc \
  base/INETDefs.h \
  transport/rtp/sdes.h \
  base/Compat.h
$O/transport/rtp/profiles/avprofile/RTPAVProfile.o: transport/rtp/profiles/avprofile/RTPAVProfile.cc \
  base/INETDefs.h \
  transport/rtp/profiles/avprofile/RTPAVProfile.h \
  transport/rtp/RTPProfile.h \
  base/Compat.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.cc \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPPayloadReceiver.h \
  base/INETDefs.h \
  transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.h \
  transport/rtp/RTPPacket.h \
  base/Compat.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.cc \
  transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPInnerPacket.h \
  base/INETDefs.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPayloadSender.h \
  base/Compat.h
$O/transport/sctp/SCTP.o: transport/sctp/SCTP.cc \
  networklayer/contract/IPSocket.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPMessage.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTP.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/SCTPCommand_m.h
$O/transport/sctp/SCTPAlg.o: transport/sctp/SCTPAlg.cc \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPQueue.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPAlg.h \
  transport/sctp/SCTPMessage.h \
  transport/contract/UDPSocket.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPAlgorithm.h
$O/transport/sctp/SCTPAssociationAddIP.o: transport/sctp/SCTPAssociationAddIP.cc \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/sctp/SCTPMessage.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  util/common.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPQueue.h \
  linklayer/contract/MACAddress.h
$O/transport/sctp/SCTPAssociationBase.o: transport/sctp/SCTPAssociationBase.cc \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPQueue.h \
  linklayer/contract/MACAddress.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/sctp/SCTPMessage.h \
  networklayer/ipv6/RoutingTable6.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPAlgorithm.h \
  base/INETDefs.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPReceiveStream.h
$O/transport/sctp/SCTPAssociationEventProc.o: transport/sctp/SCTPAssociationEventProc.cc \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/NotifierConsts.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPQueue.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/contract/SCTPCommand.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPMessage.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h
$O/transport/sctp/SCTPAssociationRcvMessage.o: transport/sctp/SCTPAssociationRcvMessage.cc \
  base/NotifierConsts.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPQueue.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPProtocolId_m.h \
  util/common.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/common/InterfaceTable.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPMessage.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPAlgorithm.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/contract/SCTPCommand.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h
$O/transport/sctp/SCTPAssociationSendAll.o: transport/sctp/SCTPAssociationSendAll.cc \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPAlgorithm.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/contract/SCTPCommand.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h \
  transport/contract/UDPSocket.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  transport/sctp/SCTPMessage.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPQueue.h \
  linklayer/contract/MACAddress.h
$O/transport/sctp/SCTPAssociationStreamReset.o: transport/sctp/SCTPAssociationStreamReset.cc \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  transport/contract/UDPSocket.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  transport/sctp/SCTPMessage.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPQueue.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h \
  base/Compat.h
$O/transport/sctp/SCTPAssociationUtil.o: transport/sctp/SCTPAssociationUtil.cc \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/InterfaceTable.h \
  transport/contract/UDPSocket.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  transport/sctp/SCTPMessage.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPAlgorithm.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  base/ModuleAccess.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPQueue.h \
  linklayer/contract/MACAddress.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  util/common.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h
$O/transport/sctp/SCTPCCFunctions.o: transport/sctp/SCTPCCFunctions.cc \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPReceiveStream.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPMessage.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/NotifierConsts.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPQueue.h \
  linklayer/contract/MACAddress.h
$O/transport/sctp/SCTPGapList.o: transport/sctp/SCTPGapList.cc \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/NotifierConsts.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPQueue.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPMessage.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h
$O/transport/sctp/SCTPMessage.o: transport/sctp/SCTPMessage.cc \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPMessage.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h \
  base/Compat.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPQueue.h
$O/transport/sctp/SCTPNatHook.o: transport/sctp/SCTPNatHook.cc \
  networklayer/ipv4/ICMPMessage.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/InterfaceTable.h \
  transport/contract/UDPSocket.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4.h \
  transport/sctp/SCTPMessage.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  base/QueueBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/arp/IARPCache.h \
  transport/sctp/SCTPNatHook.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPAssociation.h \
  base/AbstractQueue.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTP.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPQueue.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPNatTable.h \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPGapList.h
$O/transport/sctp/SCTPNatTable.o: transport/sctp/SCTPNatTable.cc \
  transport/sctp/SCTPNatTable.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPQueue.h \
  base/NotifierConsts.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPMessage.h \
  transport/contract/UDPSocket.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h
$O/transport/sctp/SCTPQueue.o: transport/sctp/SCTPQueue.cc \
  base/NotifierConsts.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPQueue.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPMessage.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h
$O/transport/sctp/SCTPReceiveStream.o: transport/sctp/SCTPReceiveStream.cc \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPMessage.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPAssociation.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPReceiveStream.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPQueue.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv4Address.h
$O/transport/sctp/SCTPSSFunctions.o: transport/sctp/SCTPSSFunctions.cc \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  base/NotifierConsts.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPQueue.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPReceiveStream.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPMessage.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h
$O/transport/sctp/SCTPSendStream.o: transport/sctp/SCTPSendStream.cc \
  transport/sctp/SCTPAssociation.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/contract/UDPSocket.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTP.h
$O/transport/tcp/TCP.o: transport/tcp/TCP.cc \
  networklayer/ipv4/ICMPMessage_m.h \
  status/NodeStatus.h \
  base/ByteArray.h \
  transport/tcp/queues/TCPByteStreamSendQueue.h \
  base/ByteArrayBuffer.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/tcp/TCPReceiveQueue.h \
  networklayer/contract/IPProtocolId_m.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  base/Compat.h \
  transport/tcp/queues/TCPByteStreamRcvQueue.h \
  networklayer/contract/IPv4ControlInfo.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  transport/tcp/TCPSendQueue.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/queues/TCPMsgBasedRcvQueue.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  base/LifecycleOperation.h \
  base/ILifecycle.h \
  networklayer/contract/IPSocket.h \
  transport/tcp/TCP.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp/queues/TCPMsgBasedSendQueue.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/tcp/queues/TCPVirtualDataSendQueue.h
$O/transport/tcp/TCPConnectionBase.o: transport/tcp/TCPConnectionBase.cc \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  base/ByteArray.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  base/Compat.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  base/ByteArray_m.h \
  transport/tcp/TCPSendQueue.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/TCPConnectionEventProc.o: transport/tcp/TCPConnectionEventProc.cc \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  base/ByteArray.h \
  base/Compat.h \
  base/ByteArray_m.h \
  transport/tcp/TCPSendQueue.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h
$O/transport/tcp/TCPConnectionRcvSegment.o: transport/tcp/TCPConnectionRcvSegment.cc \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPConnection.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPSendQueue.h \
  base/ByteArray_m.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  base/ByteArray.h
$O/transport/tcp/TCPConnectionSackUtil.o: transport/tcp/TCPConnectionSackUtil.cc \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv6Address.h \
  base/ByteArray.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/TCPAlgorithm.h
$O/transport/tcp/TCPConnectionUtil.o: transport/tcp/TCPConnectionUtil.cc \
  linklayer/contract/MACAddress.h \
  base/ByteArray.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray_m.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/TCPReceiveQueue.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h
$O/transport/tcp/TCPSACKRexmitQueue.o: transport/tcp/TCPSACKRexmitQueue.cc \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  transport/tcp/TCPSACKRexmitQueue.h
$O/transport/tcp/flavours/DumbTCP.o: transport/tcp/flavours/DumbTCP.cc \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray_m.h \
  base/Compat.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/DumbTCP.h \
  base/ByteArray.h \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h
$O/transport/tcp/flavours/TCPBaseAlg.o: transport/tcp/flavours/TCPBaseAlg.cc \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/ByteArray.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  base/ByteArray_m.h \
  base/Compat.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h
$O/transport/tcp/flavours/TCPNewReno.o: transport/tcp/flavours/TCPNewReno.cc \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/flavours/TCPNewReno.h \
  base/ByteArray.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  base/Compat.h
$O/transport/tcp/flavours/TCPNoCongestionControl.o: transport/tcp/flavours/TCPNoCongestionControl.cc \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/TCPNoCongestionControl.h \
  base/ByteArray.h \
  transport/tcp/flavours/TCPBaseAlg.h
$O/transport/tcp/flavours/TCPReno.o: transport/tcp/flavours/TCPReno.cc \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  base/ByteArray.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/flavours/TCPReno.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv6Address.h
$O/transport/tcp/flavours/TCPSegmentTransmitInfoList.o: transport/tcp/flavours/TCPSegmentTransmitInfoList.cc \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/ByteArray.h \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  base/Compat.h \
  base/ByteArray_m.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPTahoe.o: transport/tcp/flavours/TCPTahoe.cc \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray_m.h \
  base/Compat.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/flavours/TCPTahoe.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/ByteArray.h \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h
$O/transport/tcp/flavours/TCPTahoeRenoFamily.o: transport/tcp/flavours/TCPTahoeRenoFamily.cc \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  base/Compat.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h
$O/transport/tcp/flavours/TCPVegas.o: transport/tcp/flavours/TCPVegas.cc \
  base/Compat.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/flavours/TCPVegas.h \
  base/ByteArray.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPConnection.h
$O/transport/tcp/flavours/TCPWestwood.o: transport/tcp/flavours/TCPWestwood.cc \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray_m.h \
  base/Compat.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/ByteArray.h \
  transport/tcp/flavours/TCPWestwood.h
$O/transport/tcp/queues/TCPByteStreamRcvQueue.o: transport/tcp/queues/TCPByteStreamRcvQueue.cc \
  transport/tcp/TCPConnection.h \
  base/ByteArrayMessage_m.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  base/ByteArray.h \
  base/ByteArrayMessage.h \
  transport/tcp/TCPReceiveQueue.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  base/Compat.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  transport/tcp/queues/TCPByteStreamRcvQueue.h \
  base/ByteArray_m.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPByteStreamSendQueue.o: transport/tcp/queues/TCPByteStreamSendQueue.cc \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPSendQueue.h \
  base/ByteArray_m.h \
  transport/tcp/queues/TCPByteStreamSendQueue.h \
  base/ByteArray.h \
  base/ByteArrayMessage.h \
  base/ByteArrayBuffer.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPConnection.h \
  base/ByteArrayMessage_m.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h
$O/transport/tcp/queues/TCPMsgBasedRcvQueue.o: transport/tcp/queues/TCPMsgBasedRcvQueue.cc \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/queues/TCPMsgBasedRcvQueue.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray_m.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  base/Compat.h \
  base/ByteArray.h
$O/transport/tcp/queues/TCPMsgBasedSendQueue.o: transport/tcp/queues/TCPMsgBasedSendQueue.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  transport/tcp/queues/TCPMsgBasedSendQueue.h \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray_m.h \
  transport/tcp/TCPSendQueue.h \
  base/ByteArray.h
$O/transport/tcp/queues/TCPVirtualDataRcvQueue.o: transport/tcp/queues/TCPVirtualDataRcvQueue.cc \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  base/ByteArray.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray_m.h
$O/transport/tcp/queues/TCPVirtualDataSendQueue.o: transport/tcp/queues/TCPVirtualDataSendQueue.cc \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  base/Compat.h \
  transport/tcp/TCPSendQueue.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/queues/TCPVirtualDataSendQueue.h \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h
$O/transport/tcp_common/TCPSegment.o: transport/tcp_common/TCPSegment.cc \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray_m.h \
  base/Compat.h \
  base/ByteArray.h
$O/transport/tcp_common/TCPSpoof.o: transport/tcp_common/TCPSpoof.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/tcp_common/TCPSpoof.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  linklayer/contract/MACAddress.h
$O/transport/udp/UDP.o: transport/udp/UDP.cc \
  status/NodeStatus.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/NotifierConsts.h \
  linklayer/contract/MACAddress.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/NodeOperations.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/udp/UDPPacket.h \
  networklayer/icmpv6/ICMPv6Access.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/LifecycleOperation.h \
  transport/contract/UDPControlInfo.h \
  networklayer/ipv4/IPv4Route.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPSocket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  transport/udp/UDPPacket_m.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6Address.h \
  transport/udp/UDP.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h
$O/util/Delayer.o: util/Delayer.cc \
  util/Delayer.h \
  base/INETDefs.h \
  base/Compat.h
$O/util/Macho.o: util/Macho.cc \
  util/Macho.h
$O/util/MessageChecker.o: util/MessageChecker.cc \
  base/Compat.h \
  base/INETDefs.h \
  util/MessageChecker.h
$O/util/NetAnimTrace.o: util/NetAnimTrace.cc \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h \
  base/INETDefs.h \
  util/NetAnimTrace.h \
  util/FWMath.h \
  base/Compat.h \
  base/Coord.h
$O/util/OrdinalBasedDropper.o: util/OrdinalBasedDropper.cc \
  util/OrdinalBasedDropper.h \
  base/INETDefs.h \
  base/Compat.h
$O/util/OrdinalBasedDuplicator.o: util/OrdinalBasedDuplicator.cc \
  base/Compat.h \
  util/OrdinalBasedDuplicator.h \
  base/INETDefs.h
$O/util/PacketDump.o: util/PacketDump.cc \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPGapList.h \
  base/ByteArray_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/PacketDump.h \
  base/Compat.h \
  base/ByteArray.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  base/NotifierConsts.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPQueue.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/arp/ARPPacket_m.h \
  transport/udp/UDPPacket_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  base/ModuleAccess.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPMessage.h
$O/util/PatternMatcher.o: util/PatternMatcher.cc \
  base/Compat.h \
  util/PatternMatcher.h \
  base/INETDefs.h
$O/util/PcapDump.o: util/PcapDump.cc \
  util/PcapDump.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/ipv6/IPv6Serializer.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/ipv4/IPv4Serializer.h
$O/util/PcapRecorder.o: util/PcapRecorder.cc \
  util/PcapRecorder.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv4Address.h \
  util/PacketDump.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv6Address.h \
  util/PcapDump.h
$O/util/TCPDump.o: util/TCPDump.cc \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/PcapDump.h \
  networklayer/contract/IPProtocolId_m.h \
  util/PacketDump.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  util/TCPDump.h
$O/util/ThruputMeter.o: util/ThruputMeter.cc \
  base/Compat.h \
  base/INETDefs.h \
  util/ThruputMeter.h
$O/util/ThruputMeteringChannel.o: util/ThruputMeteringChannel.cc \
  base/INETDefs.h \
  util/ThruputMeteringChannel.h \
  base/Compat.h
$O/util/XMLUtils.o: util/XMLUtils.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPvXAddressResolver.h \
  util/XMLUtils.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/util/common.o: util/common.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/common.h
$O/util/int128.o: util/int128.cc \
  base/INETDefs.h \
  util/int128.h \
  base/Compat.h
$O/util/opp_utils.o: util/opp_utils.cc \
  util/opp_utils.h \
  base/INETDefs.h \
  base/Compat.h
$O/util/headerserializers/TCPIPchecksum.o: util/headerserializers/TCPIPchecksum.cc \
  util/headerserializers/TCPIPchecksum.h \
  base/INETDefs.h \
  base/Compat.h
$O/util/headerserializers/ipv4/ICMPSerializer.o: util/headerserializers/ipv4/ICMPSerializer.cc \
  util/headerserializers/headers/defs.h \
  util/headerserializers/TCPIPchecksum.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  util/headerserializers/ipv4/headers/ip.h \
  applications/pingapp/PingPayload_m.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/Compat.h \
  util/headerserializers/headers/in.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/headerserializers/ipv4/ICMPSerializer.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/ipv4/headers/ip_icmp.h
$O/util/headerserializers/ipv4/IGMPSerializer.o: util/headerserializers/ipv4/IGMPSerializer.cc \
  util/headerserializers/TCPIPchecksum.h \
  util/headerserializers/ipv4/headers/igmp.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/ipv4/headers/ip.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/headerserializers/headers/in.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IGMPMessage_m.h \
  util/headerserializers/headers/in_systm.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  util/headerserializers/ipv4/IGMPSerializer.h
$O/util/headerserializers/ipv4/IPv4Serializer.o: util/headerserializers/ipv4/IPv4Serializer.cc \
  transport/sctp/SCTPMessage.h \
  util/headerserializers/tcp/TCPSerializer.h \
  util/headerserializers/sctp/SCTPSerializer.h \
  util/headerserializers/TCPIPchecksum.h \
  transport/sctp/SCTPMessage_m.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/ipv4/headers/ip.h \
  transport/udp/UDPPacket_m.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/headerserializers/ipv4/IGMPSerializer.h \
  base/ByteArray.h \
  transport/udp/UDPPacket.h \
  util/headerserializers/headers/in.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  util/headerserializers/ipv4/ICMPSerializer.h \
  networklayer/ipv4/IGMPMessage_m.h \
  base/ByteArray_m.h \
  util/headerserializers/tcp/headers/tcp.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/udp/UDPSerializer.h \
  networklayer/contract/IPvXAddress.h
$O/util/headerserializers/ipv6/IPv6Serializer.o: util/headerserializers/ipv6/IPv6Serializer.cc \
  util/headerserializers/headers/in.h \
  networklayer/ipv6/IPv6Datagram.h \
  transport/udp/UDPPacket.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArray_m.h \
  util/headerserializers/tcp/headers/tcp.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/headers/in_systm.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  util/headerserializers/udp/UDPSerializer.h \
  base/ByteArray.h \
  util/headerserializers/ipv6/headers/ip6.h \
  util/headerserializers/sctp/SCTPSerializer.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/TCPIPchecksum.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/contract/IPv6Address.h \
  transport/udp/UDPPacket_m.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  transport/sctp/SCTPMessage.h \
  util/headerserializers/tcp/TCPSerializer.h \
  util/headerserializers/ipv6/IPv6Serializer.h
$O/util/headerserializers/sctp/SCTPSerializer.o: util/headerserializers/sctp/SCTPSerializer.cc \
  base/Compat.h \
  util/headerserializers/headers/in.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/headers/in_systm.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPQueue.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  linklayer/contract/MACAddress.h \
  base/NotifierConsts.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPSendStream.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPMessage_m.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/sctp/SCTPSerializer.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPReceiveStream.h \
  util/headerserializers/sctp/headers/sctp.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  util/headerserializers/ipv4/headers/ip.h \
  base/INotifiable.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPMessage.h \
  transport/contract/UDPSocket.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h
$O/util/headerserializers/tcp/TCPSerializer.o: util/headerserializers/tcp/TCPSerializer.cc \
  base/ByteArray.h \
  networklayer/contract/IPvXAddress.h \
  util/headerserializers/tcp/headers/tcp.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/headers/in_systm.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray_m.h \
  util/headerserializers/headers/in.h \
  base/Compat.h \
  util/headerserializers/tcp/TCPSerializer.h \
  transport/tcp_common/TCPSegment.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/TCPIPchecksum.h \
  util/headerserializers/headers/defs.h
$O/util/headerserializers/udp/UDPSerializer.o: util/headerserializers/udp/UDPSerializer.cc \
  base/ByteArray.h \
  base/ByteArrayMessage.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/udp/UDPSerializer.h \
  base/Compat.h \
  util/headerserializers/headers/in.h \
  transport/udp/UDPPacket.h \
  util/headerserializers/udp/headers/udp.h \
  base/ByteArray_m.h \
  base/ByteArrayMessage_m.h \
  util/headerserializers/headers/bsdint.h \
  base/INETDefs.h \
  transport/udp/UDPPacket_m.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/TCPIPchecksum.h
$O/util/messageprinters/InetPacketBytesPrinter.o: util/messageprinters/InetPacketBytesPrinter.cc \
  base/INETDefs.h \
  base/Compat.h
$O/util/messageprinters/InetPacketPrinter.o: util/messageprinters/InetPacketPrinter.cc \
  base/ByteArray.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  transport/tcp_common/TCPSegment.h \
  transport/udp/UDPPacket_m.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/contract/IPv6Address.h
$O/util/messageprinters/InetPacketPrinter2.o: util/messageprinters/InetPacketPrinter2.cc \
  linklayer/ethernet/EtherFrame.h \
  linklayer/radio/AirFrame_m.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/INETDefs.h \
  transport/udp/UDPPacket_m.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/arp/ARPPacket_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/radio/ModulationType.h \
  base/Compat.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/ByteArray_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/Coord.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/routing/rip/RIPPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/FWMath.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/ByteArray.h
$O/util/seapputils/seapputils.o: util/seapputils/seapputils.cc \
  base/INETDefs.h \
  util/seapputils/seapputils.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/variable/Variable.o: variable/Variable.cc \
  variable/Variable.h
$O/world/annotations/AnnotationDummy.o: world/annotations/AnnotationDummy.cc \
  base/INETDefs.h \
  base/Compat.h \
  ./world/annotations/AnnotationDummy.h
$O/world/annotations/AnnotationManager.o: world/annotations/AnnotationManager.cc \
  util/FWMath.h \
  ./world/annotations/AnnotationManager.h \
  base/Compat.h \
  base/Coord.h \
  base/ModuleAccess.h \
  base/INETDefs.h
$O/world/httptools/HttpController.o: world/httptools/HttpController.cc \
  world/httptools/HttpController.h \
  base/INETDefs.h \
  applications/httptools/HttpRandom.h \
  base/Compat.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpMessages_m.h
$O/world/obstacles/Obstacle.o: world/obstacles/Obstacle.cc \
  base/ModuleAccess.h \
  base/INETDefs.h \
  base/Compat.h \
  base/Coord.h \
  ./world/obstacles/Obstacle.h \
  ./world/annotations/AnnotationManager.h \
  util/FWMath.h
$O/world/obstacles/ObstacleControl.o: world/obstacles/ObstacleControl.cc \
  util/FWMath.h \
  ./world/annotations/AnnotationManager.h \
  ./world/obstacles/ObstacleControl.h \
  ./world/obstacles/Obstacle.h \
  base/Coord.h \
  base/Compat.h \
  base/INETDefs.h \
  base/ModuleAccess.h
$O/world/radio/ChannelAccess.o: world/radio/ChannelAccess.cc \
  base/NotificationBoard.h \
  world/radio/ChannelAccess.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  base/INotifiable.h \
  base/INETDefs.h \
  world/radio/IChannelControl.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  base/Compat.h \
  base/Coord.h
$O/world/radio/ChannelControl.o: world/radio/ChannelControl.cc \
  base/Compat.h \
  base/Coord.h \
  world/radio/ChannelControl.h \
  util/FWMath.h \
  linklayer/radio/AirFrame_m.h \
  world/radio/IChannelControl.h \
  base/INETDefs.h \
  linklayer/radio/ModulationType.h
$O/world/radio/IdealChannelModel.o: world/radio/IdealChannelModel.cc \
  base/ILifecycle.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  linklayer/contract/RadioState.h \
  base/INotifiable.h \
  base/INETDefs.h \
  base/BasicModule.h \
  world/radio/IdealChannelModel.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  linklayer/radio/IdealRadio.h \
  base/Compat.h \
  base/Coord.h \
  world/radio/IdealChannelModelAccess.h \
  linklayer/radio/IdealAirFrame_m.h
$O/world/radio/IdealChannelModelAccess.o: world/radio/IdealChannelModelAccess.cc \
  base/INotifiable.h \
  base/INETDefs.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  base/NotificationBoard.h \
  base/Coord.h \
  world/radio/IdealChannelModelAccess.h \
  base/Compat.h \
  world/radio/IdealChannelModel.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  base/BasicModule.h
$O/world/scenario/ScenarioManager.o: world/scenario/ScenarioManager.cc \
  world/scenario/ScenarioManager.h \
  base/INETDefs.h \
  base/IScriptable.h \
  base/Compat.h
$O/world/traci/TraCIScenarioManager.o: world/traci/TraCIScenarioManager.cc \
  ./world/traci/TraCIConstants.h \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h \
  base/INETDefs.h \
  mobility/common/MobilityBase.h \
  ./world/traci/TraCIScenarioManager.h \
  util/FWMath.h \
  base/Compat.h \
  ./mobility/single/TraCIMobility.h \
  base/Coord.h
$O/world/traci/TraCIScenarioManagerLaunchd.o: world/traci/TraCIScenarioManagerLaunchd.cc \
  base/Compat.h \
  base/Coord.h \
  ./world/traci/TraCIScenarioManager.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  ./world/traci/TraCIConstants.h \
  base/INETDefs.h \
  ./world/traci/TraCIScenarioManagerLaunchd.h
