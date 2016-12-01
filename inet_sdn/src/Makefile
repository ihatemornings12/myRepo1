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
    $O/applications/inet_sdn/smartGrid/DataConcentratorApp.o \
    $O/applications/inet_sdn/smartGrid/DSOApp.o \
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
  base/Compat.h \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h
$O/actions/change/Change.o: actions/change/Change.cc \
  actions/actionbase/ActionBase.h \
  util/FWMath.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/radio/ModulationType.h \
  transport/contract/UDPControlInfo_m.h \
  linklayer/radio/AirFrame_m.h \
  actions/change/Change.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/seapputils/seapputils.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/radio/IdealAirFrame_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotificationBoard.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/ppp/PPPFrame_m.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Coord.h \
  transport/contract/TCPCommand_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/contract/UDPControlInfo.h \
  base/Compat.h \
  base/NotifierConsts.h
$O/actions/clone/Clone.o: actions/clone/Clone.cc \
  networklayer/contract/IPv4Address.h \
  actions/clone/Clone.h \
  base/Compat.h \
  base/INETDefs.h \
  util/seapputils/seapputils.h \
  actions/actionbase/ActionBase.h
$O/actions/create/Create.o: actions/create/Create.cc \
  applications/inet_sdn/SendApplicationPacket_m.h \
  actions/actionbase/ActionBase.h \
  util/FWMath.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  linklayer/radio/ModulationType.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  applications/inet_sdn/ApplicationPacket_m.h \
  transport/contract/UDPControlInfo_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/contract/IPv6Address.h \
  util/seapputils/seapputils.h \
  linklayer/contract/MACAddress.h \
  transport/udp/UDPPacket_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/radio/IdealAirFrame_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  linklayer/ppp/PPPFrame_m.h \
  transport/udp/UDPPacket.h \
  base/ByteArray.h \
  networklayer/contract/IPv4Address.h \
  base/Coord.h \
  transport/contract/TCPCommand_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  actions/create/Create.h \
  base/Compat.h \
  transport/contract/UDPControlInfo.h
$O/actions/destroy/Destroy.o: actions/destroy/Destroy.cc \
  base/INETDefs.h \
  actions/destroy/Destroy.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  attacks/attackbase/AttackBase.h \
  actions/actionbase/ActionBase.h \
  attacks/conditionalattack/conditionalattack/ConditionalAttack.h \
  variable/Variable.h \
  base/Compat.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h \
  localfilter/LocalFilter.h
$O/actions/disable/Disable.o: actions/disable/Disable.cc \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h \
  base/Compat.h \
  actions/disable/Disable.h \
  actions/disable/nodeRelease/NodeRelease.h
$O/actions/disable/nodeRelease/NodeRelease.o: actions/disable/nodeRelease/NodeRelease.cc \
  actions/disable/nodeRelease/NodeRelease.h
$O/actions/drop/Drop.o: actions/drop/Drop.cc \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h \
  base/Compat.h \
  actions/drop/Drop.h
$O/actions/move/Move.o: actions/move/Move.cc \
  base/Coord.h \
  base/Compat.h \
  mobility/contract/IMobility.h \
  actions/move/Move.h \
  base/INETDefs.h \
  mobility/common/MobilityBase.h \
  actions/actionbase/ActionBase.h \
  util/FWMath.h \
  base/ModuleAccess.h
$O/actions/put/Put.o: actions/put/Put.cc \
  actions/put/Put.h \
  base/INETDefs.h \
  actions/actionbase/ActionBase.h \
  base/Compat.h \
  globalfilter/putmessages/PutMessages.h
$O/actions/retrieve/Retrieve.o: actions/retrieve/Retrieve.cc \
  networklayer/contract/IPv4Address.h \
  variable/Variable.h \
  base/Compat.h \
  actions/retrieve/Retrieve.h \
  base/INETDefs.h \
  util/seapputils/seapputils.h \
  actions/actionbase/ActionBase.h
$O/actions/seappexpression/SEAPPExpression.o: actions/seappexpression/SEAPPExpression.cc \
  base/Compat.h \
  variable/Variable.h \
  actions/actionbase/ActionBase.h \
  base/INETDefs.h \
  actions/seappexpression/SEAPPExpression.h
$O/actions/send/Send.o: actions/send/Send.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  actions/send/Send.h \
  base/INETDefs.h \
  util/seapputils/seapputils.h \
  actions/actionbase/ActionBase.h
$O/applications/common/ApplicationBase.o: applications/common/ApplicationBase.cc \
  base/Compat.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  base/OperationalBase.h \
  base/INETDefs.h \
  applications/common/ApplicationBase.h \
  base/ILifecycle.h
$O/applications/dhcp/DHCPClient.o: applications/dhcp/DHCPClient.cc \
  applications/dhcp/DHCPClient.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INotifiable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/UDPSocket.h \
  base/Compat.h \
  applications/dhcp/DHCPLease.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  applications/dhcp/DHCPMessage_m.h \
  base/LifecycleOperation.h \
  networklayer/common/InterfaceTable.h \
  status/NodeStatus.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/arp/ARP.h \
  base/NodeOperations.h \
  networklayer/ipv4/IPv4Route.h
$O/applications/dhcp/DHCPServer.o: applications/dhcp/DHCPServer.cc \
  applications/dhcp/DHCPMessage_m.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/arp/ARP.h \
  base/NodeOperations.h \
  networklayer/common/IInterfaceTable.h \
  status/NodeStatus.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  applications/dhcp/DHCPLease.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  base/NotifierConsts.h \
  base/ModuleAccess.h \
  applications/dhcp/DHCPServer.h \
  base/ILifecycle.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  linklayer/contract/MACAddress.h
$O/applications/ethernet/EtherAppCli.o: applications/ethernet/EtherAppCli.cc \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  applications/ethernet/EtherAppCli.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  applications/ethernet/EtherApp_m.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  status/NodeStatus.h
$O/applications/ethernet/EtherAppSrv.o: applications/ethernet/EtherAppSrv.cc \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  applications/ethernet/EtherApp_m.h \
  applications/ethernet/EtherAppSrv.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  status/NodeStatus.h
$O/applications/ethernet/EtherTrafGen.o: applications/ethernet/EtherTrafGen.cc \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  applications/ethernet/EtherTrafGen.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/ILifecycle.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/LifecycleOperation.h
$O/applications/ethernet/EthernetApplication.o: applications/ethernet/EthernetApplication.cc \
  applications/ethernet/EtherApp_m.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/MACAddress.h \
  applications/ethernet/EthernetApplication.h \
  base/Compat.h
$O/applications/generic/IPvXTrafGen.o: applications/generic/IPvXTrafGen.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/Compat.h \
  applications/generic/IPvXTrafSink.h \
  networklayer/contract/IPSocket.h \
  networklayer/contract/IPv4Address.h \
  base/NodeOperations.h \
  applications/generic/IPvXTrafGen.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv4ControlInfo.h
$O/applications/generic/IPvXTrafSink.o: applications/generic/IPvXTrafSink.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6ControlInfo.h \
  status/NodeStatus.h \
  networklayer/contract/IPvXAddressResolver.h \
  applications/generic/IPvXTrafGen.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPSocket.h \
  applications/generic/IPvXTrafSink.h \
  base/Compat.h
$O/applications/httptools/HttpBrowser.o: applications/httptools/HttpBrowser.cc \
  transport/contract/TCPSocketMap.h \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  applications/httptools/HttpUtils.h \
  networklayer/contract/IPv6Address.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpBrowser.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/LifecycleOperation.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  applications/httptools/HttpEventMessages_m.h \
  networklayer/contract/IPv4Address.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpBrowserBase.h \
  base/Compat.h \
  applications/httptools/HttpMessages_m.h
$O/applications/httptools/HttpBrowserBase.o: applications/httptools/HttpBrowserBase.cc \
  applications/httptools/HttpBrowserBase.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpMessages_m.h \
  base/Compat.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpNodeBase.h \
  base/LifecycleOperation.h \
  status/NodeStatus.h \
  applications/httptools/HttpUtils.h \
  base/INETDefs.h \
  base/ModuleAccess.h \
  base/ILifecycle.h
$O/applications/httptools/HttpBrowserDirect.o: applications/httptools/HttpBrowserDirect.cc \
  base/LifecycleOperation.h \
  applications/httptools/HttpBrowserDirect.h \
  applications/httptools/HttpServerBase.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpMessages_m.h \
  base/Compat.h \
  applications/httptools/HttpBrowserBase.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h \
  base/ILifecycle.h \
  applications/httptools/HttpUtils.h \
  base/INETDefs.h
$O/applications/httptools/HttpNodeBase.o: applications/httptools/HttpNodeBase.cc \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpMessages_m.h \
  base/Compat.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpRandom.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpUtils.h \
  base/INETDefs.h \
  base/ILifecycle.h
$O/applications/httptools/HttpRandom.o: applications/httptools/HttpRandom.cc \
  applications/httptools/HttpMessages_m.h \
  base/Compat.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpUtils.h \
  base/INETDefs.h
$O/applications/httptools/HttpServer.o: applications/httptools/HttpServer.cc \
  applications/httptools/HttpServer.h \
  base/ILifecycle.h \
  transport/contract/TCPSocketMap.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  applications/httptools/HttpUtils.h \
  networklayer/contract/IPv6Address.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv4Address.h \
  world/httptools/HttpController.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpMessages_m.h \
  base/Compat.h
$O/applications/httptools/HttpServerBase.o: applications/httptools/HttpServerBase.cc \
  base/ILifecycle.h \
  base/ModuleAccess.h \
  applications/httptools/HttpUtils.h \
  base/INETDefs.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpServerBase.h \
  status/NodeStatus.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpNodeBase.h \
  base/Compat.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpEventMessages_m.h \
  world/httptools/HttpController.h
$O/applications/httptools/HttpServerDirect.o: applications/httptools/HttpServerDirect.cc \
  applications/httptools/HttpServerDirect.h \
  applications/httptools/HttpMessages_m.h \
  base/Compat.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpServerBase.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpUtils.h \
  base/INETDefs.h \
  base/ILifecycle.h
$O/applications/httptools/HttpServerDirectEvilA.o: applications/httptools/HttpServerDirectEvilA.cc \
  base/INETDefs.h \
  applications/httptools/HttpUtils.h \
  applications/httptools/HttpServerDirectEvilA.h \
  base/ILifecycle.h \
  applications/httptools/HttpEventMessages_m.h \
  world/httptools/HttpController.h \
  base/Compat.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpServerDirect.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h
$O/applications/httptools/HttpServerDirectEvilB.o: applications/httptools/HttpServerDirectEvilB.cc \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpMessages_m.h \
  base/Compat.h \
  applications/httptools/HttpServerDirectEvilB.h \
  applications/httptools/HttpServerDirect.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpEventMessages_m.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpServerEvilA.o: applications/httptools/HttpServerEvilA.cc \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpNodeBase.h \
  base/Compat.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpEventMessages_m.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPv4Address.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpServerEvilA.h \
  base/ILifecycle.h \
  transport/contract/TCPSocketMap.h \
  applications/httptools/HttpServer.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  applications/httptools/HttpUtils.h
$O/applications/httptools/HttpServerEvilB.o: applications/httptools/HttpServerEvilB.cc \
  applications/httptools/HttpNodeBase.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpServerBase.h \
  base/LifecycleOperation.h \
  transport/contract/TCPSocket.h \
  applications/httptools/HttpEventMessages_m.h \
  transport/contract/TCPCommand_m.h \
  world/httptools/HttpController.h \
  networklayer/contract/IPv4Address.h \
  applications/httptools/HttpServerEvilB.h \
  base/Compat.h \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpServer.h \
  transport/contract/TCPSocketMap.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  applications/httptools/HttpUtils.h \
  networklayer/contract/IPv6Address.h
$O/applications/httptools/HttpUtils.o: applications/httptools/HttpUtils.cc \
  applications/httptools/HttpMessages_m.h \
  applications/httptools/HttpUtils.h
$O/applications/inet_sdn/smartGrid/DSOApp.o: applications/inet_sdn/smartGrid/DSOApp.cc \
  applications/inet_sdn/smartGrid/DSOApp.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6Address.h \
  applications/inet_sdn/smartGrid/MeasurementData_m.h \
  applications/inet_sdn/smartGrid/Report.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h
$O/applications/inet_sdn/smartGrid/DataConcentratorApp.o: applications/inet_sdn/smartGrid/DataConcentratorApp.cc \
  networklayer/contract/IPv6Address.h \
  applications/inet_sdn/smartGrid/MeasurementData_m.h \
  applications/inet_sdn/smartGrid/Report.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  applications/inet_sdn/smartGrid/DataConcentratorApp.h \
  base/Compat.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h
$O/applications/inet_sdn/smartGrid/RTUApp.o: applications/inet_sdn/smartGrid/RTUApp.cc \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  applications/inet_sdn/smartGrid/RTUApp.h \
  networklayer/contract/IPv6Address.h \
  applications/inet_sdn/smartGrid/MeasurementData_m.h \
  applications/inet_sdn/smartGrid/Report.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h
$O/applications/inet_sdn/smartGrid/Report.o: applications/inet_sdn/smartGrid/Report.cc \
  applications/inet_sdn/smartGrid/Report.h
$O/applications/inet_sdn/smartGrid/SmartMeter.o: applications/inet_sdn/smartGrid/SmartMeter.cc \
  base/INETDefs.h \
  applications/inet_sdn/smartGrid/MeasurementData_m.h \
  applications/inet_sdn/smartGrid/SmartMeter.h \
  util/seapputils/seapputils.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/applications/netperfmeter/NetPerfMeter.o: applications/netperfmeter/NetPerfMeter.cc \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPCommand_m.h \
  transport/contract/TCPSocket.h \
  applications/netperfmeter/NetPerfMeter_m.h \
  transport/contract/SCTPCommand.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  transport/contract/SCTPCommand_m.h \
  transport/sctp/SCTPAssociation.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  base/NotificationBoard.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  applications/netperfmeter/NetPerfMeter.h \
  transport/contract/SCTPSocket.h \
  base/ILifecycle.h
$O/applications/pingapp/PingApp.o: applications/pingapp/PingApp.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  applications/pingapp/PingApp.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  applications/pingapp/PingPayload_m.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6ControlInfo.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4ControlInfo.h
$O/applications/pingapp/PingTestApp.o: applications/pingapp/PingTestApp.cc \
  base/Compat.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/contract/IPv4Address.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/common/IInterfaceTable.h \
  status/NodeStatus.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  applications/pingapp/PingTestApp.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h
$O/applications/rtpapp/RTPApplication.o: applications/rtpapp/RTPApplication.cc \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/LifecycleOperation.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  networklayer/contract/IPv6Address.h \
  transport/rtp/RTPInterfacePacket_m.h \
  base/INETDefs.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  applications/rtpapp/RTPApplication.h \
  base/ModuleAccess.h
$O/applications/sctpapp/SCTPClient.o: applications/sctpapp/SCTPClient.cc \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPMessage_m.h \
  transport/contract/SCTPSocket.h \
  base/ILifecycle.h \
  transport/sctp/SCTPMessage.h \
  applications/sctpapp/SCTPClient.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPAssociation.h \
  transport/contract/SCTPCommand_m.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPQueue.h \
  base/LifecycleOperation.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddressResolver.h \
  transport/sctp/SCTP.h \
  status/NodeStatus.h \
  networklayer/common/IInterfaceTable.h \
  base/NotificationBoard.h
$O/applications/sctpapp/SCTPNatPeer.o: applications/sctpapp/SCTPNatPeer.cc \
  transport/contract/SCTPCommand_m.h \
  transport/sctp/SCTPAssociation.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/IInterfaceTable.h \
  status/NodeStatus.h \
  transport/sctp/SCTP.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPMessage_m.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/SCTPSocket.h \
  applications/sctpapp/SCTPNatPeer.h \
  base/ILifecycle.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ModuleAccess.h
$O/applications/sctpapp/SCTPNatServer.o: applications/sctpapp/SCTPNatServer.cc \
  networklayer/contract/IPvXAddressResolver.h \
  transport/sctp/SCTP.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  transport/contract/SCTPCommand_m.h \
  transport/contract/UDPSocket.h \
  base/Compat.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv4Address.h \
  applications/sctpapp/SCTPNatServer.h \
  base/INotifiable.h \
  transport/contract/SCTPCommand.h \
  transport/contract/SCTPSocket.h \
  base/ILifecycle.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPNatTable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h
$O/applications/sctpapp/SCTPPeer.o: applications/sctpapp/SCTPPeer.cc \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTP.h \
  status/NodeStatus.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  base/LifecycleOperation.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  transport/contract/SCTPCommand_m.h \
  transport/sctp/SCTPAssociation.h \
  transport/contract/UDPSocket.h \
  base/Compat.h \
  transport/sctp/SCTPGapList.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  transport/contract/SCTPCommand.h \
  applications/sctpapp/SCTPPeer.h \
  transport/contract/SCTPSocket.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPMessage_m.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddress.h
$O/applications/sctpapp/SCTPServer.o: applications/sctpapp/SCTPServer.cc \
  base/NotifierConsts.h \
  transport/contract/UDPSocket.h \
  base/Compat.h \
  transport/sctp/SCTPAssociation.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPv4Address.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/SCTPCommand.h \
  base/INotifiable.h \
  transport/sctp/SCTP.h \
  status/NodeStatus.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/LifecycleOperation.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  applications/sctpapp/SCTPServer.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddress.h \
  transport/sctp/SCTPMessage_m.h \
  base/ILifecycle.h \
  transport/contract/SCTPSocket.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h
$O/applications/tcpapp/TCPAppBase.o: applications/tcpapp/TCPAppBase.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  applications/tcpapp/TCPAppBase.h \
  transport/contract/TCPCommand_m.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h
$O/applications/tcpapp/TCPBasicClientApp.o: applications/tcpapp/TCPBasicClientApp.cc \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/LifecycleOperation.h \
  applications/tcpapp/TCPAppBase.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPCommand_m.h \
  transport/contract/TCPSocket.h \
  base/ILifecycle.h \
  applications/tcpapp/TCPBasicClientApp.h \
  base/ModuleAccess.h \
  applications/tcpapp/GenericAppMsg_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h
$O/applications/tcpapp/TCPEchoApp.o: applications/tcpapp/TCPEchoApp.cc \
  base/Compat.h \
  applications/tcpapp/TCPEchoApp.h \
  base/ByteArray.h \
  networklayer/contract/IPv4Address.h \
  base/ByteArrayMessage_m.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  base/ByteArray_m.h \
  status/NodeStatus.h \
  base/ByteArrayMessage.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  base/ModuleAccess.h
$O/applications/tcpapp/TCPGenericSrvApp.o: applications/tcpapp/TCPGenericSrvApp.cc \
  base/Compat.h \
  applications/tcpapp/TCPGenericSrvApp.h \
  transport/contract/TCPCommand_m.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  networklayer/contract/IPv6Address.h \
  applications/tcpapp/GenericAppMsg_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  base/ModuleAccess.h
$O/applications/tcpapp/TCPGenericSrvThread.o: applications/tcpapp/TCPGenericSrvThread.cc \
  applications/tcpapp/GenericAppMsg_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  applications/tcpapp/TCPGenericSrvThread.h \
  base/ILifecycle.h \
  transport/contract/TCPSocketMap.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPCommand_m.h \
  transport/contract/TCPSocket.h \
  base/LifecycleOperation.h \
  applications/tcpapp/TCPSrvHostApp.h
$O/applications/tcpapp/TCPSessionApp.o: applications/tcpapp/TCPSessionApp.cc \
  status/NodeStatus.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ByteArray_m.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPSocket.h \
  base/ByteArrayMessage_m.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArray.h \
  applications/tcpapp/TCPAppBase.h \
  base/Compat.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  applications/tcpapp/TCPSessionApp.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/ByteArrayMessage.h
$O/applications/tcpapp/TCPSinkApp.o: applications/tcpapp/TCPSinkApp.cc \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  base/LifecycleOperation.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  base/ILifecycle.h \
  applications/tcpapp/TCPSinkApp.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/applications/tcpapp/TCPSrvHostApp.o: applications/tcpapp/TCPSrvHostApp.cc \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  transport/contract/TCPSocketMap.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  applications/tcpapp/TCPSrvHostApp.h \
  status/NodeStatus.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  base/Compat.h
$O/applications/tcpapp/TelnetApp.o: applications/tcpapp/TelnetApp.cc \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPv4Address.h \
  applications/tcpapp/TCPAppBase.h \
  base/Compat.h \
  applications/tcpapp/TelnetApp.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  applications/tcpapp/GenericAppMsg_m.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  base/ILifecycle.h
$O/applications/traci/TraCIDemo.o: applications/traci/TraCIDemo.cc \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  mobility/common/MobilityBase.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4Address.h \
  base/Coord.h \
  ./applications/traci/TraCIDemo.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  ./mobility/single/TraCIMobility.h \
  mobility/contract/IMobility.h \
  status/NodeStatus.h \
  ./world/traci/TraCIScenarioManager.h \
  base/LifecycleOperation.h
$O/applications/traci/TraCITestApp.o: applications/traci/TraCITestApp.cc \
  mobility/common/MobilityBase.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Compat.h \
  base/Coord.h \
  ./applications/traci/TraCITestApp.h \
  ./world/traci/TraCIScenarioManager.h \
  status/NodeStatus.h \
  base/LifecycleOperation.h \
  ./mobility/single/TraCIMobility.h \
  mobility/contract/IMobility.h
$O/applications/trafficlightapp/CommandNodeBasicApp.o: applications/trafficlightapp/CommandNodeBasicApp.cc \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  applications/common/ApplicationBase.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/OperationalBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  applications/trafficlightapp/CommandNodeBasicApp.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  base/NotifierConsts.h
$O/applications/trafficlightapp/CommandNodeSinkApp.o: applications/trafficlightapp/CommandNodeSinkApp.cc \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/UDPSocket.h \
  base/Compat.h \
  base/ILifecycle.h \
  applications/common/ApplicationBase.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  applications/trafficlightapp/CommandNodeSinkApp.h \
  networklayer/contract/IPv6Address.h \
  base/OperationalBase.h
$O/applications/trafficlightapp/TrafficLightBasicApp.o: applications/trafficlightapp/TrafficLightBasicApp.cc \
  base/ModuleAccess.h \
  applications/common/ApplicationBase.h \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  transport/contract/UDPControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  base/OperationalBase.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv4Address.h \
  applications/trafficlightapp/TrafficLightBasicApp.h \
  base/NotifierConsts.h \
  transport/contract/UDPSocket.h \
  base/Compat.h
$O/applications/trafficlightapp/TrafficLightSinkApp.o: applications/trafficlightapp/TrafficLightSinkApp.cc \
  applications/trafficlightapp/TrafficLightSinkApp.h \
  base/ILifecycle.h \
  applications/common/ApplicationBase.h \
  base/OperationalBase.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  applications/trafficlightapp/TrafficLightPacket_m.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  networklayer/contract/IPv4Address.h
$O/applications/trafficlightapp/TrafficLightUpdateStatusApp.o: applications/trafficlightapp/TrafficLightUpdateStatusApp.cc \
  base/Compat.h \
  applications/trafficlightapp/TrafficLightUpdateStatusApp.h \
  base/INETDefs.h
$O/applications/udpapp/UDPBasicApp.o: applications/udpapp/UDPBasicApp.cc \
  networklayer/common/IInterfaceTable.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/LifecycleOperation.h \
  applications/udpapp/UDPBasicApp.h \
  base/NotifierConsts.h \
  transport/contract/UDPSocket.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  applications/common/ApplicationBase.h \
  base/ILifecycle.h \
  base/ModuleAccess.h \
  applications/inet_sdn/SendApplicationPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/OperationalBase.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPControlInfo_m.h
$O/applications/udpapp/UDPBasicBurst.o: applications/udpapp/UDPBasicBurst.cc \
  networklayer/ipv6/RoutingTable6.h \
  base/NotificationBoard.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ipv4/IPv4Route.h \
  base/INotifiable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/UDPSocket.h \
  base/Compat.h \
  base/NotifierConsts.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  networklayer/ipv4/IRoutingTable.h \
  applications/common/ApplicationBase.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/OperationalBase.h \
  networklayer/contract/IPv6Address.h \
  applications/udpapp/UDPBasicBurst.h
$O/applications/udpapp/UDPEchoApp.o: applications/udpapp/UDPEchoApp.cc \
  networklayer/contract/IPv6Address.h \
  base/OperationalBase.h \
  applications/udpapp/UDPEchoApp.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  applications/common/ApplicationBase.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  networklayer/contract/IPv4Address.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h
$O/applications/udpapp/UDPSink.o: applications/udpapp/UDPSink.cc \
  applications/common/ApplicationBase.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  base/OperationalBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  applications/udpapp/UDPSink.h \
  transport/contract/UDPControlInfo_m.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  transport/contract/UDPSocket.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h
$O/applications/udpapp/UDPVideoStreamCli.o: applications/udpapp/UDPVideoStreamCli.cc \
  applications/udpapp/UDPVideoStreamCli.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  base/ILifecycle.h \
  applications/common/ApplicationBase.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/OperationalBase.h \
  networklayer/contract/IPv6Address.h
$O/applications/udpapp/UDPVideoStreamSvr.o: applications/udpapp/UDPVideoStreamSvr.cc \
  base/NodeOperations.h \
  base/LifecycleOperation.h \
  transport/contract/UDPSocket.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  applications/common/ApplicationBase.h \
  applications/udpapp/UDPVideoStreamSvr.h \
  base/ILifecycle.h \
  base/OperationalBase.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPControlInfo_m.h
$O/applications/voip/SimpleVoIPReceiver.o: applications/voip/SimpleVoIPReceiver.cc \
  base/ILifecycle.h \
  applications/voip/SimpleVoIPReceiver.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/LifecycleOperation.h \
  status/NodeStatus.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  applications/voip/SimpleVoIPPacket_m.h \
  networklayer/contract/IPv4Address.h
$O/applications/voip/SimpleVoIPSender.o: applications/voip/SimpleVoIPSender.cc \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/contract/UDPSocket.h \
  applications/voip/SimpleVoIPPacket_m.h \
  applications/voip/SimpleVoIPSender.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h
$O/attacks/attackbase/AttackBase.o: attacks/attackbase/AttackBase.cc \
  actions/actionbase/ActionBase.h \
  attacks/attackbase/AttackBase.h \
  base/INETDefs.h \
  variable/Variable.h \
  base/Compat.h
$O/attacks/attackentry/AttackEntry.o: attacks/attackentry/AttackEntry.cc \
  variable/Variable.h \
  base/Compat.h \
  attacks/attackentry/AttackEntry.h \
  base/INETDefs.h \
  attacks/attackbase/AttackBase.h \
  actions/actionbase/ActionBase.h
$O/attacks/conditionalattack/conditionalattack/ConditionalAttack.o: attacks/conditionalattack/conditionalattack/ConditionalAttack.cc \
  attacks/attackbase/AttackBase.h \
  actions/actionbase/ActionBase.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  attacks/conditionalattack/conditionalattack/ConditionalAttack.h \
  actions/change/Change.h \
  base/INETDefs.h \
  actions/seappexpression/SEAPPExpression.h \
  actions/put/Put.h \
  util/seapputils/seapputils.h \
  globalfilter/putmessages/PutMessages.h \
  actions/send/Send.h \
  actions/drop/Drop.h \
  actions/retrieve/Retrieve.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  actions/create/Create.h \
  actions/clone/Clone.h \
  variable/Variable.h
$O/attacks/conditionalattack/packetfilter/CompoundBlock.o: attacks/conditionalattack/packetfilter/CompoundBlock.cc \
  util/seapputils/seapputils.h \
  attacks/conditionalattack/packetfilter/CompoundBlock.h \
  base/INETDefs.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h
$O/attacks/conditionalattack/packetfilter/ElementaryBlock.o: attacks/conditionalattack/packetfilter/ElementaryBlock.cc \
  linklayer/ethernet/Ethernet.h \
  util/seapputils/seapputils.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/ethernet/EtherFrame_m.h \
  attacks/conditionalattack/packetfilter/ElementaryBlock.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ethernet/EtherFrame.h
$O/attacks/conditionalattack/packetfilter/FilterBlock.o: attacks/conditionalattack/packetfilter/FilterBlock.cc \
  attacks/conditionalattack/packetfilter/FilterBlock.h
$O/attacks/conditionalattack/packetfilter/PacketFilter.o: attacks/conditionalattack/packetfilter/PacketFilter.cc \
  base/INETDefs.h \
  attacks/conditionalattack/packetfilter/CompoundBlock.h \
  util/seapputils/seapputils.h \
  attacks/conditionalattack/packetfilter/ElementaryBlock.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h
$O/attacks/physicalattack/PhysicalAttack.o: attacks/physicalattack/PhysicalAttack.cc \
  actions/disable/nodeRelease/NodeRelease.h \
  actions/disable/Disable.h \
  base/Coord.h \
  base/Compat.h \
  attacks/physicalattack/PhysicalAttack.h \
  variable/Variable.h \
  util/FWMath.h \
  actions/actionbase/ActionBase.h \
  attacks/attackbase/AttackBase.h \
  actions/destroy/Destroy.h \
  actions/move/Move.h \
  base/INETDefs.h
$O/attacks/unconditionalattack/UnconditionalAttack.o: attacks/unconditionalattack/UnconditionalAttack.cc \
  variable/Variable.h \
  actions/clone/Clone.h \
  base/Compat.h \
  actions/create/Create.h \
  networklayer/contract/IPv4Address.h \
  actions/drop/Drop.h \
  actions/retrieve/Retrieve.h \
  globalfilter/putmessages/PutMessages.h \
  util/seapputils/seapputils.h \
  actions/seappexpression/SEAPPExpression.h \
  actions/put/Put.h \
  base/INETDefs.h \
  actions/change/Change.h \
  actions/actionbase/ActionBase.h \
  attacks/attackbase/AttackBase.h \
  attacks/unconditionalattack/UnconditionalAttack.h
$O/base/AbstractQueue.o: base/AbstractQueue.cc \
  base/Compat.h \
  base/AbstractQueue.h \
  base/INETDefs.h
$O/base/BasicModule.o: base/BasicModule.cc \
  base/INETDefs.h \
  base/ModuleAccess.h \
  base/INotifiable.h \
  base/BasicModule.h \
  base/Compat.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h
$O/base/ByteArray.o: base/ByteArray.cc \
  base/INETDefs.h \
  base/ByteArray_m.h \
  base/Compat.h \
  base/ByteArray.h
$O/base/ByteArrayBuffer.o: base/ByteArrayBuffer.cc \
  base/INETDefs.h \
  base/ByteArrayBuffer.h \
  base/Compat.h \
  base/ByteArray.h \
  base/ByteArray_m.h
$O/base/ByteArrayMessage.o: base/ByteArrayMessage.cc \
  base/ByteArray_m.h \
  base/Compat.h \
  base/ByteArrayMessage_m.h \
  base/ByteArray.h \
  base/ByteArrayMessage.h \
  base/INETDefs.h
$O/base/Compat.o: base/Compat.cc \
  base/Compat.h
$O/base/Coord.o: base/Coord.cc \
  base/Compat.h \
  base/Coord.h \
  base/INETDefs.h \
  util/FWMath.h
$O/base/InterfaceOperations.o: base/InterfaceOperations.cc
$O/base/Join.o: base/Join.cc \
  base/INETDefs.h \
  base/Compat.h
$O/base/LifecycleController.o: base/LifecycleController.cc \
  base/ILifecycle.h \
  base/LifecycleController.h \
  base/IScriptable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/IInterfaceTable.h \
  base/Compat.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv4Address.h
$O/base/ModuleAccess.o: base/ModuleAccess.cc \
  base/Compat.h \
  base/ModuleAccess.h \
  base/INETDefs.h
$O/base/NedFunctions.o: base/NedFunctions.cc \
  base/INETDefs.h \
  base/Compat.h
$O/base/NodeOperations.o: base/NodeOperations.cc \
  base/INETDefs.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/NodeOperations.h \
  base/LifecycleOperation.h
$O/base/NotificationBoard.o: base/NotificationBoard.cc \
  base/NotifierConsts.h \
  base/Compat.h \
  base/INotifiable.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  base/ModuleAccess.h
$O/base/NotifierConsts.o: base/NotifierConsts.cc \
  base/Compat.h \
  base/NotifierConsts.h \
  base/INETDefs.h
$O/base/OperationalBase.o: base/OperationalBase.cc \
  base/Compat.h \
  base/LifecycleOperation.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/INETDefs.h \
  base/OperationalBase.h \
  base/ModuleAccess.h \
  base/ILifecycle.h
$O/base/PassiveQueueBase.o: base/PassiveQueueBase.cc \
  base/Compat.h \
  base/IPassiveQueue.h \
  base/PassiveQueueBase.h \
  base/INETDefs.h
$O/base/ProtocolMap.o: base/ProtocolMap.cc \
  base/ProtocolMap.h \
  base/Compat.h \
  base/INETDefs.h
$O/base/QueueBase.o: base/QueueBase.cc \
  base/QueueBase.h \
  base/INETDefs.h \
  base/Compat.h \
  base/AbstractQueue.h
$O/base/ReassemblyBuffer.o: base/ReassemblyBuffer.cc \
  base/INETDefs.h \
  base/ReassemblyBuffer.h \
  base/Compat.h
$O/base/ResultFilters.o: base/ResultFilters.cc \
  util/FWMath.h \
  base/ResultFilters.h \
  base/INETDefs.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  base/Compat.h
$O/base/Sink.o: base/Sink.cc \
  base/INETDefs.h \
  base/Compat.h \
  base/Sink.h
$O/base/Topology.o: base/Topology.cc \
  util/stlutils.h \
  base/INETDefs.h \
  util/PatternMatcher.h \
  base/Compat.h \
  base/Topology.h
$O/base/UnimplementedModule.o: base/UnimplementedModule.cc \
  base/INETDefs.h \
  base/UnimplementedModule.h \
  base/Compat.h
$O/base/erfc.o: base/erfc.cc \
  base/INETDefs.h \
  base/Compat.h
$O/battery/models/BasicBattery.o: battery/models/BasicBattery.cc \
  battery/models/BasicBattery.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  base/Compat.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  base/ModuleAccess.h
$O/battery/models/InetSimpleBattery.o: battery/models/InetSimpleBattery.cc \
  base/INETDefs.h \
  linklayer/contract/RadioState.h \
  base/ModuleAccess.h \
  battery/models/InetSimpleBattery.h \
  battery/models/BasicBattery.h \
  base/INotifiable.h \
  battery/models/Energy.h \
  base/NotifierConsts.h \
  base/Compat.h \
  base/NotificationBoard.h
$O/exmachina/ExMachina.o: exmachina/ExMachina.cc \
  actions/actionbase/ActionBase.h \
  attacks/attackbase/AttackBase.h \
  base/INETDefs.h \
  exmachina/ExMachina.h \
  attacks/attackentry/AttackEntry.h \
  variable/Variable.h \
  attacks/physicalattack/PhysicalAttack.h \
  base/Compat.h
$O/globalfilter/GlobalFilter.o: globalfilter/GlobalFilter.cc \
  /usr/include/glib-2.0/glib/gmain.h \
  /usr/include/libxml++-2.6/libxml++/schema.h \
  /usr/include/libxml++-2.6/libxml++/dtd.h \
  base/NotifierConsts.h \
  /usr/include/glib-2.0/glib/deprecated/gthread.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  base/NotificationBoard.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entitydeclaration.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/libxml++-2.6/libxml++/validators/dtdvalidator.h \
  networklayer/contract/IPvXAddressResolver.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/exception.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/glib-2.0/glib/genviron.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/libxml++-2.6/libxml++/relaxngschema.h \
  /usr/include/libxml++-2.6/libxml++/document.h \
  /usr/include/glib-2.0/glib/deprecated/grel.h \
  /usr/include/glib-2.0/glib/gbitlock.h \
  /usr/include/glibmm-2.4/glibmm/ustring.h \
  networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
  /usr/include/libxml++-2.6/libxml++/nodes/textnode.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludeend.h \
  networklayer/common/InterfaceToken.h \
  /usr/include/glib-2.0/glib/gdate.h \
  /usr/include/libxml++-2.6/libxml++/nodes/cdatanode.h \
  /usr/include/libxml++-2.6/libxml++/parsers/parser.h \
  /usr/include/glib-2.0/glib/ghash.h \
  /usr/include/libxml++-2.6/libxml++/attribute.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/libxml++-2.6/libxml++/parsers/saxparser.h \
  util/PatternMatcher.h \
  /usr/include/libxml++-2.6/libxml++/attributedeclaration.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  /usr/include/libxml++-2.6/libxml++/validators/validator.h \
  /usr/include/glib-2.0/glib/gtrashstack.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/glib-2.0/glib/deprecated/gcompletion.h \
  /usr/lib/x86_64-linux-gnu/glibmm-2.4/include/glibmmconfig.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/glib-2.0/glib/gvarianttype.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/internal_error.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/lib/x86_64-linux-gnu/glib-2.0/include/glibconfig.h \
  networklayer/common/InterfaceEntry.h \
  /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/glib-2.0/glib/gdatetime.h \
  /usr/include/glib-2.0/glib/gwin32.h \
  /usr/include/libxml++-2.6/libxml++/schemabase.h \
  /usr/include/glib-2.0/glib/gmem.h \
  /usr/include/glib-2.0/glib/ggettext.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib.h \
  /usr/include/glib-2.0/glib/gvariant.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/libxml++-2.6/libxml++/validators/xsdvalidator.h \
  /usr/include/glib-2.0/glib/gurifuncs.h \
  /usr/include/glib-2.0/glib/gtimezone.h \
  /usr/include/glib-2.0/glib/deprecated/gcache.h \
  /usr/include/glib-2.0/glib/glist.h \
  attacks/attackbase/AttackBase.h \
  /usr/include/libxml++-2.6/libxml++/nodes/element.h \
  /usr/include/libxml++-2.6/libxml++/nodes/processinginstructionnode.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  /usr/include/glib-2.0/glib/gbytes.h \
  globalfilter/GlobalFilter.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidator.h \
  /usr/include/glib-2.0/glib/ghook.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/Topology.h \
  /usr/include/glib-2.0/glib/grand.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  variable/Variable.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/parse_error.h \
  base/Compat.h \
  /usr/include/libxml++-2.6/libxml++/nodes/node.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  globalfilter/putmessages/PutMessages.h \
  /usr/include/glib-2.0/glib/gpoll.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/validity_error.h \
  /usr/include/glib-2.0/glib/goption.h \
  /usr/include/libxml++-2.6/libxml++/nodes/commentnode.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  /usr/include/glib-2.0/glib/gcharset.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  /usr/include/glib-2.0/glib/gerror.h \
  /usr/include/glib-2.0/glib/gtree.h \
  linklayer/contract/MACAddress.h \
  /usr/include/glib-2.0/glib/gtimer.h \
  /usr/include/libxml++-2.6/libxml++/libxml++.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludestart.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/glib-2.0/glib/glib-autocleanups.h \
  /usr/include/libxml++-2.6/libxml++/nodes/contentnode.h \
  /usr/include/libxml++-2.6/libxml++/parsers/domparser.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidatorbase.h \
  /usr/include/libxml++-2.6/libxml++/noncopyable.h \
  actions/actionbase/ActionBase.h \
  /usr/include/glib-2.0/glib/gthread.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/libxml++-2.6/libxml++/validators/relaxngvalidator.h \
  /usr/include/glib-2.0/glib/deprecated/gmain.h \
  /usr/include/libxml++-2.6/libxml++/attributenode.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  attacks/attackentry/AttackEntry.h \
  /usr/include/libxml++-2.6/libxml++/xsdschema.h \
  parser/Parser.h \
  /usr/include/glib-2.0/glib/gqueue.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  /usr/lib/x86_64-linux-gnu/libxml++-2.6/include/libxml++config.h \
  /usr/include/glib-2.0/glib/gversion.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  networklayer/ipv4/IPv4Route.h \
  /usr/include/glib-2.0/glib/gnode.h \
  /usr/include/libxml++-2.6/libxml++/parsers/textreader.h \
  networklayer/common/IInterfaceTable.h \
  /usr/include/glib-2.0/glib/gstringchunk.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/glib-2.0/glib/ghostutils.h \
  /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  util/seapputils/seapputils.h \
  /usr/include/glib-2.0/glib/deprecated/gallocator.h \
  /usr/include/glib-2.0/glib/ghmac.h \
  /usr/include/glib-2.0/glib/gversionmacros.h \
  networklayer/contract/IPv6Address.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entityreference.h \
  /usr/include/glib-2.0/glib/gquark.h \
  base/ModuleAccess.h \
  attacks/unconditionalattack/UnconditionalAttack.h \
  /usr/include/glib-2.0/glib/gshell.h \
  /usr/include/glibmm-2.4/glibmm/unicode.h \
  /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/glib-2.0/glib/gqsort.h \
  networklayer/ipv4/IRoutingTable.h
$O/globalfilter/putmessages/PutMessages.o: globalfilter/putmessages/PutMessages.cc \
  util/seapputils/seapputils.h \
  base/INETDefs.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  globalfilter/putmessages/PutMessages.h
$O/linklayer/common/MACBase.o: linklayer/common/MACBase.cc \
  networklayer/common/InterfaceEntry.h \
  linklayer/common/MACBase.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotificationBoard.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/linklayer/common/WirelessMacBase.o: linklayer/common/WirelessMacBase.cc \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  networklayer/common/InterfaceToken.h \
  linklayer/common/MACBase.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  base/Compat.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  linklayer/common/WirelessMacBase.h \
  base/LifecycleOperation.h \
  base/ModuleAccess.h
$O/linklayer/configurator/Ieee8021dInterfaceData.o: linklayer/configurator/Ieee8021dInterfaceData.cc \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceEntry.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  base/Compat.h \
  linklayer/configurator/Ieee8021dInterfaceData.h
$O/linklayer/configurator/L2NetworkConfigurator.o: linklayer/configurator/L2NetworkConfigurator.cc \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  linklayer/configurator/L2NetworkConfigurator.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/Topology.h \
  util/stlutils.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceEntry.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  util/PatternMatcher.h
$O/linklayer/configurator/L2NodeConfigurator.o: linklayer/configurator/L2NodeConfigurator.cc \
  linklayer/configurator/L2NetworkConfigurator.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4Address.h \
  base/Topology.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/common/InterfaceEntry.h \
  base/NotifierConsts.h \
  linklayer/configurator/L2NodeConfigurator.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  util/PatternMatcher.h
$O/linklayer/contract/MACAddress.o: linklayer/contract/MACAddress.cc \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h
$O/linklayer/ethernet/EtherBus.o: linklayer/ethernet/EtherBus.cc \
  linklayer/ethernet/EtherBus.h \
  base/INETDefs.h \
  base/Compat.h
$O/linklayer/ethernet/EtherEncap.o: linklayer/ethernet/EtherEncap.cc \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/EtherEncap.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  linklayer/ethernet/EtherFrame.h
$O/linklayer/ethernet/EtherFrameClassifier.o: linklayer/ethernet/EtherFrameClassifier.cc \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  base/Compat.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/EtherFrameClassifier.h \
  linklayer/ethernet/EtherFrame.h
$O/linklayer/ethernet/EtherHub.o: linklayer/ethernet/EtherHub.cc \
  linklayer/ethernet/EtherHub.h \
  base/INETDefs.h \
  base/Compat.h
$O/linklayer/ethernet/EtherLLC.o: linklayer/ethernet/EtherLLC.cc \
  linklayer/ethernet/EtherFrame.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  linklayer/ethernet/EtherLLC.h \
  linklayer/ethernet/Ethernet.h \
  base/Compat.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/LifecycleOperation.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ModuleAccess.h
$O/linklayer/ethernet/EtherMAC.o: linklayer/ethernet/EtherMAC.cc \
  linklayer/ethernet/EtherFrame.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/common/MACBase.h \
  networklayer/common/InterfaceEntry.h \
  base/Compat.h \
  linklayer/ethernet/EtherMACBase.h \
  base/INotifiable.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/IPassiveQueue.h \
  linklayer/ethernet/EtherMAC.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/linklayer/ethernet/EtherMACBase.o: linklayer/ethernet/EtherMACBase.cc \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  base/IPassiveQueue.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  linklayer/ethernet/EtherMACBase.h \
  base/Compat.h \
  util/opp_utils.h \
  linklayer/common/MACBase.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  linklayer/ethernet/EtherFrame.h
$O/linklayer/ethernet/EtherMACFullDuplex.o: linklayer/ethernet/EtherMACFullDuplex.cc \
  linklayer/common/MACBase.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ethernet/EtherFrame.h \
  status/NodeStatus.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherMACFullDuplex.h \
  base/ModuleAccess.h \
  base/IPassiveQueue.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  base/INotifiable.h \
  base/Compat.h \
  linklayer/ethernet/EtherMACBase.h
$O/linklayer/ethernet/switch/MACAddressTable.o: linklayer/ethernet/switch/MACAddressTable.cc \
  linklayer/ethernet/switch/MACAddressTable.h \
  base/Compat.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/switch/IMACAddressTable.h
$O/linklayer/ethernet/switch/MACRelayUnit.o: linklayer/ethernet/switch/MACRelayUnit.cc \
  base/INotifiable.h \
  linklayer/ethernet/EtherMACBase.h \
  base/Compat.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/switch/MACRelayUnit.h \
  base/LifecycleOperation.h \
  base/ModuleAccess.h \
  base/IPassiveQueue.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  linklayer/ethernet/EtherFrame.h \
  linklayer/common/MACBase.h \
  linklayer/ethernet/Ethernet.h
$O/linklayer/ext/ExtInterface.o: linklayer/ext/ExtInterface.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/common/MACBase.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  linklayer/ext/ExtFrame_m.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  linklayer/ext/cSocketRTScheduler.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/ext/ExtInterface.h \
  util/headerserializers/headers/bsdint.h \
  util/opp_utils.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h
$O/linklayer/ext/cSocketRTScheduler.o: linklayer/ext/cSocketRTScheduler.cc \
  linklayer/ext/cSocketRTScheduler.h \
  base/INETDefs.h \
  util/headerserializers/headers/bsdint.h \
  base/Compat.h \
  util/headerserializers/headers/ethernet.h \
  linklayer/ext/ExtFrame_m.h
$O/linklayer/idealwireless/IdealWirelessMac.o: linklayer/idealwireless/IdealWirelessMac.cc \
  world/radio/IdealChannelModel.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/common/MACBase.h \
  base/BasicModule.h \
  linklayer/idealwireless/IdealWirelessMac.h \
  linklayer/radio/IdealRadio.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/radio/IdealAirFrame_m.h \
  base/NotificationBoard.h \
  base/NodeOperations.h \
  world/radio/IdealChannelModelAccess.h \
  status/NodeStatus.h \
  linklayer/idealwireless/IdealWirelessFrame_m.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  linklayer/contract/RadioState.h \
  base/IPassiveQueue.h \
  base/ModuleAccess.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/common/WirelessMacBase.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  base/Coord.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  util/opp_utils.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/linklayer/ieee80211/mac/Ieee80211DataRate.o: linklayer/ieee80211/mac/Ieee80211DataRate.cc \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  base/INETDefs.h \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h \
  linklayer/ieee80211/mac/WifiMode.h \
  linklayer/radio/ModulationType.h
$O/linklayer/ieee80211/mac/Ieee80211Mac.o: linklayer/ieee80211/mac/Ieee80211Mac.cc \
  linklayer/ieee80211/mac/IQoSClassifier.h \
  base/Coord.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/common/WirelessMacBase.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h \
  util/FWMath.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mac/WifiMode.h \
  base/ModuleAccess.h \
  linklayer/contract/RadioState.h \
  base/Compat.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  util/opp_utils.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/common/MACBase.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/radio/ModulationType.h \
  base/NotifierConsts.h \
  linklayer/ieee80211/mac/Ieee80211eClassifier.h \
  linklayer/ieee80211/mac/Ieee80211Mac.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  base/FSMA.h
$O/linklayer/ieee80211/mac/Ieee80211eClassifier.o: linklayer/ieee80211/mac/Ieee80211eClassifier.cc \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ieee80211/mac/IQoSClassifier.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  linklayer/ieee80211/mac/Ieee80211eClassifier.h
$O/linklayer/ieee80211/mac/WifiMode.o: linklayer/ieee80211/mac/WifiMode.cc \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mac/WifiMode.h \
  linklayer/ieee80211/mac/Ieee80211DataRate.h \
  base/INETDefs.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  base/Compat.h
$O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o: linklayer/ieee80211/mgmt/Ieee80211AgentSTA.cc \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mgmt/Ieee80211AgentSTA.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/Compat.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  util/opp_utils.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/ModuleAccess.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAP.cc \
  base/Compat.h \
  base/INotifiable.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/RadioState.h \
  base/IPassiveQueue.h \
  base/ModuleAccess.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ethernet/Ethernet.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.cc \
  base/ILifecycle.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/MACAddress.h \
  base/INotifiable.h \
  base/Compat.h \
  base/IPassiveQueue.h \
  base/ModuleAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/NotificationBoard.h \
  linklayer/ethernet/EtherFrame.h \
  base/NotifierConsts.h \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.cc \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.h \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ethernet/Ethernet.h \
  base/NotificationBoard.h \
  linklayer/ethernet/EtherFrame.h \
  base/NotifierConsts.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/IPassiveQueue.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INotifiable.h \
  base/Compat.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/MACAddress.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.cc \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/Compat.h \
  base/INotifiable.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/IPassiveQueue.h \
  base/ModuleAccess.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtBase.cc \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/ILifecycle.h \
  base/INotifiable.h \
  base/Compat.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/IPassiveQueue.h \
  base/ModuleAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/LifecycleOperation.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.cc \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  base/IPassiveQueue.h \
  linklayer/contract/RadioState.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/common/IInterfaceTable.h \
  base/Coord.h \
  base/ILifecycle.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  util/opp_utils.h \
  world/radio/ChannelAccess.h \
  base/Compat.h \
  base/INotifiable.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/PassiveQueueBase.h \
  networklayer/common/InterfaceEntry.h \
  base/BasicModule.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  world/radio/IChannelControl.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.cc \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/MACAddress.h \
  base/INotifiable.h \
  base/Compat.h \
  base/IPassiveQueue.h \
  base/ModuleAccess.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/linklayer/ieee80211/radio/BerParseFile.o: linklayer/ieee80211/radio/BerParseFile.cc \
  base/INETDefs.h \
  base/Compat.h \
  linklayer/ieee80211/radio/BerParseFile.h
$O/linklayer/ieee80211/radio/Ieee80211RadioModel.o: linklayer/ieee80211/radio/Ieee80211RadioModel.cc \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h \
  base/Coord.h \
  util/FWMath.h \
  linklayer/ieee80211/radio/Ieee80211RadioModel.h \
  linklayer/ieee80211/mac/WifiMode.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
  base/Compat.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  linklayer/ieee80211/radio/BerParseFile.h \
  linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/radio/SnrList.h \
  linklayer/radio/IRadioModel.h
$O/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o: linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.cc \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  base/INETDefs.h \
  base/Compat.h
$O/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o: linklayer/ieee80211/radio/errormodel/nist-error-rate-model.cc \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
  linklayer/ieee80211/mac/WifiMode.h \
  base/Compat.h \
  linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
  base/INETDefs.h \
  linklayer/ieee80211/radio/WifiPreambleType.h
$O/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o: linklayer/ieee80211/radio/errormodel/yans-error-rate-model.cc \
  linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
  linklayer/radio/ModulationType.h \
  base/Compat.h \
  linklayer/ieee80211/radio/WifiPreambleType.h \
  base/INETDefs.h \
  linklayer/ieee80211/radio/errormodel/IErrorModel.h \
  linklayer/ieee80211/mac/WifiMode.h \
  linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h
$O/linklayer/ieee8021d/common/STPBase.o: linklayer/ieee8021d/common/STPBase.cc \
  networklayer/common/InterfaceEntry.h \
  base/NotificationBoard.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  networklayer/common/InterfaceTable.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  linklayer/ieee8021d/common/STPBase.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h
$O/linklayer/ieee8021d/relay/Ieee8021dRelay.o: linklayer/ieee8021d/relay/Ieee8021dRelay.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ModuleAccess.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  linklayer/ieee8021d/relay/Ieee8021dRelay.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/NodeOperations.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceTable.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  base/NotificationBoard.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/common/InterfaceEntry.h
$O/linklayer/ieee8021d/rstp/RSTP.o: linklayer/ieee8021d/rstp/RSTP.cc \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  linklayer/ieee8021d/rstp/RSTP.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  linklayer/ethernet/switch/MACAddressTable.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee8021d/common/STPBase.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  networklayer/common/InterfaceTable.h \
  linklayer/ethernet/EtherFrame.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h
$O/linklayer/ieee8021d/stp/STP.o: linklayer/ieee8021d/stp/STP.cc \
  linklayer/ethernet/Ethernet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  linklayer/ieee8021d/common/STPBase.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/ethernet/EtherFrame.h \
  base/NotificationBoard.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ModuleAccess.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  linklayer/ieee8021d/stp/STP.h
$O/linklayer/ieee8021d/tester/STPTester.o: linklayer/ieee8021d/tester/STPTester.cc \
  base/NotificationBoard.h \
  linklayer/ethernet/switch/IMACAddressTable.h \
  networklayer/common/InterfaceTable.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
  linklayer/ieee8021d/common/STPBase.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ieee8021d/stp/STP.h \
  base/Topology.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/ieee8021d/tester/STPTester.h \
  linklayer/configurator/Ieee8021dInterfaceData.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h
$O/linklayer/loopback/Loopback.o: linklayer/loopback/Loopback.cc \
  linklayer/common/MACBase.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/contract/TxNotifDetails.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  linklayer/loopback/Loopback.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  base/IPassiveQueue.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  util/opp_utils.h
$O/linklayer/ppp/PPP.o: linklayer/ppp/PPP.cc \
  networklayer/common/IInterfaceTable.h \
  linklayer/ppp/PPPFrame_m.h \
  base/LifecycleOperation.h \
  base/ModuleAccess.h \
  base/IPassiveQueue.h \
  networklayer/contract/IPv6Address.h \
  util/opp_utils.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/TxNotifDetails.h \
  linklayer/common/MACBase.h \
  networklayer/common/InterfaceEntry.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  linklayer/ppp/PPP.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h
$O/linklayer/queue/AlgorithmicDropperBase.o: linklayer/queue/AlgorithmicDropperBase.cc \
  linklayer/queue/IQueueAccess.h \
  linklayer/queue/AlgorithmicDropperBase.h \
  base/Compat.h \
  base/INETDefs.h
$O/linklayer/queue/DropTailQueue.o: linklayer/queue/DropTailQueue.cc \
  linklayer/queue/DropTailQueue.h \
  base/Compat.h \
  base/INETDefs.h \
  base/IPassiveQueue.h \
  base/PassiveQueueBase.h
$O/linklayer/queue/FIFOQueue.o: linklayer/queue/FIFOQueue.cc \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/Compat.h \
  linklayer/queue/FIFOQueue.h \
  base/PassiveQueueBase.h \
  linklayer/queue/IQueueAccess.h
$O/linklayer/queue/PriorityScheduler.o: linklayer/queue/PriorityScheduler.cc \
  linklayer/queue/SchedulerBase.h \
  base/INETDefs.h \
  linklayer/queue/PriorityScheduler.h \
  base/Compat.h \
  base/IPassiveQueue.h
$O/linklayer/queue/REDDropper.o: linklayer/queue/REDDropper.cc \
  base/INETDefs.h \
  util/opp_utils.h \
  base/Compat.h \
  linklayer/queue/AlgorithmicDropperBase.h \
  linklayer/queue/IQueueAccess.h \
  linklayer/queue/REDDropper.h
$O/linklayer/queue/SchedulerBase.o: linklayer/queue/SchedulerBase.cc \
  base/IPassiveQueue.h \
  base/Compat.h \
  base/INETDefs.h \
  linklayer/queue/SchedulerBase.h
$O/linklayer/queue/ThresholdDropper.o: linklayer/queue/ThresholdDropper.cc \
  linklayer/queue/ThresholdDropper.h \
  base/INETDefs.h \
  base/Compat.h \
  linklayer/queue/IQueueAccess.h \
  linklayer/queue/AlgorithmicDropperBase.h
$O/linklayer/queue/WRRScheduler.o: linklayer/queue/WRRScheduler.cc \
  linklayer/queue/WRRScheduler.h \
  util/opp_utils.h \
  base/Compat.h \
  linklayer/queue/SchedulerBase.h \
  base/INETDefs.h \
  base/IPassiveQueue.h
$O/linklayer/radio/GenericRadioModel.o: linklayer/radio/GenericRadioModel.cc \
  linklayer/radio/GenericRadioModel.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/IModulation.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/SnrList.h \
  base/Coord.h \
  linklayer/contract/PhyControlInfo_m.h \
  util/FWMath.h \
  base/Compat.h \
  linklayer/radio/Modulation.h \
  base/INETDefs.h
$O/linklayer/radio/IdealRadio.o: linklayer/radio/IdealRadio.cc \
  linklayer/radio/IdealRadio.h \
  base/NotificationBoard.h \
  linklayer/radio/IdealAirFrame_m.h \
  world/radio/IdealChannelModelAccess.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  world/radio/IdealChannelModel.h \
  base/BasicModule.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  base/INotifiable.h \
  base/Compat.h \
  linklayer/contract/RadioState.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/LifecycleOperation.h \
  base/Coord.h
$O/linklayer/radio/Modulation.o: linklayer/radio/Modulation.cc \
  base/INETDefs.h \
  linklayer/radio/Modulation.h \
  base/Compat.h \
  linklayer/radio/IModulation.h
$O/linklayer/radio/Radio.o: linklayer/radio/Radio.cc \
  base/NotifierConsts.h \
  linklayer/radio/IRadioModel.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  linklayer/radio/SnrList.h \
  world/radio/IChannelControl.h \
  base/NotificationBoard.h \
  world/obstacles/ObstacleControl.h \
  base/BasicModule.h \
  linklayer/radio/AirFrame_m.h \
  linklayer/radio/ModulationType.h \
  ./world/obstacles/Obstacle.h \
  base/Compat.h \
  battery/models/BasicBattery.h \
  linklayer/radio/Radio80211aControlInfo_m.h \
  base/INotifiable.h \
  ./world/annotations/AnnotationManager.h \
  world/radio/ChannelAccess.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  linklayer/radio/INoiseGenerator.h \
  base/Coord.h \
  linklayer/radio/Radio.h \
  base/LifecycleOperation.h \
  linklayer/radio/propagation/IReceptionModel.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/contract/RadioState.h \
  base/ModuleAccess.h \
  util/FWMath.h
$O/linklayer/radio/propagation/FreeSpaceModel.o: linklayer/radio/propagation/FreeSpaceModel.cc \
  base/BasicModule.h \
  base/NotificationBoard.h \
  world/radio/IChannelControl.h \
  base/NotifierConsts.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  linklayer/radio/propagation/IReceptionModel.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  base/Coord.h \
  base/INETDefs.h \
  world/radio/ChannelAccess.h \
  base/INotifiable.h \
  base/Compat.h
$O/linklayer/radio/propagation/LogNormalShadowingModel.o: linklayer/radio/propagation/LogNormalShadowingModel.cc \
  base/Compat.h \
  base/INETDefs.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  linklayer/radio/propagation/IReceptionModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/LogNormalShadowingModel.h
$O/linklayer/radio/propagation/NakagamiModel.o: linklayer/radio/propagation/NakagamiModel.cc \
  linklayer/radio/propagation/NakagamiModel.h \
  base/INETDefs.h \
  base/Compat.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/IReceptionModel.h
$O/linklayer/radio/propagation/RayleighModel.o: linklayer/radio/propagation/RayleighModel.cc \
  base/Compat.h \
  base/INETDefs.h \
  linklayer/radio/propagation/RayleighModel.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/IReceptionModel.h
$O/linklayer/radio/propagation/RiceModel.o: linklayer/radio/propagation/RiceModel.cc \
  linklayer/radio/propagation/RiceModel.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  linklayer/radio/propagation/IReceptionModel.h \
  util/FWMath.h \
  base/Compat.h \
  base/INETDefs.h
$O/linklayer/radio/propagation/SUIModel.o: linklayer/radio/propagation/SUIModel.cc \
  linklayer/radio/propagation/FreeSpaceModel.h \
  util/FWMath.h \
  linklayer/radio/propagation/IReceptionModel.h \
  linklayer/radio/propagation/SUIModel.h \
  base/INETDefs.h \
  base/Compat.h
$O/linklayer/radio/propagation/TwoRayGroundModel.o: linklayer/radio/propagation/TwoRayGroundModel.cc \
  base/INETDefs.h \
  base/Compat.h \
  linklayer/radio/propagation/TwoRayGroundModel.h \
  linklayer/radio/propagation/FreeSpaceModel.h \
  linklayer/radio/propagation/IReceptionModel.h \
  util/FWMath.h
$O/localfilter/LocalFilter.o: localfilter/LocalFilter.cc \
  base/ModuleAccess.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entityreference.h \
  /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glibmm-2.4/glibmm/unicode.h \
  /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/glib-2.0/glib/gshell.h \
  /usr/include/glib-2.0/glib/gqsort.h \
  networklayer/ipv4/IRoutingTable.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/ghostutils.h \
  /usr/include/glib-2.0/glib/ghmac.h \
  /usr/include/glib-2.0/glib/deprecated/gallocator.h \
  util/seapputils/seapputils.h \
  /usr/include/glib-2.0/glib/gversionmacros.h \
  networklayer/contract/IPv6Address.h \
  /usr/lib/x86_64-linux-gnu/libxml++-2.6/include/libxml++config.h \
  /usr/include/glib-2.0/glib/gversion.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  /usr/include/libxml++-2.6/libxml++/parsers/textreader.h \
  networklayer/common/IInterfaceTable.h \
  /usr/include/glib-2.0/glib/gnode.h \
  networklayer/ipv4/IPv4Route.h \
  /usr/include/glib-2.0/glib/gstringchunk.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  localfilter/LocalFilter.h \
  attacks/attackentry/AttackEntry.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/libxml++-2.6/libxml++/attributenode.h \
  /usr/include/libxml++-2.6/libxml++/xsdschema.h \
  parser/Parser.h \
  /usr/include/glib-2.0/glib/gqueue.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  attacks/physicalattack/PhysicalAttack.h \
  /usr/include/glib-2.0/glib/glib-autocleanups.h \
  /usr/include/libxml++-2.6/libxml++/nodes/contentnode.h \
  /usr/include/libxml++-2.6/libxml++/parsers/domparser.h \
  /usr/include/libxml++-2.6/libxml++/noncopyable.h \
  actions/actionbase/ActionBase.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidatorbase.h \
  /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/glib-2.0/glib/gthread.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/glib-2.0/glib/deprecated/gmain.h \
  /usr/include/libxml++-2.6/libxml++/validators/relaxngvalidator.h \
  attacks/conditionalattack/conditionalattack/ConditionalAttack.h \
  /usr/include/glib-2.0/glib/gcharset.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  /usr/include/glib-2.0/glib/gerror.h \
  /usr/include/glib-2.0/glib/gtree.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  /usr/include/glib-2.0/glib/gtimer.h \
  /usr/include/libxml++-2.6/libxml++/libxml++.h \
  linklayer/contract/MACAddress.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludestart.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/glib-2.0/glib/gpoll.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  globalfilter/putmessages/PutMessages.h \
  /usr/include/glib-2.0/glib/goption.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/validity_error.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  /usr/include/libxml++-2.6/libxml++/nodes/commentnode.h \
  networklayer/contract/IPv4Address.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidator.h \
  /usr/include/glib-2.0/glib/ghook.h \
  base/INotifiable.h \
  /usr/include/glib-2.0/glib/grand.h \
  base/Topology.h \
  variable/Variable.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  /usr/include/libxml++-2.6/libxml++/nodes/node.h \
  base/Compat.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/parse_error.h \
  /usr/include/glib-2.0/glib/gurifuncs.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/libxml++-2.6/libxml++/validators/xsdvalidator.h \
  /usr/include/libxml++-2.6/libxml++/nodes/element.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  /usr/include/libxml++-2.6/libxml++/nodes/processinginstructionnode.h \
  attacks/attackbase/AttackBase.h \
  /usr/include/glib-2.0/glib/gtimezone.h \
  /usr/include/glib-2.0/glib/deprecated/gcache.h \
  /usr/include/glib-2.0/glib/glist.h \
  /usr/include/glib-2.0/glib/gbytes.h \
  /usr/include/glib-2.0/glib/gdatetime.h \
  /usr/include/glib-2.0/glib/gwin32.h \
  networklayer/common/InterfaceEntry.h \
  /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/glib-2.0/glib/gmem.h \
  /usr/include/libxml++-2.6/libxml++/schemabase.h \
  actions/change/Change.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib/ggettext.h \
  /usr/include/glib-2.0/glib.h \
  /usr/include/glib-2.0/glib/gvariant.h \
  /usr/include/glib-2.0/glib/deprecated/gcompletion.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/glib-2.0/glib/gvarianttype.h \
  /usr/lib/x86_64-linux-gnu/glibmm-2.4/include/glibmmconfig.h \
  exmachina/ExMachina.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/lib/x86_64-linux-gnu/glib-2.0/include/glibconfig.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/internal_error.h \
  /usr/include/libxml++-2.6/libxml++/validators/validator.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/glib-2.0/glib/gtrashstack.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/libxml++-2.6/libxml++/nodes/cdatanode.h \
  /usr/include/libxml++-2.6/libxml++/parsers/parser.h \
  /usr/include/glib-2.0/glib/ghash.h \
  /usr/include/libxml++-2.6/libxml++/attribute.h \
  /usr/include/glib-2.0/glib/gdate.h \
  /usr/include/libxml++-2.6/libxml++/parsers/saxparser.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/libxml++-2.6/libxml++/attributedeclaration.h \
  util/PatternMatcher.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/libxml++-2.6/libxml++/relaxngschema.h \
  /usr/include/glib-2.0/glib/deprecated/grel.h \
  /usr/include/glib-2.0/glib/gbitlock.h \
  /usr/include/libxml++-2.6/libxml++/document.h \
  networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
  networklayer/common/InterfaceTableAccess.h \
  /usr/include/glibmm-2.4/glibmm/ustring.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludeend.h \
  networklayer/common/InterfaceToken.h \
  /usr/include/libxml++-2.6/libxml++/nodes/textnode.h \
  base/NotificationBoard.h \
  /usr/include/glib-2.0/glib/deprecated/gthread.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entitydeclaration.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/libxml++-2.6/libxml++/validators/dtdvalidator.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/exception.h \
  networklayer/contract/IPvXAddressResolver.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h \
  /usr/include/glib-2.0/glib/genviron.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/glib-2.0/glib/gmain.h \
  /usr/include/libxml++-2.6/libxml++/schema.h \
  /usr/include/libxml++-2.6/libxml++/dtd.h \
  base/NotifierConsts.h
$O/mobility/common/LineSegmentsMobilityBase.o: mobility/common/LineSegmentsMobilityBase.cc \
  mobility/common/MobilityBase.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MovingMobilityBase.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  base/INETDefs.h \
  base/Compat.h
$O/mobility/common/MobilityAccess.o: mobility/common/MobilityAccess.cc \
  mobility/common/MobilityAccess.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/INETDefs.h
$O/mobility/common/MobilityBase.o: mobility/common/MobilityBase.cc \
  mobility/common/MobilityBase.h \
  base/INETDefs.h \
  base/Compat.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/contract/IMobility.h \
  base/Coord.h
$O/mobility/common/MovingMobilityBase.o: mobility/common/MovingMobilityBase.cc \
  base/Coord.h \
  mobility/contract/IMobility.h \
  mobility/common/MovingMobilityBase.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  base/Compat.h \
  base/INETDefs.h \
  mobility/common/MobilityBase.h
$O/mobility/contract/IMobility.o: mobility/contract/IMobility.cc \
  base/Compat.h \
  base/INETDefs.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  util/FWMath.h
$O/mobility/group/MoBANCoordinator.o: mobility/group/MoBANCoordinator.cc \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MobilityAccess.h \
  mobility/group/MoBANCoordinator.h \
  mobility/group/Posture.h \
  mobility/common/MobilityBase.h \
  base/Compat.h \
  base/INETDefs.h \
  mobility/group/MoBANLocal.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  mobility/common/MovingMobilityBase.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/group/PostureTransition.h
$O/mobility/group/MoBANLocal.o: mobility/group/MoBANLocal.cc \
  base/Compat.h \
  base/INETDefs.h \
  mobility/group/MoBANLocal.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  mobility/common/MovingMobilityBase.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/group/PostureTransition.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/group/MoBANCoordinator.h \
  mobility/group/Posture.h \
  mobility/common/MobilityBase.h
$O/mobility/group/Posture.o: mobility/group/Posture.cc \
  util/FWMath.h \
  base/Coord.h \
  base/INETDefs.h \
  base/Compat.h \
  mobility/group/Posture.h
$O/mobility/group/PostureTransition.o: mobility/group/PostureTransition.cc \
  base/INETDefs.h \
  base/Compat.h \
  mobility/group/PostureTransition.h \
  util/FWMath.h \
  base/Coord.h
$O/mobility/single/ANSimMobility.o: mobility/single/ANSimMobility.cc \
  base/INETDefs.h \
  base/Compat.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/common/MovingMobilityBase.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  mobility/single/ANSimMobility.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MobilityBase.h
$O/mobility/single/BonnMotionFileCache.o: mobility/single/BonnMotionFileCache.cc \
  mobility/single/BonnMotionFileCache.h \
  base/INETDefs.h \
  base/Compat.h
$O/mobility/single/BonnMotionMobility.o: mobility/single/BonnMotionMobility.cc \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/common/MovingMobilityBase.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  mobility/single/BonnMotionFileCache.h \
  base/INETDefs.h \
  mobility/single/BonnMotionMobility.h \
  base/Compat.h \
  mobility/common/MobilityBase.h \
  mobility/common/LineSegmentsMobilityBase.h
$O/mobility/single/ChiangMobility.o: mobility/single/ChiangMobility.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  mobility/common/MovingMobilityBase.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/single/ChiangMobility.h \
  mobility/common/MobilityBase.h
$O/mobility/single/CircleMobility.o: mobility/single/CircleMobility.cc \
  mobility/single/CircleMobility.h \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  mobility/common/MovingMobilityBase.h \
  base/Compat.h \
  base/INETDefs.h
$O/mobility/single/ConstSpeedMobility.o: mobility/single/ConstSpeedMobility.cc \
  mobility/common/MovingMobilityBase.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  mobility/single/ConstSpeedMobility.h \
  base/INETDefs.h \
  base/Compat.h \
  mobility/common/MobilityBase.h \
  mobility/common/LineSegmentsMobilityBase.h
$O/mobility/single/GaussMarkovMobility.o: mobility/single/GaussMarkovMobility.cc \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MobilityBase.h \
  base/Compat.h \
  base/INETDefs.h \
  mobility/single/GaussMarkovMobility.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  mobility/common/MovingMobilityBase.h \
  util/FWMath.h \
  base/ModuleAccess.h
$O/mobility/single/LinearMobility.o: mobility/single/LinearMobility.cc \
  mobility/common/MobilityBase.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  mobility/single/LinearMobility.h \
  mobility/common/MovingMobilityBase.h \
  base/Compat.h \
  base/INETDefs.h
$O/mobility/single/LinearNodeDistributionMobility.o: mobility/single/LinearNodeDistributionMobility.cc \
  base/Compat.h \
  mobility/single/LinearNodeDistributionMobility.h \
  base/INETDefs.h \
  mobility/static/StationaryMobility.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  mobility/common/MobilityBase.h
$O/mobility/single/MassMobility.o: mobility/single/MassMobility.cc \
  base/Compat.h \
  base/INETDefs.h \
  mobility/contract/IMobility.h \
  mobility/single/MassMobility.h \
  base/Coord.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  mobility/common/MovingMobilityBase.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MobilityBase.h
$O/mobility/single/Ns2MotionMobility.o: mobility/single/Ns2MotionMobility.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  mobility/common/MovingMobilityBase.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  mobility/single/Ns2MotionMobility.h \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MobilityBase.h
$O/mobility/single/RandomWPMobility.o: mobility/single/RandomWPMobility.cc \
  mobility/common/LineSegmentsMobilityBase.h \
  mobility/common/MobilityBase.h \
  base/Compat.h \
  mobility/single/RandomWPMobility.h \
  base/INETDefs.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  mobility/common/MovingMobilityBase.h \
  base/ModuleAccess.h \
  util/FWMath.h
$O/mobility/single/RectangleMobility.o: mobility/single/RectangleMobility.cc \
  mobility/common/MobilityBase.h \
  mobility/single/RectangleMobility.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  mobility/common/MovingMobilityBase.h \
  base/Compat.h \
  base/INETDefs.h
$O/mobility/single/TraCIMobility.o: mobility/single/TraCIMobility.cc \
  base/INETDefs.h \
  base/Compat.h \
  ./world/traci/TraCIScenarioManager.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  ./mobility/single/TraCIMobility.h \
  mobility/common/MobilityBase.h
$O/mobility/single/TractorMobility.o: mobility/single/TractorMobility.cc \
  mobility/common/MobilityBase.h \
  mobility/common/LineSegmentsMobilityBase.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/common/MovingMobilityBase.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  base/INETDefs.h \
  mobility/single/TractorMobility.h \
  base/Compat.h
$O/mobility/single/TurtleMobility.o: mobility/single/TurtleMobility.cc \
  mobility/common/MovingMobilityBase.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Coord.h \
  mobility/single/TurtleMobility.h \
  mobility/contract/IMobility.h \
  base/INETDefs.h \
  base/Compat.h \
  mobility/common/MobilityBase.h \
  mobility/common/LineSegmentsMobilityBase.h
$O/mobility/static/StaticGridMobility.o: mobility/static/StaticGridMobility.cc \
  mobility/static/StationaryMobility.h \
  mobility/static/StaticGridMobility.h \
  base/INETDefs.h \
  base/Compat.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  mobility/common/MobilityBase.h
$O/mobility/static/StationaryMobility.o: mobility/static/StationaryMobility.cc \
  mobility/common/MobilityBase.h \
  base/Compat.h \
  base/INETDefs.h \
  mobility/static/StationaryMobility.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  util/FWMath.h \
  base/ModuleAccess.h
$O/networklayer/arp/ARP.o: networklayer/arp/ARP.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/arp/ARPPacket_m.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h
$O/networklayer/arp/IARPCache.o: networklayer/arp/IARPCache.cc \
  base/ModuleAccess.h \
  networklayer/arp/IARPCache.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o: networklayer/autorouting/ipv4/FlatNetworkConfigurator.cc \
  networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h
$O/networklayer/autorouting/ipv4/HostAutoConfigurator.o: networklayer/autorouting/ipv4/HostAutoConfigurator.cc \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/autorouting/ipv4/HostAutoConfigurator.h \
  base/NotificationBoard.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o: networklayer/autorouting/ipv4/IPv4NetworkConfigurator.cc \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  base/Topology.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  util/stlutils.h \
  linklayer/contract/MACAddress.h \
  util/XMLUtils.h \
  networklayer/common/InterfaceEntry.h \
  base/NotificationBoard.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h \
  util/PatternMatcher.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o: networklayer/autorouting/ipv4/IPv4NodeConfigurator.cc \
  networklayer/common/InterfaceEntry.h \
  util/PatternMatcher.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/autorouting/ipv4/IPv4NodeConfigurator.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/Compat.h \
  base/INotifiable.h \
  base/Topology.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o: networklayer/autorouting/ipv6/FlatNetworkConfigurator6.cc \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/INotifiable.h \
  base/Compat.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/autorouting/ipv6/FlatNetworkConfigurator6.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6.h \
  base/NotificationBoard.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h
$O/networklayer/bgpv4/BGPFSM.o: networklayer/bgpv4/BGPFSM.cc \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/bgpv4/BGPRouting.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  base/INotifiable.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/ILifecycle.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  networklayer/bgpv4/BGPCommon.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/contract/TCPSocketMap.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/bgpv4/BGPFSM.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  base/ModuleAccess.h \
  util/Macho.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/bgpv4/BGPSession.h
$O/networklayer/bgpv4/BGPRouting.o: networklayer/bgpv4/BGPRouting.cc \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/bgpv4/BGPCommon.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/bgpv4/BGPSession.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/bgpv4/BGPFSM.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  util/Macho.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  base/ModuleAccess.h \
  transport/contract/TCPSocketMap.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  base/INotifiable.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  transport/contract/TCPSocket.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/bgpv4/BGPRouting.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  base/ILifecycle.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  transport/contract/TCPCommand_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h
$O/networklayer/bgpv4/BGPSession.o: networklayer/bgpv4/BGPSession.cc \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/bgpv4/BGPFSM.h \
  networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  base/ModuleAccess.h \
  util/Macho.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/contract/TCPSocketMap.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/bgpv4/BGPSession.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/bgpv4/BGPRoutingTableEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  networklayer/bgpv4/BGPCommon.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  base/ILifecycle.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/bgpv4/BGPRouting.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  transport/contract/TCPSocket.h \
  networklayer/ospfv2/OSPFRoutingAccess.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
  base/INotifiable.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/bgpv4/BGPMessage/BGPOpen.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  base/NotificationBoard.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
  transport/contract/TCPCommand_m.h \
  base/NotifierConsts.h
$O/networklayer/bgpv4/BGPMessage/BGPUpdate.o: networklayer/bgpv4/BGPMessage/BGPUpdate.cc \
  networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdate.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
  networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
  networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h
$O/networklayer/common/InterfaceEntry.o: networklayer/common/InterfaceEntry.cc \
  networklayer/common/InterfaceEntry.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/IInterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h
$O/networklayer/common/InterfaceMatcher.o: networklayer/common/InterfaceMatcher.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceMatcher.h \
  networklayer/common/InterfaceToken.h \
  util/PatternMatcher.h \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/common/IInterfaceTable.h \
  util/stlutils.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/common/InterfaceTable.o: networklayer/common/InterfaceTable.cc \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  base/Compat.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTable.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  base/NotificationBoard.h
$O/networklayer/contract/IPSocket.o: networklayer/contract/IPSocket.cc \
  networklayer/contract/IPSocket.h \
  networklayer/contract/IPProtocolId_m.h \
  base/INETDefs.h \
  base/Compat.h
$O/networklayer/contract/IPv4Address.o: networklayer/contract/IPv4Address.cc \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/contract/IPv4ControlInfo.o: networklayer/contract/IPv4ControlInfo.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/contract/IPv6Address.o: networklayer/contract/IPv6Address.cc \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/contract/IPv6ControlInfo.o: networklayer/contract/IPv6ControlInfo.cc \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPv6ControlInfo_m.h
$O/networklayer/contract/IPvXAddress.o: networklayer/contract/IPvXAddress.cc \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/contract/IPvXAddressResolver.o: networklayer/contract/IPvXAddressResolver.cc \
  util/PatternMatcher.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6.h \
  base/NotificationBoard.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceEntry.h \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/INotifiable.h \
  base/Topology.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h
$O/networklayer/diffserv/BehaviorAggregateClassifier.o: networklayer/diffserv/BehaviorAggregateClassifier.cc \
  networklayer/contract/IPProtocolId_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/udp/UDPPacket.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ByteArray_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/diffserv/BehaviorAggregateClassifier.h \
  base/ByteArray.h \
  networklayer/contract/IPv6Address.h \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/diffserv/DSCPMarker.o: networklayer/diffserv/DSCPMarker.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/diffserv/DiffservUtil.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/diffserv/DSCP_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/diffserv/DSCPMarker.h \
  networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/diffserv/DiffservUtil.o: networklayer/diffserv/DiffservUtil.cc \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/diffserv/DSCP_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  util/opp_utils.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/common/IInterfaceTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/diffserv/MultiFieldClassifier.o: networklayer/diffserv/MultiFieldClassifier.cc \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/diffserv/MultiFieldClassifier.h \
  networklayer/contract/IPv6Address.h \
  base/ByteArray.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ByteArray_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  transport/udp/UDPPacket.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/tcp_common/TCPSegment_m.h
$O/networklayer/diffserv/SingleRateThreeColorMeter.o: networklayer/diffserv/SingleRateThreeColorMeter.cc \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/diffserv/SingleRateThreeColorMeter.h
$O/networklayer/diffserv/TokenBucketMeter.o: networklayer/diffserv/TokenBucketMeter.cc \
  networklayer/diffserv/TokenBucketMeter.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/diffserv/DiffservUtil.h
$O/networklayer/diffserv/TwoRateThreeColorMeter.o: networklayer/diffserv/TwoRateThreeColorMeter.cc \
  networklayer/diffserv/DiffservUtil.h \
  networklayer/diffserv/TwoRateThreeColorMeter.h \
  base/Compat.h \
  base/INETDefs.h
$O/networklayer/icmpv6/ICMPv6.o: networklayer/icmpv6/ICMPv6.cc \
  networklayer/common/IInterfaceTable.h \
  networklayer/icmpv6/ICMPv6.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  base/NotificationBoard.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  status/NodeStatus.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/icmpv6/IPv6NeighbourCache.o: networklayer/icmpv6/IPv6NeighbourCache.cc \
  base/Compat.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/icmpv6/IPv6NeighbourDiscovery.o: networklayer/icmpv6/IPv6NeighbourDiscovery.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  base/NotificationBoard.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/RoutingTable6.h \
  status/NodeStatus.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/xmipv6/xMIPv6.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  networklayer/icmpv6/ICMPv6Access.h \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/xmipv6/xMIPv6Access.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/xmipv6/BindingUpdateList.h
$O/networklayer/internetcloud/CloudDelayerBase.o: networklayer/internetcloud/CloudDelayerBase.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMPMessage.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/internetcloud/CloudDelayerBase.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/arp/IARPCache.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4Address.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/INetfilter.h \
  base/INETDefs.h \
  base/QueueBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h
$O/networklayer/internetcloud/MatrixCloudDelayer.o: networklayer/internetcloud/MatrixCloudDelayer.cc \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/internetcloud/CloudDelayerBase.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  util/PatternMatcher.h \
  base/NotifierConsts.h \
  networklayer/internetcloud/MatrixCloudDelayer.h \
  util/XMLUtils.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/ipv4/ErrorHandling.o: networklayer/ipv4/ErrorHandling.cc \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ErrorHandling.h \
  base/INETDefs.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h
$O/networklayer/ipv4/ICMP.o: networklayer/ipv4/ICMP.cc \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/contract/IPSocket.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h
$O/networklayer/ipv4/IGMPv2.o: networklayer/ipv4/IGMPv2.cc \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IGMPMessage_m.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPSocket.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IGMPv2.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/ipv4/IPv4.o: networklayer/ipv4/IPv4.cc \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv4ControlInfo.h \
  linklayer/contract/MACAddress.h \
  base/QueueBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/ILifecycle.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMPAccess.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/contract/IPSocket.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/ipv4/IPv4Datagram.o: networklayer/ipv4/IPv4Datagram.cc \
  base/INETDefs.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/ipv4/IPv4FragBuf.o: networklayer/ipv4/IPv4FragBuf.cc \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/INETDefs.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4FragBuf.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h
$O/networklayer/ipv4/IPv4InterfaceData.o: networklayer/ipv4/IPv4InterfaceData.cc \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h
$O/networklayer/ipv4/IPv4Route.o: networklayer/ipv4/IPv4Route.cc \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  networklayer/routing/aodv/AODVRouteData.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h
$O/networklayer/ipv4/NetworkInfo.o: networklayer/ipv4/NetworkInfo.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h \
  base/IScriptable.h \
  networklayer/ipv4/NetworkInfo.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/ipv4/RoutingTable.o: networklayer/ipv4/RoutingTable.cc \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/Compat.h \
  util/opp_utils.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/ipv4/RoutingTableParser.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  base/LifecycleOperation.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/ipv4/RoutingTableParser.o: networklayer/ipv4/RoutingTableParser.cc \
  networklayer/common/InterfaceEntry.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/RoutingTableParser.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/Compat.h \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/contract/MACAddress.h
$O/networklayer/ipv4/RoutingTableRecorder.o: networklayer/ipv4/RoutingTableRecorder.cc \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/Compat.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableRecorder.h \
  networklayer/common/InterfaceToken.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h
$O/networklayer/ipv6/IPv6.o: networklayer/ipv6/IPv6.cc \
  base/Compat.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  base/ILifecycle.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/icmpv6/ICMPv6Access.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  linklayer/contract/MACAddress.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  base/ReassemblyBuffer.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/icmpv6/ICMPv6.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  status/NodeStatus.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/NotificationBoard.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/RoutingTable6.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/contract/IPSocket.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
  networklayer/ipv6/IPv6FragBuf.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/ipv6/IPv6Datagram.o: networklayer/ipv6/IPv6Datagram.cc \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/ipv6/IPv6ErrorHandling.o: networklayer/ipv6/IPv6ErrorHandling.cc \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/IPv6ErrorHandling.h \
  networklayer/contract/IPv6ControlInfo_m.h
$O/networklayer/ipv6/IPv6ExtensionHeaders.o: networklayer/ipv6/IPv6ExtensionHeaders.cc \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/ipv6/IPv6FragBuf.o: networklayer/ipv6/IPv6FragBuf.cc \
  networklayer/ipv6/IPv6FragBuf.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  base/ReassemblyBuffer.h \
  base/ILifecycle.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/INETDefs.h \
  base/Compat.h
$O/networklayer/ipv6/IPv6InterfaceData.o: networklayer/ipv6/IPv6InterfaceData.cc \
  base/INotifiable.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/Compat.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  base/NotificationBoard.h \
  networklayer/ipv6/RoutingTable6.h \
  base/NotifierConsts.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/ipv6/RoutingTable6.o: networklayer/ipv6/RoutingTable6.cc \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/Compat.h \
  util/opp_utils.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv6/RoutingTable6.h \
  base/NodeOperations.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/ipv6tunneling/IPv6Tunneling.o: networklayer/ipv6tunneling/IPv6Tunneling.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  base/NotificationBoard.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/RoutingTable6.h \
  status/NodeStatus.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/xmipv6/xMIPv6.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/xmipv6/xMIPv6Access.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/xmipv6/BindingUpdateList.h
$O/networklayer/ldp/LDP.o: networklayer/ldp/LDP.cc \
  networklayer/common/InterfaceToken.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp_common/TCPSegment.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  base/ByteArray_m.h \
  networklayer/mpls/LIBTableAccess.h \
  base/NotificationBoard.h \
  networklayer/ldp/LDP.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/ted/TED_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/common/InterfaceEntry.h \
  transport/udp/UDPPacket.h \
  networklayer/ted/TEDAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/INotifiable.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h \
  networklayer/mpls/LIBTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/mpls/IClassifier.h \
  networklayer/mpls/ConstType.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/contract/TCPSocketMap.h \
  base/ModuleAccess.h \
  transport/contract/UDPSocket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ted/TED.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/ldp/LDPPacket_m.h
$O/networklayer/manetrouting/aodv-uu/aodv_msg_struct.o: networklayer/manetrouting/aodv-uu/aodv_msg_struct.cc \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/compatibility.h \
  transport/udp/UDPPacket.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetAddress.h
$O/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.o: networklayer/manetrouting/aodv-uu/aodv_uu_omnet.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/base/compatibility.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/common/InterfaceToken.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h
$O/networklayer/manetrouting/aodv-uu/packet_queue_omnet.o: networklayer/manetrouting/aodv-uu/packet_queue_omnet.cc \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.cc \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  linklayer/contract/MACAddress.h \
  base/QueueBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.cc \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  util/FWMath.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/ipv4/ICMPAccess.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/QueueBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  linklayer/contract/MACAddress.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  base/Coord.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.cc \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  linklayer/contract/MACAddress.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  base/Coord.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/QueueBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.cc \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  base/Coord.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.cc \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/QueueBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/nl.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  util/FWMath.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/IRoutingTable.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.o: networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  base/Coord.h \
  networklayer/ipv4/IRoutingTable.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  linklayer/contract/MACAddress.h \
  base/QueueBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/list.o: networklayer/manetrouting/aodv-uu/aodv-uu/list.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/locality.o: networklayer/manetrouting/aodv-uu/aodv-uu/locality.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  base/ILifecycle.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/common/INetfilter.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.o: networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.cc \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
  util/FWMath.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/nl.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.o: networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.cc \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  base/NotificationBoard.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/QueueBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.o: networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.cc \
  networklayer/ipv4/IRoutingTable.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../packet_queue_omnet.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/debug_aodv.h \
  base/Coord.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/params.h \
  base/ILifecycle.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
  linklayer/contract/MACAddress.h \
  base/QueueBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv-uu/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h
$O/networklayer/manetrouting/base/ManetAddress.o: networklayer/manetrouting/base/ManetAddress.cc \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/base/ManetAddress.h
$O/networklayer/manetrouting/base/ManetNetfilterHook.o: networklayer/manetrouting/base/ManetNetfilterHook.cc \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/QueueBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv4Address.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/manetrouting/base/ManetRoutingBase.o: networklayer/manetrouting/base/ManetRoutingBase.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/IPassiveQueue.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ReassemblyBuffer.h \
  mobility/contract/IMobility.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/NotifierConsts.h \
  networklayer/contract/IPSocket.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/NotificationBoard.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/base/ControlInfoBreakLink_m.h
$O/networklayer/manetrouting/batman/BatmanMain.o: networklayer/manetrouting/batman/BatmanMain.cc \
  networklayer/common/InterfaceToken.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  util/FWMath.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h
$O/networklayer/manetrouting/batman/batmand/batman.o: networklayer/manetrouting/batman/batmand/batman.cc \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/NotificationBoard.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/common/INetfilter.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h
$O/networklayer/manetrouting/batman/batmand/bitarray.o: networklayer/manetrouting/batman/batmand/bitarray.cc \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/INetfilter.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h
$O/networklayer/manetrouting/batman/batmand/hna.o: networklayer/manetrouting/batman/batmand/hna.cc \
  networklayer/ipv4/IRoutingTable.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  linklayer/contract/MACAddress.h \
  base/QueueBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/INetfilter.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h
$O/networklayer/manetrouting/batman/batmand/originator.o: networklayer/manetrouting/batman/batmand/originator.cc \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/QueueBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  networklayer/ipv4/IRoutingTable.h
$O/networklayer/manetrouting/batman/batmand/os.o: networklayer/manetrouting/batman/batmand/os.cc \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/common/INetfilter.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  util/FWMath.h
$O/networklayer/manetrouting/batman/batmand/ring_buffer.o: networklayer/manetrouting/batman/batmand/ring_buffer.cc \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/QueueBase.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h
$O/networklayer/manetrouting/batman/batmand/schedule.o: networklayer/manetrouting/batman/batmand/schedule.cc \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/batman/BatmanMsg.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/batman/batmand/batman.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/batman/BatmanMain.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/QueueBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/manetrouting/batman/BatmanMsg_m.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h
$O/networklayer/manetrouting/dsdv/DSDV_2.o: networklayer/manetrouting/dsdv/DSDV_2.cc \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/contract/IPSocket.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsdv/DSDV_2.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dsdv/DSDVhello_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o: networklayer/manetrouting/dsr/dsr-pkt_omnet.cc \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  base/INETDefs.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h
$O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o: networklayer/manetrouting/dsr/dsr-uu-omnetpp.cc \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPSocket.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o: networklayer/manetrouting/dsr/dsr-uu/dsr-ack.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o: networklayer/manetrouting/dsr/dsr-uu/dsr-io.cc \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/common/INetfilter.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-opt.cc \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.cc \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.cc \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.cc \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-srt.cc \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h
$O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o: networklayer/manetrouting/dsr/dsr-uu/link-cache.cc \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h
$O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o: networklayer/manetrouting/dsr/dsr-uu/maint-buf.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/ipv4/ICMPAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/manetrouting/dsr/dsr-uu/neigh.o: networklayer/manetrouting/dsr/dsr-uu/neigh.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h
$O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o: networklayer/manetrouting/dsr/dsr-uu/path-cache.cc \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/common/INetfilter.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h
$O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o: networklayer/manetrouting/dsr/dsr-uu/send-buf.cc \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/ipv4/ICMPAccess.h \
  util/headerserializers/ipv4/headers/ip.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h
$O/networklayer/manetrouting/dymo/dymo_msg_struct.o: networklayer/manetrouting/dymo/dymo_msg_struct.cc \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h
$O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o: networklayer/manetrouting/dymo/dymo_packet_queue_omnet.cc \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/QueueBase.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/common/INetfilter.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h
$O/networklayer/manetrouting/dymo/dymo_um_omnet.o: networklayer/manetrouting/dymo/dymo_um_omnet.cc \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  linklayer/contract/MACAddress.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/ipv4/IPv4.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  base/ReassemblyBuffer.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/base/compatibility.h \
  transport/udp/UDPPacket.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h
$O/networklayer/manetrouting/dymo/dymoum/blacklist.o: networklayer/manetrouting/dymo/dymoum/blacklist.cc \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/QueueBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/AbstractQueue.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/base/compatibility.h
$O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o: networklayer/manetrouting/dymo/dymoum/debug_dymo.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/MACAddress.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o: networklayer/manetrouting/dymo/dymoum/dymo_generic.cc \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o: networklayer/manetrouting/dymo/dymoum/dymo_hello.cc \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/ipv4/IPv4.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/base/compatibility.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o: networklayer/manetrouting/dymo/dymoum/dymo_nb.cc \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/common/INetfilter.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/QueueBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_re.o: networklayer/manetrouting/dymo/dymoum/dymo_re.cc \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/MeshControlInfo_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/Coord.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  linklayer/contract/MACAddress.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o: networklayer/manetrouting/dymo/dymoum/dymo_rerr.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/AbstractQueue.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o: networklayer/manetrouting/dymo/dymoum/dymo_socket.cc \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/ipv4/ICMPMessage.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o: networklayer/manetrouting/dymo/dymoum/dymo_timeout.cc \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/dymo_netlink.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/NotifierConsts.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/base/compatibility.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o: networklayer/manetrouting/dymo/dymoum/dymo_uerr.cc \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h
$O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o: networklayer/manetrouting/dymo/dymoum/icmp_socket.cc \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/QueueBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/common/INetfilter.h
$O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o: networklayer/manetrouting/dymo/dymoum/pending_rreq.cc \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h
$O/networklayer/manetrouting/dymo/dymoum/rtable.o: networklayer/manetrouting/dymo/dymoum/rtable.cc \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/k_route.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/dymo_netlink.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h
$O/networklayer/manetrouting/dymo/dymoum/timer_queue.o: networklayer/manetrouting/dymo/dymoum/timer_queue.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/QueueBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv4Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h
$O/networklayer/manetrouting/dymo_fau/DYMO.o: networklayer/manetrouting/dymo_fau/DYMO.cc \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  base/QueueBase.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  base/Coord.h \
  transport/contract/UDPSocket.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/common/InterfaceToken.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/manetrouting/base/ControlManetRouting_m.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o: networklayer/manetrouting/dymo_fau/DYMO_DataQueue.cc \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/QueueBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/INetfilter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/RoutingTable.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h
$O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o: networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.cc \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  base/ModuleAccess.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  base/INETDefs.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.cc \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  base/Coord.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  util/FWMath.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  base/QueueBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/RoutingTable.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.cc \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  util/FWMath.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/QueueBase.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o: networklayer/manetrouting/dymo_fau/DYMO_Timer.cc \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o: networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/ipv4/RoutingTable.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  base/ReassemblyBuffer.h \
  linklayer/contract/MACAddress.h \
  base/QueueBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/INetfilter.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h
$O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o: networklayer/manetrouting/dymo_fau/InspectorHelpers.cc \
  base/Compat.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h
$O/networklayer/manetrouting/olsr/OLSR.o: networklayer/manetrouting/olsr/OLSR.cc \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  util/FWMath.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/common/INetfilter.h \
  util/opp_utils.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/QueueBase.h
$O/networklayer/manetrouting/olsr/OLSROPT.o: networklayer/manetrouting/olsr/OLSROPT.cc \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/compatibility.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  networklayer/contract/IPv4ControlInfo.h \
  util/opp_utils.h \
  networklayer/common/INetfilter.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  util/FWMath.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/manetrouting/olsr/OLSROPT.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h
$O/networklayer/manetrouting/olsr/OLSR_ETX.o: networklayer/manetrouting/olsr/OLSR_ETX.cc \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  util/FWMath.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4ControlInfo.h \
  util/opp_utils.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/QueueBase.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/compatibility.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o: networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.cc \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  base/NotificationBoard.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  base/QueueBase.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  util/opp_utils.h \
  networklayer/common/INetfilter.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  util/FWMath.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_state.o: networklayer/manetrouting/olsr/OLSR_ETX_state.cc \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/NotificationBoard.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  util/FWMath.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  util/opp_utils.h \
  networklayer/common/INetfilter.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ProtocolMap.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h
$O/networklayer/manetrouting/olsr/OLSR_rtable.o: networklayer/manetrouting/olsr/OLSR_rtable.cc \
  linklayer/contract/MACAddress.h \
  base/QueueBase.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  networklayer/ipv4/IPv4.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ProtocolMap.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/common/INetfilter.h \
  util/opp_utils.h \
  networklayer/contract/IPv6Address.h \
  networklayer/arp/IARPCache.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Coord.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/manetrouting/base/ManetAddress.h \
  base/ReassemblyBuffer.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Datagram.h \
  base/NotifierConsts.h \
  base/AbstractQueue.h \
  base/NotificationBoard.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/arp/ARP.h
$O/networklayer/manetrouting/olsr/OLSR_state.o: networklayer/manetrouting/olsr/OLSR_state.cc \
  base/ModuleAccess.h \
  util/FWMath.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPv4FragBuf.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/base/ManetAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h \
  base/Coord.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/QueueBase.h \
  linklayer/contract/MACAddress.h \
  util/opp_utils.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/ProtocolMap.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/arp/ARP.h \
  networklayer/manetrouting/base/ManetNetfilterHook.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  base/NotificationBoard.h \
  base/AbstractQueue.h \
  base/NotifierConsts.h
$O/networklayer/mpls/LIBTable.o: networklayer/mpls/LIBTable.cc \
  base/INETDefs.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/mpls/LIBTable.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/ConstType.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/XMLUtils.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/mpls/MPLS.o: networklayer/mpls/MPLS.cc \
  base/ILifecycle.h \
  networklayer/rsvp_te/Utils.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/mpls/LIBTable.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/INotifiable.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPSocketMap.h \
  networklayer/mpls/IClassifier.h \
  networklayer/mpls/ConstType.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/mpls/MPLSPacket.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ldp/LDPPacket_m.h \
  networklayer/rsvp_te/IntServ.h \
  transport/contract/UDPSocket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  status/NodeStatus.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/ldp/LDP.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/mpls/MPLS.h
$O/networklayer/mpls/MPLSPacket.o: networklayer/mpls/MPLSPacket.cc \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/mpls/MPLSPacket.h
$O/networklayer/ospfv2/OSPFConfigReader.o: networklayer/ospfv2/OSPFConfigReader.cc \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/INotifiable.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceEntry.h \
  util/XMLUtils.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h \
  base/NotificationBoard.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h \
  util/PatternMatcher.h \
  networklayer/ospfv2/OSPFConfigReader.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/ospfv2/OSPFRouting.o: networklayer/ospfv2/OSPFRouting.cc \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  base/ILifecycle.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPSocket.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/OSPFConfigReader.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/ospfv2/interface/OSPFInterface.o: networklayer/ospfv2/interface/OSPFInterface.cc \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/INotifiable.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/ospfv2/interface/OSPFInterfaceState.o: networklayer/ospfv2/interface/OSPFInterfaceState.cc \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o: networklayer/ospfv2/interface/OSPFInterfaceStateBackup.cc \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.cc \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o: networklayer/ospfv2/interface/OSPFInterfaceStateDown.cc \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o: networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.cc \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.cc \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o: networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.cc \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o: networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.cc \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h
$O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o: networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.cc \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/networklayer/ospfv2/messagehandler/HelloHandler.o: networklayer/ospfv2/messagehandler/HelloHandler.cc \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h
$O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o: networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.cc \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h
$O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o: networklayer/ospfv2/messagehandler/LinkStateRequestHandler.cc \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h
$O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o: networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.cc \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/ospfv2/messagehandler/MessageHandler.o: networklayer/ospfv2/messagehandler/MessageHandler.cc \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h
$O/networklayer/ospfv2/neighbor/OSPFNeighbor.o: networklayer/ospfv2/neighbor/OSPFNeighbor.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborState.o: networklayer/ospfv2/neighbor/OSPFNeighborState.cc \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o: networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.cc \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o: networklayer/ospfv2/neighbor/OSPFNeighborStateDown.cc \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  base/NotifierConsts.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.cc \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.cc \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  base/NotifierConsts.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o: networklayer/ospfv2/neighbor/OSPFNeighborStateFull.cc \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o: networklayer/ospfv2/neighbor/OSPFNeighborStateInit.cc \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/contract/IPvXAddressResolver.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o: networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o: networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.cc \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/ospfv2/router/OSPFArea.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h
$O/networklayer/ospfv2/router/ASExternalLSA.o: networklayer/ospfv2/router/ASExternalLSA.cc \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/LSA.o: networklayer/ospfv2/router/LSA.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddressResolver.h
$O/networklayer/ospfv2/router/NetworkLSA.o: networklayer/ospfv2/router/NetworkLSA.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddressResolver.h
$O/networklayer/ospfv2/router/OSPFArea.o: networklayer/ospfv2/router/OSPFArea.cc \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h
$O/networklayer/ospfv2/router/OSPFRouter.o: networklayer/ospfv2/router/OSPFRouter.cc \
  base/NotifierConsts.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/OSPFTimer.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/Compat.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4ControlInfo.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h
$O/networklayer/ospfv2/router/OSPFRoutingTableEntry.o: networklayer/ospfv2/router/OSPFRoutingTableEntry.cc \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/ospfv2/router/RouterLSA.o: networklayer/ospfv2/router/RouterLSA.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPvXAddressResolver.h
$O/networklayer/ospfv2/router/SummaryLSA.o: networklayer/ospfv2/router/SummaryLSA.cc \
  networklayer/contract/IPvXAddressResolver.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/routing/aodv/AODVRouteData.o: networklayer/routing/aodv/AODVRouteData.cc \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/routing/aodv/AODVRouteData.h
$O/networklayer/routing/aodv/AODVRouting.o: networklayer/routing/aodv/AODVRouting.cc \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/INetfilter.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/MACAddress.h \
  base/LifecycleOperation.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/routing/aodv/AODVRouting.h \
  transport/contract/UDPSocket.h \
  transport/contract/UDPControlInfo.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  base/NotificationBoard.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  networklayer/contract/IPSocket.h \
  networklayer/routing/aodv/AODVControlPackets_m.h \
  base/NotifierConsts.h \
  networklayer/routing/aodv/AODVRouteData.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  transport/udp/UDPPacket.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/routing/dymo/DYMORouteData.o: networklayer/routing/dymo/DYMORouteData.cc \
  networklayer/routing/dymo/DYMORouteData.h \
  networklayer/routing/dymo/DYMOdefs.h \
  networklayer/ipv4/IPv4Route.h \
  base/INETDefs.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/networklayer/routing/dymo/xDYMO.o: networklayer/routing/dymo/xDYMO.cc \
  networklayer/contract/IPSocket.h \
  base/NotifierConsts.h \
  networklayer/routing/dymo/DYMOdefs.h \
  base/NotificationBoard.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddressResolver.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/routing/dymo/DYMORouteData.h \
  transport/udp/UDPPacket.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/INetfilter.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/ILifecycle.h \
  networklayer/routing/dymo/xDYMO.h \
  transport/contract/UDPControlInfo.h \
  networklayer/routing/dymo/DYMO_m.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h
$O/networklayer/routing/gpsr/GPSR.o: networklayer/routing/gpsr/GPSR.cc \
  networklayer/common/InterfaceTableAccess.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/routing/gpsr/PositionTable.h \
  networklayer/common/InterfaceToken.h \
  base/NotificationBoard.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  networklayer/contract/IPSocket.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/udp/UDPPacket.h \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/routing/gpsr/GPSR_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/routing/gpsr/GPSR.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/routing/gpsr/GPSRDefs.h \
  mobility/contract/IMobility.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h \
  base/Coord.h
$O/networklayer/routing/gpsr/PositionTable.o: networklayer/routing/gpsr/PositionTable.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/Coord.h \
  util/FWMath.h \
  networklayer/contract/IPv6Address.h \
  networklayer/routing/gpsr/PositionTable.h
$O/networklayer/routing/rip/RIPRouting.o: networklayer/routing/rip/RIPRouting.cc \
  base/Compat.h \
  transport/udp/UDP.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  transport/contract/UDPSocket.h \
  transport/contract/UDPControlInfo.h \
  base/LifecycleOperation.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/routing/rip/RIPPacket_m.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  networklayer/routing/rip/RIPRouting.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceMatcher.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/common/InterfaceEntry.h
$O/networklayer/rsvp_te/RSVP.o: networklayer/rsvp_te/RSVP.cc \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  status/NodeStatus.h \
  util/common.h \
  base/NodeOperations.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotificationBoard.h \
  networklayer/rsvp_te/RSVPPathMsg.h \
  networklayer/mpls/LIBTableAccess.h \
  base/NotifierConsts.h \
  networklayer/contract/IPSocket.h \
  base/IScriptable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  util/XMLUtils.h \
  networklayer/ted/TED_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/ted/TEDAccess.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  base/ILifecycle.h \
  networklayer/rsvp_te/Utils.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/mpls/LIBTable.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/mpls/ConstType.h \
  networklayer/mpls/IClassifier.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/rsvp_te/RSVP.h \
  networklayer/rsvp_te/IRSVPClassifier.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/rsvp_te/RSVPPacket.h \
  base/LifecycleOperation.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  networklayer/rsvp_te/SignallingMsg_m.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/ted/TED.h \
  networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/rsvp_te/SimpleClassifier.o: networklayer/rsvp_te/SimpleClassifier.cc \
  base/IScriptable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  util/XMLUtils.h \
  networklayer/rsvp_te/SimpleClassifier.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/rsvp_te/RSVPPathMsg.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/mpls/ConstType.h \
  networklayer/mpls/IClassifier.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/rsvp_te/RSVP.h \
  base/ModuleAccess.h \
  networklayer/rsvp_te/IRSVPClassifier.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/rsvp_te/RSVPPacket.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  networklayer/rsvp_te/SignallingMsg_m.h \
  networklayer/rsvp_te/RSVPAccess.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ILifecycle.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  base/INETDefs.h \
  networklayer/mpls/LIBTable.h \
  base/Compat.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h
$O/networklayer/rsvp_te/Utils.o: networklayer/rsvp_te/Utils.cc \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/rsvp_te/Utils.h \
  base/INETDefs.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/rsvp_te/IntServ_m.h
$O/networklayer/ted/LinkStateRouting.o: networklayer/ted/LinkStateRouting.cc \
  networklayer/ted/TEDAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ted/LinkStateRouting.h \
  networklayer/ted/TED_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/contract/IPSocket.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/ted/TED.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  networklayer/ted/LinkStatePacket_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/ted/TED.o: networklayer/ted/TED.cc \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/NodeOperations.h \
  status/NodeStatus.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ted/TED_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ted/TED.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  base/LifecycleOperation.h
$O/networklayer/xmipv6/BindingCache.o: networklayer/xmipv6/BindingCache.cc \
  networklayer/xmipv6/BindingCache.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/xmipv6/BindingUpdateList.o: networklayer/xmipv6/BindingUpdateList.cc \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceEntry.h \
  base/Compat.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h
$O/networklayer/xmipv6/MobilityHeader.o: networklayer/xmipv6/MobilityHeader.cc \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/contract/IPProtocolId_m.h
$O/networklayer/xmipv6/xMIPv6.o: networklayer/xmipv6/xMIPv6.cc \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6tunneling/IPv6Tunneling.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/xmipv6/MobilityHeader.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/xmipv6/BindingCache.h \
  base/NotifierConsts.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv6/IPv6ExtensionHeaders.h \
  base/NotificationBoard.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/xmipv6/xMIPv6.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/xmipv6/BindingUpdateListAccess.h \
  base/ModuleAccess.h \
  networklayer/xmipv6/BindingCacheAccess.h \
  networklayer/xmipv6/MobilityHeader_m.h \
  networklayer/xmipv6/BindingUpdateList.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/icmpv6/IPv6NeighbourCache.h
$O/ofomnet/openflow/Buffer.o: ofomnet/openflow/Buffer.cc \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  ofomnet/openflow/openflow.h \
  linklayer/ethernet/Ethernet.h \
  ofomnet/openflow/Buffer.h
$O/ofomnet/openflow/Flow_Table.o: ofomnet/openflow/Flow_Table.cc \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  linklayer/ethernet/Ethernet.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/Flow_Table.h
$O/ofomnet/openflow/OFA_controller.o: ofomnet/openflow/OFA_controller.cc \
  ofomnet/openflow/ctrlApps/Forwarding.h \
  ofomnet/openflow/OFA_controller.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  ofomnet/openflow/messages/OFP_Flow_Stats_Reply_m.h \
  ofomnet/openflow/ctrlApps/Hub.h \
  ofomnet/openflow/ctrlApps/Switch.h \
  base/ModuleAccess.h \
  ofomnet/openflow/messages/OFP_Echo_Request_m.h \
  networklayer/ipv4/IRoutingTable.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  ofomnet/openflow/messages/OFP_Echo_Reply_m.h \
  base/INotifiable.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  transport/tcp/TCPConnection.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/ILifecycle.h \
  ofomnet/openflow/messages/OFP_Flow_Removed_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  linklayer/contract/MACAddress.h \
  transport/tcp/TCP.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  ofomnet/openflow/messages/OFP_Packet_Out_m.h \
  ofomnet/openflow/messages/OFP_Flow_Stats_Request_m.h \
  ofomnet/openflow/messages/OFP_Flow_Mod_m.h \
  ofomnet/openflow/OF_Wrapper.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/messages/OFP_Features_Reply_m.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/contract/IPProtocolId_m.h \
  ofomnet/openflow/messages/OFP_Port_Status_m.h \
  transport/tcp_common/TCPSegment_m.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  base/NotificationBoard.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  ofomnet/openflow/messages/OFP_Features_Request_m.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
  applications/tcpapp/GenericAppMsg_m.h \
  networklayer/ipv4/IPv4Datagram.h
$O/ofomnet/openflow/OFA_switch.o: ofomnet/openflow/OFA_switch.cc \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  ofomnet/openflow/OFA_switch.h \
  networklayer/arp/ARPPacket_m.h \
  ofomnet/openflow/messages/OFP_Flow_Removed_m.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  ofomnet/openflow/Open_Flow_Processing.h \
  ofomnet/openflow/messages/OFP_Echo_Reply_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ethernet/EtherFrame_m.h \
  ofomnet/openflow/messages/OFP_Flow_Stats_Reply_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/contract/TCPCommand_m.h \
  base/NotifierConsts.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  linklayer/ethernet/Ethernet.h \
  ofomnet/openflow/messages/OFP_Port_Status_m.h \
  networklayer/contract/IPProtocolId_m.h \
  ofomnet/openflow/OF_Wrapper.h \
  ofomnet/openflow/messages/OFP_Features_Reply_m.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/Flow_Table.h \
  ofomnet/openflow/messages/OFP_Flow_Mod_m.h \
  ofomnet/openflow/Buffer.h \
  ofomnet/openflow/messages/OFP_Packet_Out_m.h \
  ofomnet/openflow/messages/OFP_Flow_Stats_Request_m.h
$O/ofomnet/openflow/OF_Wrapper.o: ofomnet/openflow/OF_Wrapper.cc \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  ofomnet/openflow/OF_Wrapper.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h
$O/ofomnet/openflow/Open_Flow_Processing.o: ofomnet/openflow/Open_Flow_Processing.cc \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  ofomnet/openflow/Open_Flow_Processing.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/arp/ARPPacket_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  ofomnet/openflow/Buffer.h \
  ofomnet/openflow/Flow_Table.h \
  transport/udp/UDPPacket.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/OF_Wrapper.h \
  transport/tcp_common/TCPSegment_m.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  base/NotifierConsts.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArray.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h
$O/ofomnet/openflow/apps/PingAppRandom.o: ofomnet/openflow/apps/PingAppRandom.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  ofomnet/openflow/apps/PingAppRandom.h \
  linklayer/contract/MACAddress.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPv6ControlInfo_m.h
$O/ofomnet/openflow/attackDetection/AttackDetection.o: ofomnet/openflow/attackDetection/AttackDetection.cc \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  ofomnet/openflow/openflow.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/contract/IPProtocolId_m.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  ofomnet/openflow/OFA_controller.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/ofomnet/openflow/attackDetection/methods/Entropy.o: ofomnet/openflow/attackDetection/methods/Entropy.cc \
  networklayer/ipv4/IPv4Datagram.h \
  transport/contract/TCPCommand_m.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/contract/IPProtocolId_m.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  linklayer/contract/MACAddress.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ethernet/EtherFrame_m.h \
  ofomnet/openflow/OFA_controller.h
$O/ofomnet/openflow/ctrlApps/Forwarding.o: ofomnet/openflow/ctrlApps/Forwarding.cc \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  ofomnet/openflow/OFA_controller.h \
  ofomnet/openflow/ctrlApps/Forwarding.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ethernet/EtherMAC.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  base/IPassiveQueue.h \
  linklayer/ethernet/EtherMACBase.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  base/INotifiable.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/arp/ARPPacket_m.h \
  base/ILifecycle.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/common/MACBase.h \
  networklayer/common/InterfaceEntry.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/OF_Wrapper.h \
  base/NotifierConsts.h \
  transport/contract/TCPCommand_m.h \
  status/NodeStatus.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/NotificationBoard.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h
$O/ofomnet/openflow/ctrlApps/FwdSwitch.o: ofomnet/openflow/ctrlApps/FwdSwitch.cc \
  ofomnet/openflow/OFA_controller.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  transport/udp/UDPPacket.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/OF_Wrapper.h \
  transport/tcp_common/TCPSegment_m.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/contract/IPProtocolId_m.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  ofomnet/openflow/ctrlApps/FwdSwitch.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArray.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Datagram.h
$O/ofomnet/openflow/ctrlApps/Hub.o: ofomnet/openflow/ctrlApps/Hub.cc \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/OF_Wrapper.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/ethernet/Ethernet.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPSocket.h \
  linklayer/contract/MACAddress.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  ofomnet/openflow/OFA_controller.h \
  ofomnet/openflow/ctrlApps/Hub.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/ofomnet/openflow/ctrlApps/Switch.o: ofomnet/openflow/ctrlApps/Switch.cc \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/ethernet/EtherFrame_m.h \
  ofomnet/openflow/ctrlApps/Switch.h \
  ofomnet/openflow/OFA_controller.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPSocket.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/ethernet/Ethernet.h \
  ofomnet/openflow/OF_Wrapper.h \
  ofomnet/openflow/openflow.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/contract/TCPCommand_m.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h
$O/ofomnet/openflow/mitigation/Mitigation.o: ofomnet/openflow/mitigation/Mitigation.cc \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  ofomnet/openflow/attackDetection/AttackDetection.h \
  ofomnet/openflow/OF_Wrapper.h \
  ofomnet/openflow/openflow.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/contract/IPProtocolId_m.h \
  ofomnet/openflow/attackDetection/methods/Entropy.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h \
  ofomnet/openflow/messages/OFP_Packet_In_m.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  ofomnet/openflow/mitigation/Mitigation.h \
  linklayer/contract/MACAddress.h \
  ofomnet/openflow/OFA_controller.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h
$O/ofomnet/openflow/utility/SpanningTree.o: ofomnet/openflow/utility/SpanningTree.cc \
  ofomnet/openflow/Open_Flow_Processing.h \
  ofomnet/openflow/utility/SpanningTree.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/arp/ARPPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  ofomnet/openflow/Buffer.h \
  ofomnet/openflow/Flow_Table.h \
  ofomnet/openflow/OF_Wrapper.h \
  ofomnet/openflow/openflow.h \
  networklayer/contract/IPProtocolId_m.h \
  linklayer/ethernet/Ethernet.h
$O/ofomnet/openflow/utility/kPartitionNetwork.o: ofomnet/openflow/utility/kPartitionNetwork.cc \
  ofomnet/openflow/utility/kPartitionNetwork.h
$O/ofomnet/openflow/utility/placeController.o: ofomnet/openflow/utility/placeController.cc \
  ofomnet/openflow/Buffer.h \
  ofomnet/openflow/Flow_Table.h \
  ofomnet/openflow/utility/placeController.h \
  ofomnet/openflow/OF_Wrapper.h \
  ofomnet/openflow/openflow.h \
  linklayer/ethernet/Ethernet.h \
  networklayer/contract/IPProtocolId_m.h \
  ofomnet/openflow/messages/Open_Flow_Message_m.h \
  transport/contract/TCPCommand_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  ofomnet/openflow/Open_Flow_Processing.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h
$O/parser/Parser.o: parser/Parser.cc \
  actions/destroy/Destroy.h \
  /usr/include/glib-2.0/glib/gtree.h \
  /usr/include/glib-2.0/glib/gerror.h \
  /usr/include/glib-2.0/glib/gcharset.h \
  base/INETDefs.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludestart.h \
  actions/seappexpression/SEAPPExpression.h \
  /usr/include/libxml++-2.6/libxml++/libxml++.h \
  /usr/include/glib-2.0/glib/gtimer.h \
  actions/actionbase/ActionBase.h \
  /usr/include/libxml++-2.6/libxml++/noncopyable.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidatorbase.h \
  /usr/include/libxml++-2.6/libxml++/parsers/domparser.h \
  /usr/include/libxml++-2.6/libxml++/nodes/contentnode.h \
  /usr/include/glib-2.0/glib/glib-autocleanups.h \
  /usr/include/glib-2.0/glib/deprecated/gmain.h \
  /usr/include/libxml++-2.6/libxml++/validators/relaxngvalidator.h \
  attacks/conditionalattack/conditionalattack/ConditionalAttack.h \
  /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/glib-2.0/glib/gthread.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/glib-2.0/glib/grand.h \
  networklayer/contract/IPv4Address.h \
  /usr/include/glib-2.0/glib/ghook.h \
  /usr/include/libxml++-2.6/libxml++/validators/schemavalidator.h \
  actions/create/Create.h \
  base/Compat.h \
  /usr/include/libxml++-2.6/libxml++/nodes/node.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/parse_error.h \
  variable/Variable.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/glib-2.0/glib/gpoll.h \
  globalfilter/putmessages/PutMessages.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  /usr/include/libxml++-2.6/libxml++/nodes/commentnode.h \
  actions/retrieve/Retrieve.h \
  /usr/include/glib-2.0/glib/goption.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/validity_error.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/ghostutils.h \
  /usr/include/glib-2.0/glib/gversionmacros.h \
  actions/put/Put.h \
  /usr/include/glib-2.0/glib/ghmac.h \
  /usr/include/glib-2.0/glib/deprecated/gallocator.h \
  util/seapputils/seapputils.h \
  /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/glibmm-2.4/glibmm/unicode.h \
  util/FWMath.h \
  /usr/include/glib-2.0/glib/gshell.h \
  attacks/unconditionalattack/UnconditionalAttack.h \
  attacks/conditionalattack/packetfilter/FilterBlock.h \
  /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entityreference.h \
  /usr/include/glib-2.0/glib/gqsort.h \
  parser/Parser.h \
  /usr/include/libxml++-2.6/libxml++/xsdschema.h \
  base/Coord.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  attacks/attackentry/AttackEntry.h \
  /usr/include/libxml++-2.6/libxml++/attributenode.h \
  attacks/physicalattack/PhysicalAttack.h \
  /usr/include/glib-2.0/glib/gqueue.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  actions/send/Send.h \
  /usr/include/glib-2.0/glib/gversion.h \
  /usr/lib/x86_64-linux-gnu/libxml++-2.6/include/libxml++config.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/glib-2.0/glib/gstringchunk.h \
  actions/drop/Drop.h \
  /usr/include/libxml++-2.6/libxml++/parsers/textreader.h \
  /usr/include/glib-2.0/glib/gnode.h \
  /usr/include/glib-2.0/glib/gbitlock.h \
  /usr/include/glib-2.0/glib/deprecated/grel.h \
  /usr/include/libxml++-2.6/libxml++/document.h \
  /usr/include/libxml++-2.6/libxml++/relaxngschema.h \
  /usr/include/libxml++-2.6/libxml++/nodes/xincludeend.h \
  /usr/include/libxml++-2.6/libxml++/nodes/textnode.h \
  /usr/include/glibmm-2.4/glibmm/ustring.h \
  /usr/include/libxml++-2.6/libxml++/parsers/saxparser.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/libxml++-2.6/libxml++/attribute.h \
  /usr/include/libxml++-2.6/libxml++/nodes/cdatanode.h \
  /usr/include/libxml++-2.6/libxml++/parsers/parser.h \
  /usr/include/glib-2.0/glib/ghash.h \
  /usr/include/glib-2.0/glib/gdate.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/libxml++-2.6/libxml++/attributedeclaration.h \
  /usr/include/libxml++-2.6/libxml++/schema.h \
  /usr/include/glib-2.0/glib/gmain.h \
  /usr/include/libxml++-2.6/libxml++/dtd.h \
  actions/clone/Clone.h \
  /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/libxml++-2.6/libxml++/nodes/entitydeclaration.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  actions/disable/Disable.h \
  /usr/include/glib-2.0/glib/deprecated/gthread.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/glib-2.0/glib/genviron.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/exception.h \
  attacks/conditionalattack/packetfilter/PacketFilter.h \
  /usr/include/libxml++-2.6/libxml++/validators/dtdvalidator.h \
  /usr/include/glib-2.0/glib/gmem.h \
  actions/change/Change.h \
  /usr/include/libxml++-2.6/libxml++/schemabase.h \
  /usr/include/glib-2.0/glib/gwin32.h \
  actions/move/Move.h \
  /usr/include/glib-2.0/glib/gdatetime.h \
  /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/glib-2.0/glib/gvariant.h \
  /usr/include/glib-2.0/glib.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib/ggettext.h \
  attacks/attackbase/AttackBase.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  /usr/include/libxml++-2.6/libxml++/nodes/processinginstructionnode.h \
  /usr/include/libxml++-2.6/libxml++/nodes/element.h \
  /usr/include/glib-2.0/glib/gtimezone.h \
  /usr/include/glib-2.0/glib/deprecated/gcache.h \
  /usr/include/glib-2.0/glib/glist.h \
  /usr/include/glib-2.0/glib/gurifuncs.h \
  /usr/include/libxml++-2.6/libxml++/validators/xsdvalidator.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/glib-2.0/glib/gbytes.h \
  /usr/include/glib-2.0/glib/gtrashstack.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  /usr/include/libxml++-2.6/libxml++/validators/validator.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  actions/disable/nodeRelease/NodeRelease.h \
  /usr/include/glib-2.0/glib/deprecated/gcompletion.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/lib/x86_64-linux-gnu/glib-2.0/include/glibconfig.h \
  /usr/include/libxml++-2.6/libxml++/exceptions/internal_error.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/glib-2.0/glib/gvarianttype.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/lib/x86_64-linux-gnu/glibmm-2.4/include/glibmmconfig.h
$O/status/NodeStatus.o: status/NodeStatus.cc \
  base/Compat.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  base/LifecycleOperation.h \
  base/ModuleAccess.h \
  base/NodeOperations.h \
  status/NodeStatus.h
$O/transport/contract/SCTPSocket.o: transport/contract/SCTPSocket.cc \
  transport/contract/SCTPCommand_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/SCTPSocket.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h \
  transport/contract/SCTPCommand.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTP.h
$O/transport/contract/TCPSocket.o: transport/contract/TCPSocket.cc \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPCommand_m.h
$O/transport/contract/TCPSocketMap.o: transport/contract/TCPSocketMap.cc \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPSocketMap.h \
  networklayer/contract/IPv6Address.h
$O/transport/contract/UDPSocket.o: transport/contract/UDPSocket.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/Compat.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  transport/contract/UDPSocket.h \
  transport/contract/UDPControlInfo.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  transport/contract/UDPControlInfo_m.h
$O/transport/rtp/RTCP.o: transport/rtp/RTCP.cc \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  base/LifecycleOperation.h \
  transport/contract/UDPSocket.h \
  transport/rtp/RTPParticipantInfo.h \
  base/ILifecycle.h \
  transport/rtp/RTCPPacket3.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/rtp/RTCPPacket.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/sdes.h \
  transport/rtp/RTCPPacket3_m.h \
  transport/rtp/reports.h \
  base/Compat.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/RTPPacket.h \
  transport/contract/UDPControlInfo_m.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTCPPacket1_m.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTCP.h \
  transport/rtp/RTCPPacket2_m.h \
  transport/rtp/RTPReceiverInfo.h \
  transport/rtp/RTPSenderInfo.h \
  transport/rtp/RTCPPacket2.h \
  transport/rtp/RTCPPacket1.h \
  transport/rtp/RTPInnerPacket_m.h \
  status/NodeStatus.h
$O/transport/rtp/RTCPPacket.o: transport/rtp/RTCPPacket.cc \
  transport/rtp/RTCPPacket2.h \
  transport/rtp/RTCPPacket1.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTCPPacket1_m.h \
  transport/rtp/RTCPPacket2_m.h \
  transport/rtp/RTCPPacket3.h \
  base/INETDefs.h \
  transport/rtp/RTCPPacket.h \
  transport/rtp/sdes.h \
  transport/rtp/RTCPPacket3_m.h \
  base/Compat.h \
  transport/rtp/reports.h
$O/transport/rtp/RTP.o: transport/rtp/RTP.cc \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  status/NodeStatus.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTP.h \
  transport/rtp/RTPProfile.h \
  networklayer/common/InterfaceEntry.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPInterfacePacket_m.h \
  transport/contract/UDPControlInfo_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  transport/contract/UDPSocket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IPv4Route.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  base/LifecycleOperation.h
$O/transport/rtp/RTPInnerPacket.o: transport/rtp/RTPInnerPacket.cc \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/INETDefs.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInnerPacket_m.h
$O/transport/rtp/RTPPacket.o: transport/rtp/RTPPacket.cc \
  base/INETDefs.h \
  base/Compat.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPacket_m.h
$O/transport/rtp/RTPParticipantInfo.o: transport/rtp/RTPParticipantInfo.cc \
  transport/rtp/RTPParticipantInfo.h \
  base/INETDefs.h \
  transport/rtp/sdes.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/rtp/reports.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTPPacket_m.h
$O/transport/rtp/RTPPayloadReceiver.o: transport/rtp/RTPPayloadReceiver.cc \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/INETDefs.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPPayloadReceiver.h
$O/transport/rtp/RTPPayloadSender.o: transport/rtp/RTPPayloadSender.cc \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPPayloadSender.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPInterfacePacket_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInnerPacket.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INETDefs.h \
  transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPProfile.o: transport/rtp/RTPProfile.cc \
  transport/rtp/RTPSenderStatusMessage_m.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPPayloadSender.h \
  transport/rtp/RTPPayloadReceiver.h \
  transport/rtp/RTPInnerPacket_m.h \
  transport/rtp/RTPProfile.h
$O/transport/rtp/RTPReceiverInfo.o: transport/rtp/RTPReceiverInfo.cc \
  transport/rtp/RTPParticipantInfo.h \
  base/INETDefs.h \
  transport/rtp/reports.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/rtp/sdes.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPReceiverInfo.h
$O/transport/rtp/RTPSenderInfo.o: transport/rtp/RTPSenderInfo.cc \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPParticipantInfo_m.h \
  transport/rtp/reports_m.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPSenderInfo.h \
  transport/rtp/RTPParticipantInfo.h \
  base/INETDefs.h \
  transport/rtp/sdes.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/rtp/reports.h
$O/transport/rtp/reports.o: transport/rtp/reports.cc \
  transport/rtp/reports.h \
  transport/rtp/reports_m.h
$O/transport/rtp/sdes.o: transport/rtp/sdes.cc \
  transport/rtp/sdes.h \
  base/Compat.h \
  base/INETDefs.h
$O/transport/rtp/profiles/avprofile/RTPAVProfile.o: transport/rtp/profiles/avprofile/RTPAVProfile.cc \
  transport/rtp/profiles/avprofile/RTPAVProfile.h \
  transport/rtp/RTPProfile.h \
  base/Compat.h \
  base/INETDefs.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.cc \
  transport/rtp/RTPPayloadReceiver.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  base/INETDefs.h \
  base/Compat.h \
  transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.cc \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.h \
  base/INETDefs.h \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket_m.h \
  transport/rtp/RTPPayloadSender.h \
  transport/rtp/RTPInnerPacket_m.h
$O/transport/sctp/SCTP.o: transport/sctp/SCTP.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/contract/UDPControlInfo_m.h \
  transport/sctp/SCTP.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/contract/IPSocket.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/SCTPCommand.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h
$O/transport/sctp/SCTPAlg.o: transport/sctp/SCTPAlg.cc \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/sctp/SCTPAlg.h \
  transport/sctp/SCTPAlgorithm.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h
$O/transport/sctp/SCTPAssociationAddIP.o: transport/sctp/SCTPAssociationAddIP.cc \
  base/Compat.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/contract/UDPSocket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/sctp/SCTPGapList.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPvXAddressResolver.h \
  util/common.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h
$O/transport/sctp/SCTPAssociationBase.o: transport/sctp/SCTPAssociationBase.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAlgorithm.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv6/RoutingTable6Access.h \
  transport/contract/UDPSocket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  base/Compat.h \
  transport/contract/SCTPCommand_m.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h
$O/transport/sctp/SCTPAssociationEventProc.o: transport/sctp/SCTPAssociationEventProc.cc \
  transport/contract/SCTPCommand_m.h \
  base/Compat.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/UDPSocket.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPGapList.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTP.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/sctp/SCTPAlgorithm.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h
$O/transport/sctp/SCTPAssociationRcvMessage.o: transport/sctp/SCTPAssociationRcvMessage.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPAlgorithm.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  util/common.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/SCTPCommand.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  transport/contract/SCTPCommand_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/INotifiable.h
$O/transport/sctp/SCTPAssociationSendAll.o: transport/sctp/SCTPAssociationSendAll.cc \
  transport/sctp/SCTPGapList.h \
  transport/contract/SCTPCommand.h \
  transport/contract/UDPSocket.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6Address.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  transport/contract/SCTPCommand_m.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPAlgorithm.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h
$O/transport/sctp/SCTPAssociationStreamReset.o: transport/sctp/SCTPAssociationStreamReset.cc \
  base/Compat.h \
  transport/contract/SCTPCommand_m.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/UDPSocket.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPGapList.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h
$O/transport/sctp/SCTPAssociationUtil.o: transport/sctp/SCTPAssociationUtil.cc \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  networklayer/contract/IPv6ControlInfo.h \
  util/common.h \
  base/NotificationBoard.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/UDPControlInfo_m.h \
  transport/sctp/SCTPAlgorithm.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTP.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  base/Compat.h \
  transport/contract/SCTPCommand_m.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/contract/UDPSocket.h \
  transport/contract/SCTPCommand.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h
$O/transport/sctp/SCTPCCFunctions.o: transport/sctp/SCTPCCFunctions.cc \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPGapList.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h
$O/transport/sctp/SCTPGapList.o: transport/sctp/SCTPGapList.cc \
  base/Compat.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPGapList.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h
$O/transport/sctp/SCTPMessage.o: transport/sctp/SCTPMessage.cc \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPSocket.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h
$O/transport/sctp/SCTPNatHook.o: transport/sctp/SCTPNatHook.cc \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/QueueBase.h \
  networklayer/ipv4/IPv4.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ProtocolMap.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  networklayer/common/INetfilter.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/arp/IARPCache.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IPv4FragBuf.h \
  transport/sctp/SCTPNatHook.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPGapList.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  base/AbstractQueue.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPNatTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/ICMP.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/ICMPMessage.h \
  transport/sctp/SCTP.h
$O/transport/sctp/SCTPNatTable.o: transport/sctp/SCTPNatTable.cc \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPNatTable.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPSocket.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/transport/sctp/SCTPQueue.o: transport/sctp/SCTPQueue.cc \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPSocket.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h
$O/transport/sctp/SCTPReceiveStream.o: transport/sctp/SCTPReceiveStream.cc \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPSocket.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  base/ModuleAccess.h
$O/transport/sctp/SCTPSSFunctions.o: transport/sctp/SCTPSSFunctions.cc \
  transport/sctp/SCTPGapList.h \
  transport/contract/UDPSocket.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  base/ModuleAccess.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  transport/sctp/SCTPReceiveStream.h \
  base/ILifecycle.h \
  transport/sctp/SCTP.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h
$O/transport/sctp/SCTPSendStream.o: transport/sctp/SCTPSendStream.cc \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTP.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPSendStream.h \
  transport/contract/UDPSocket.h
$O/transport/tcp/TCP.o: transport/tcp/TCP.cc \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  transport/tcp/queues/TCPByteStreamRcvQueue.h \
  transport/tcp/TCP.h \
  linklayer/contract/MACAddress.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/queues/TCPMsgBasedRcvQueue.h \
  transport/tcp/TCPConnection.h \
  base/Compat.h \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPv6Address.h \
  base/ByteArrayBuffer.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  base/ModuleAccess.h \
  base/LifecycleOperation.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/queues/TCPByteStreamSendQueue.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/ByteArray.h \
  networklayer/contract/IPSocket.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/queues/TCPMsgBasedSendQueue.h \
  transport/tcp/queues/TCPVirtualDataSendQueue.h \
  networklayer/contract/IPv6ControlInfo.h \
  transport/tcp_common/TCPSegment.h \
  status/NodeStatus.h \
  base/ByteArray_m.h \
  base/NodeOperations.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  transport/tcp/TCPSendQueue.h
$O/transport/tcp/TCPConnectionBase.o: transport/tcp/TCPConnectionBase.cc \
  transport/tcp/TCPSACKRexmitQueue.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/Compat.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPReceiveQueue.h
$O/transport/tcp/TCPConnectionEventProc.o: transport/tcp/TCPConnectionEventProc.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPReceiveQueue.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPAlgorithm.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h
$O/transport/tcp/TCPConnectionRcvSegment.o: transport/tcp/TCPConnectionRcvSegment.cc \
  transport/tcp/TCPReceiveQueue.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  base/Compat.h \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArray.h \
  transport/tcp/TCPSACKRexmitQueue.h
$O/transport/tcp/TCPConnectionSackUtil.o: transport/tcp/TCPConnectionSackUtil.cc \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/tcp/TCPAlgorithm.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  transport/tcp/TCPReceiveQueue.h \
  networklayer/contract/IPv6Address.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/TCPConnectionUtil.o: transport/tcp/TCPConnectionUtil.cc \
  transport/tcp/TCPSendQueue.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  transport/tcp/TCPReceiveQueue.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h \
  base/ILifecycle.h \
  linklayer/contract/MACAddress.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h
$O/transport/tcp/TCPSACKRexmitQueue.o: transport/tcp/TCPSACKRexmitQueue.cc \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPSACKRexmitQueue.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h
$O/transport/tcp/flavours/DumbTCP.o: transport/tcp/flavours/DumbTCP.cc \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/flavours/DumbTCP.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  base/Compat.h \
  transport/tcp/TCPAlgorithm.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h
$O/transport/tcp/flavours/TCPBaseAlg.o: transport/tcp/flavours/TCPBaseAlg.cc \
  transport/tcp/TCPSACKRexmitQueue.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPAlgorithm.h \
  base/Compat.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPv6Address.h
$O/transport/tcp/flavours/TCPNewReno.o: transport/tcp/flavours/TCPNewReno.cc \
  transport/tcp/TCP.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  base/Compat.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/flavours/TCPNewReno.h
$O/transport/tcp/flavours/TCPNoCongestionControl.o: transport/tcp/flavours/TCPNoCongestionControl.cc \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/TCPNoCongestionControl.h \
  base/Compat.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h
$O/transport/tcp/flavours/TCPReno.o: transport/tcp/flavours/TCPReno.cc \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArray.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/TCPReno.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  transport/tcp/TCP.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h
$O/transport/tcp/flavours/TCPSegmentTransmitInfoList.o: transport/tcp/flavours/TCPSegmentTransmitInfoList.cc \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/tcp/TCPAlgorithm.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h \
  transport/tcp_common/TCPSegment_m.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  transport/tcp/flavours/TCPBaseAlg.h
$O/transport/tcp/flavours/TCPTahoe.o: transport/tcp/flavours/TCPTahoe.cc \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  base/ILifecycle.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  transport/tcp/flavours/TCPTahoe.h \
  transport/tcp/TCPAlgorithm.h
$O/transport/tcp/flavours/TCPTahoeRenoFamily.o: transport/tcp/flavours/TCPTahoeRenoFamily.cc \
  transport/tcp_common/TCPSegment_m.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  networklayer/contract/IPv6Address.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/TCP.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h
$O/transport/tcp/flavours/TCPVegas.o: transport/tcp/flavours/TCPVegas.cc \
  transport/tcp/flavours/TCPVegas.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  base/Compat.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h
$O/transport/tcp/flavours/TCPWestwood.o: transport/tcp/flavours/TCPWestwood.cc \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  base/Compat.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/flavours/TCPWestwood.h \
  transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPByteStreamRcvQueue.o: transport/tcp/queues/TCPByteStreamRcvQueue.cc \
  base/ILifecycle.h \
  transport/tcp/queues/TCPByteStreamRcvQueue.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv6Address.h \
  base/ByteArrayMessage.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  base/ByteArrayMessage_m.h
$O/transport/tcp/queues/TCPByteStreamSendQueue.o: transport/tcp/queues/TCPByteStreamSendQueue.cc \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCP.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/ILifecycle.h \
  networklayer/contract/IPv6Address.h \
  base/ByteArrayMessage.h \
  base/ByteArrayBuffer.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  transport/tcp/queues/TCPByteStreamSendQueue.h \
  base/ByteArrayMessage_m.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPMsgBasedRcvQueue.o: transport/tcp/queues/TCPMsgBasedRcvQueue.cc \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/TCPReceiveQueue.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/queues/TCPMsgBasedRcvQueue.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  base/Compat.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  transport/tcp/TCP.h \
  base/ILifecycle.h
$O/transport/tcp/queues/TCPMsgBasedSendQueue.o: transport/tcp/queues/TCPMsgBasedSendQueue.cc \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPSendQueue.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp/queues/TCPMsgBasedSendQueue.h \
  transport/contract/TCPCommand_m.h \
  base/ByteArray.h \
  networklayer/contract/IPv6Address.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/Compat.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv4Address.h
$O/transport/tcp/queues/TCPVirtualDataRcvQueue.o: transport/tcp/queues/TCPVirtualDataRcvQueue.cc \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  base/ILifecycle.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  transport/tcp/TCPReceiveQueue.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h
$O/transport/tcp/queues/TCPVirtualDataSendQueue.o: transport/tcp/queues/TCPVirtualDataSendQueue.cc \
  base/ILifecycle.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPv4Address.h \
  transport/tcp/TCPConnection.h \
  base/Compat.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/queues/TCPVirtualDataSendQueue.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp/TCPSendQueue.h
$O/transport/tcp_common/TCPSegment.o: transport/tcp_common/TCPSegment.cc \
  base/INETDefs.h \
  base/Compat.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/ByteArray.h
$O/transport/tcp_common/TCPSpoof.o: transport/tcp_common/TCPSpoof.cc \
  networklayer/contract/IPv4ControlInfo.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  transport/tcp_common/TCPSpoof.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/ByteArray_m.h \
  networklayer/contract/IPvXAddressResolver.h \
  base/ByteArray.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/tcp_common/TCPSegment_m.h
$O/transport/udp/UDP.o: transport/udp/UDP.cc \
  base/LifecycleOperation.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/IPv4Route.h \
  transport/contract/UDPControlInfo.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/icmpv6/ICMPv6.h \
  base/ModuleAccess.h \
  networklayer/contract/IPv4ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4ControlInfo.h \
  base/Compat.h \
  transport/udp/UDP.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv4Address.h \
  base/ILifecycle.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/icmpv6/ICMPv6Access.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/contract/IPv6ControlInfo.h \
  status/NodeStatus.h \
  base/NodeOperations.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  networklayer/contract/IPSocket.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/common/InterfaceToken.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceTableAccess.h
$O/util/Delayer.o: util/Delayer.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/Delayer.h
$O/util/Macho.o: util/Macho.cc \
  util/Macho.h
$O/util/MessageChecker.o: util/MessageChecker.cc \
  util/MessageChecker.h \
  base/Compat.h \
  base/INETDefs.h
$O/util/NetAnimTrace.o: util/NetAnimTrace.cc \
  util/FWMath.h \
  base/ModuleAccess.h \
  mobility/contract/IMobility.h \
  base/Coord.h \
  util/NetAnimTrace.h \
  base/INETDefs.h \
  base/Compat.h
$O/util/OrdinalBasedDropper.o: util/OrdinalBasedDropper.cc \
  base/Compat.h \
  base/INETDefs.h \
  util/OrdinalBasedDropper.h
$O/util/OrdinalBasedDuplicator.o: util/OrdinalBasedDuplicator.cc \
  util/OrdinalBasedDuplicator.h \
  base/INETDefs.h \
  base/Compat.h
$O/util/PacketDump.o: util/PacketDump.cc \
  transport/sctp/SCTPAssociation.h \
  base/NotifierConsts.h \
  base/ByteArray.h \
  transport/sctp/SCTPQueue.h \
  transport/tcp_common/TCPSegment.h \
  networklayer/common/InterfaceTable.h \
  base/ByteArray_m.h \
  base/NotificationBoard.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  util/PacketDump.h \
  transport/sctp/SCTP.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/ICMPMessage.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/INotifiable.h \
  networklayer/contract/IPv4Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  base/ILifecycle.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPGapList.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPSendStream.h \
  base/ModuleAccess.h
$O/util/PatternMatcher.o: util/PatternMatcher.cc \
  base/Compat.h \
  base/INETDefs.h \
  util/PatternMatcher.h
$O/util/PcapDump.o: util/PcapDump.cc \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  util/headerserializers/ipv6/IPv6Serializer.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  util/PcapDump.h \
  networklayer/ipv6/IPv6Datagram_m.h
$O/util/PcapRecorder.o: util/PcapRecorder.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  util/PcapDump.h \
  util/PacketDump.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/PcapRecorder.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/INETDefs.h \
  networklayer/ipv6/IPv6Datagram.h
$O/util/TCPDump.o: util/TCPDump.cc \
  util/PacketDump.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/TCPDump.h \
  util/PcapDump.h \
  networklayer/contract/IPProtocolId_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h
$O/util/ThruputMeter.o: util/ThruputMeter.cc \
  util/ThruputMeter.h \
  base/INETDefs.h \
  base/Compat.h
$O/util/ThruputMeteringChannel.o: util/ThruputMeteringChannel.cc \
  util/ThruputMeteringChannel.h \
  base/INETDefs.h \
  base/Compat.h
$O/util/XMLUtils.o: util/XMLUtils.cc \
  util/XMLUtils.h \
  networklayer/contract/IPvXAddressResolver.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h
$O/util/common.o: util/common.cc \
  util/common.h \
  base/Compat.h \
  base/INETDefs.h
$O/util/int128.o: util/int128.cc \
  base/INETDefs.h \
  base/Compat.h \
  util/int128.h
$O/util/opp_utils.o: util/opp_utils.cc \
  util/opp_utils.h \
  base/Compat.h \
  base/INETDefs.h
$O/util/headerserializers/TCPIPchecksum.o: util/headerserializers/TCPIPchecksum.cc \
  base/Compat.h \
  base/INETDefs.h \
  util/headerserializers/TCPIPchecksum.h
$O/util/headerserializers/ipv4/ICMPSerializer.o: util/headerserializers/ipv4/ICMPSerializer.cc \
  applications/pingapp/PingPayload_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/ipv4/headers/ip_icmp.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/headerserializers/TCPIPchecksum.h \
  util/headerserializers/ipv4/headers/ip.h \
  util/headerserializers/headers/in.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/headerserializers/headers/in_systm.h \
  networklayer/contract/IPv4Address.h \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/headers/defs.h \
  base/INETDefs.h \
  util/headerserializers/ipv4/ICMPSerializer.h
$O/util/headerserializers/ipv4/IGMPSerializer.o: util/headerserializers/ipv4/IGMPSerializer.cc \
  util/headerserializers/ipv4/IPv4Serializer.h \
  networklayer/ipv4/IGMPMessage_m.h \
  util/headerserializers/ipv4/headers/ip.h \
  util/headerserializers/headers/in.h \
  util/headerserializers/ipv4/headers/igmp.h \
  base/INETDefs.h \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/headers/in_systm.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  networklayer/contract/IPv4Address.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/TCPIPchecksum.h \
  networklayer/ipv4/IPv4Datagram.h \
  util/headerserializers/ipv4/IGMPSerializer.h
$O/util/headerserializers/ipv4/IPv4Serializer.o: util/headerserializers/ipv4/IPv4Serializer.cc \
  util/headerserializers/sctp/SCTPSerializer.h \
  transport/sctp/SCTPMessage.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  networklayer/ipv4/IGMPMessage_m.h \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/headers/in.h \
  util/headerserializers/tcp/headers/tcp.h \
  util/headerserializers/ipv4/headers/ip.h \
  util/headerserializers/ipv4/ICMPSerializer.h \
  util/headerserializers/udp/UDPSerializer.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  util/headerserializers/headers/in_systm.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  transport/tcp_common/TCPSegment_m.h \
  transport/udp/UDPPacket.h \
  util/headerserializers/tcp/TCPSerializer.h \
  util/headerserializers/TCPIPchecksum.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  util/headerserializers/ipv4/IGMPSerializer.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/ByteArray.h
$O/util/headerserializers/ipv6/IPv6Serializer.o: util/headerserializers/ipv6/IPv6Serializer.cc \
  networklayer/ipv6/IPv6Datagram_m.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  base/ByteArray.h \
  util/headerserializers/tcp/TCPSerializer.h \
  util/headerserializers/TCPIPchecksum.h \
  transport/udp/UDPPacket_m.h \
  transport/udp/UDPPacket.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/tcp_common/TCPSegment_m.h \
  util/headerserializers/headers/defs.h \
  networklayer/contract/IPv4Address.h \
  util/headerserializers/headers/in_systm.h \
  base/Compat.h \
  networklayer/ipv6/IPv6Datagram.h \
  util/headerserializers/udp/UDPSerializer.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  util/headerserializers/headers/in.h \
  util/headerserializers/ipv6/IPv6Serializer.h \
  util/headerserializers/tcp/headers/tcp.h \
  util/headerserializers/ipv6/headers/ip6.h \
  transport/sctp/SCTPMessage.h \
  util/headerserializers/sctp/SCTPSerializer.h \
  networklayer/contract/IPv6Address.h
$O/util/headerserializers/sctp/SCTPSerializer.o: util/headerserializers/sctp/SCTPSerializer.cc \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/headers/in_systm.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INotifiable.h \
  base/ILifecycle.h \
  transport/sctp/SCTPReceiveStream.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/common/IInterfaceTable.h \
  util/headerserializers/ipv4/headers/ip.h \
  util/headerserializers/headers/in.h \
  transport/contract/UDPSocket.h \
  transport/sctp/SCTPGapList.h \
  util/headerserializers/ipv4/IPv4Serializer.h \
  base/ModuleAccess.h \
  transport/sctp/SCTPSendStream.h \
  transport/sctp/SCTPMessage.h \
  util/headerserializers/sctp/SCTPSerializer.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPQueue.h \
  networklayer/common/InterfaceTable.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/common/InterfaceToken.h \
  transport/sctp/SCTP.h \
  util/headerserializers/sctp/headers/sctp.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h
$O/util/headerserializers/tcp/TCPSerializer.o: util/headerserializers/tcp/TCPSerializer.cc \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPv4Address.h \
  base/Compat.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/tcp/headers/tcp.h \
  util/headerserializers/headers/in.h \
  util/headerserializers/tcp/TCPSerializer.h \
  util/headerserializers/TCPIPchecksum.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPProtocolId_m.h
$O/util/headerserializers/udp/UDPSerializer.o: util/headerserializers/udp/UDPSerializer.cc \
  util/headerserializers/udp/UDPSerializer.h \
  base/INETDefs.h \
  util/headerserializers/headers/in_systm.h \
  base/Compat.h \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/headers/defs.h \
  base/ByteArrayMessage.h \
  util/headerserializers/udp/headers/udp.h \
  util/headerserializers/headers/in.h \
  transport/udp/UDPPacket_m.h \
  util/headerserializers/TCPIPchecksum.h \
  base/ByteArray.h \
  base/ByteArray_m.h \
  transport/udp/UDPPacket.h \
  base/ByteArrayMessage_m.h
$O/util/messageprinters/InetPacketBytesPrinter.o: util/messageprinters/InetPacketBytesPrinter.cc \
  base/Compat.h \
  base/INETDefs.h
$O/util/messageprinters/InetPacketPrinter.o: util/messageprinters/InetPacketPrinter.cc \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp_common/TCPSegment.h \
  base/ByteArray_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/ByteArray.h \
  networklayer/ipv4/IPv4Datagram.h \
  transport/udp/UDPPacket_m.h \
  transport/udp/UDPPacket.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  transport/tcp_common/TCPSegment_m.h
$O/util/messageprinters/InetPacketPrinter2.o: util/messageprinters/InetPacketPrinter2.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/arp/ARPPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  networklayer/contract/IPv4Address.h \
  networklayer/ipv4/IPv4Datagram_m.h \
  base/Compat.h \
  util/FWMath.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  base/Coord.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/IPv4Datagram.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/ByteArray_m.h \
  transport/tcp_common/TCPSegment.h \
  linklayer/ethernet/EtherFrame.h \
  base/ByteArray.h \
  networklayer/routing/rip/RIPPacket_m.h \
  linklayer/radio/ModulationType.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/ICMPMessage.h \
  linklayer/radio/AirFrame_m.h \
  transport/tcp_common/TCPSegment_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  linklayer/ethernet/Ethernet.h \
  applications/pingapp/PingPayload_m.h \
  transport/udp/UDPPacket.h
$O/util/seapputils/seapputils.o: util/seapputils/seapputils.cc \
  util/seapputils/seapputils.h \
  base/Compat.h \
  networklayer/contract/IPv4Address.h \
  base/INETDefs.h
$O/variable/Variable.o: variable/Variable.cc \
  variable/Variable.h
$O/world/annotations/AnnotationDummy.o: world/annotations/AnnotationDummy.cc \
  base/INETDefs.h \
  base/Compat.h \
  ./world/annotations/AnnotationDummy.h
$O/world/annotations/AnnotationManager.o: world/annotations/AnnotationManager.cc \
  base/Coord.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  ./world/annotations/AnnotationManager.h \
  base/Compat.h \
  base/INETDefs.h
$O/world/httptools/HttpController.o: world/httptools/HttpController.cc \
  applications/httptools/HttpUtils.h \
  base/INETDefs.h \
  base/Compat.h \
  world/httptools/HttpController.h \
  applications/httptools/HttpRandom.h \
  applications/httptools/HttpEventMessages_m.h \
  applications/httptools/HttpMessages_m.h
$O/world/obstacles/Obstacle.o: world/obstacles/Obstacle.cc \
  ./world/annotations/AnnotationManager.h \
  base/Compat.h \
  base/INETDefs.h \
  base/Coord.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  ./world/obstacles/Obstacle.h
$O/world/obstacles/ObstacleControl.o: world/obstacles/ObstacleControl.cc \
  ./world/obstacles/Obstacle.h \
  ./world/obstacles/ObstacleControl.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Coord.h \
  base/INETDefs.h \
  base/Compat.h \
  ./world/annotations/AnnotationManager.h
$O/world/radio/ChannelAccess.o: world/radio/ChannelAccess.cc \
  base/INotifiable.h \
  base/Compat.h \
  world/radio/ChannelAccess.h \
  base/INETDefs.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  world/radio/IChannelControl.h \
  base/BasicModule.h
$O/world/radio/ChannelControl.o: world/radio/ChannelControl.cc \
  base/Compat.h \
  base/INETDefs.h \
  base/Coord.h \
  util/FWMath.h \
  world/radio/ChannelControl.h \
  world/radio/IChannelControl.h \
  linklayer/radio/ModulationType.h \
  linklayer/radio/AirFrame_m.h
$O/world/radio/IdealChannelModel.o: world/radio/IdealChannelModel.cc \
  linklayer/radio/IdealRadio.h \
  world/radio/IdealChannelModelAccess.h \
  linklayer/radio/IdealAirFrame_m.h \
  base/NotificationBoard.h \
  base/NotifierConsts.h \
  world/radio/IdealChannelModel.h \
  base/BasicModule.h \
  base/ILifecycle.h \
  base/INETDefs.h \
  base/Compat.h \
  base/INotifiable.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  linklayer/contract/RadioState.h \
  base/Coord.h
$O/world/radio/IdealChannelModelAccess.o: world/radio/IdealChannelModelAccess.cc \
  base/NotifierConsts.h \
  world/radio/IdealChannelModelAccess.h \
  base/NotificationBoard.h \
  world/radio/IdealChannelModel.h \
  base/BasicModule.h \
  base/INETDefs.h \
  base/Compat.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Coord.h \
  mobility/contract/IMobility.h
$O/world/scenario/ScenarioManager.o: world/scenario/ScenarioManager.cc \
  base/IScriptable.h \
  base/Compat.h \
  world/scenario/ScenarioManager.h \
  base/INETDefs.h
$O/world/traci/TraCIScenarioManager.o: world/traci/TraCIScenarioManager.cc \
  mobility/common/MobilityBase.h \
  ./world/traci/TraCIConstants.h \
  base/INETDefs.h \
  base/Compat.h \
  ./world/traci/TraCIScenarioManager.h \
  util/FWMath.h \
  base/ModuleAccess.h \
  base/Coord.h \
  mobility/contract/IMobility.h \
  ./mobility/single/TraCIMobility.h
$O/world/traci/TraCIScenarioManagerLaunchd.o: world/traci/TraCIScenarioManagerLaunchd.cc \
  base/Coord.h \
  ./world/traci/TraCIScenarioManagerLaunchd.h \
  base/ModuleAccess.h \
  util/FWMath.h \
  base/Compat.h \
  ./world/traci/TraCIScenarioManager.h \
  base/INETDefs.h \
  ./world/traci/TraCIConstants.h
